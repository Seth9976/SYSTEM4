/* src/hll/Sys43VM.c */
#include "system4/string.h"  // 用于 cstr_to_string()  
#include "vm/heap.h"         // 用于 heap_alloc_string()
// bool Sys43VM_GetFunctionNameList(ref array<string> FunctionNameList);
#include "vm/page.h" // For array functions
#include "vm.h" // For 'ain' global
#include "hll.h"
// bool Sys43VM_GetFunctionNameList(ref array<string> FunctionNameList);
static bool Sys43VM_GetFunctionNameList(struct page **FunctionNameList) {
    if (!ain) return false;

    // 如果传入的数组非空，先清空它
    if (*FunctionNameList) {
        delete_page_vars(*FunctionNameList);
        free_page(*FunctionNameList);
        *FunctionNameList = NULL;
    }

    // 创建一个新的字符串数组
    union vm_value dims = { .i = ain->nr_functions };
    *FunctionNameList = alloc_array(1, &dims, AIN_ARRAY_STRING, -1, false);

    // 填充函数名
    for (int i = 0; i < ain->nr_functions; i++) {
        struct string *s = cstr_to_string(ain->functions[i].name);
        int slot = heap_alloc_string(s);
        (*FunctionNameList)->values[i].i = slot;
    }

    return true;
}

// bool Sys43VM_BeginProfiler(void);
HLL_WARN_UNIMPLEMENTED(false, bool, Sys43VM, BeginProfiler);
// bool Sys43VM_EndProfiler(void);
HLL_WARN_UNIMPLEMENTED(false, bool, Sys43VM, EndProfiler);
// int Sys43VM_GetActualNumofPage(void);
HLL_WARN_UNIMPLEMENTED(0, int, Sys43VM, GetActualNumofPage);
// int Sys43VM_GetActualMemorySize(void);
HLL_WARN_UNIMPLEMENTED(0, int, Sys43VM, GetActualMemorySize);

HLL_LIBRARY(Sys43VM,
    HLL_EXPORT(GetFunctionNameList, Sys43VM_GetFunctionNameList),
    HLL_EXPORT(BeginProfiler, Sys43VM_BeginProfiler),
    HLL_EXPORT(EndProfiler, Sys43VM_EndProfiler),
    HLL_EXPORT(GetActualNumofPage, Sys43VM_GetActualNumofPage),
    HLL_EXPORT(GetActualMemorySize, Sys43VM_GetActualMemorySize)
);