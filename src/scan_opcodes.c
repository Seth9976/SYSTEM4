#include <stdio.h>  
#include <stdlib.h>  
#include <stdbool.h>  
#include <stdint.h>  
#include "system4.h"  
#include "system4/ain.h"  
#include "system4/instructions.h"  
#include "system4/little_endian.h"  
  
int main(int argc, char *argv[]) {  
    if (argc < 2) {  
        fprintf(stderr, "Usage: %s <path_to_ain_file>\n", argv[0]);  
        return 1;  
    }  
  
    // **关键修复：初始化指令表**  
    initialize_instructions(0);  
  
    int error;  
    struct ain *ain = ain_open(argv[1], &error);  
    if (!ain) {  
        fprintf(stderr, "Failed to open AIN file: %s\n", ain_strerror(error));  
        return 1;  
    }  
  
    printf("Scanning for opcodes in %s...\n", argv[1]);  
    printf("AIN version: %d.%d\n", ain->version, ain->minor_version);  
  
    // 使用一个数组来记录每个操作码是否出现过  
    bool seen_opcodes[NR_OPCODES] = { false };  
  
    size_t instr_ptr = 0;  
    while (instr_ptr < ain->code_size) {  
        // 读取 opcode 并移除 OPTYPE_MASK（断点标志）  
        uint16_t raw_opcode = LittleEndian_getW(ain->code, instr_ptr);  
        enum opcode op = raw_opcode & ~OPTYPE_MASK;  
  
        if (op >= NR_OPCODES) {  
            fprintf(stderr, "Unknown opcode 0x%X (raw: 0x%X) at address 0x%zX. Aborting.\n",  
                    op, raw_opcode, instr_ptr);  
            break;  
        }  
  
        seen_opcodes[op] = true;  
  
        int width = instruction_width(op);  
        if (width <= 0 || (size_t)(instr_ptr + width) > ain->code_size) {  
            fprintf(stderr, "Invalid instruction width %d for opcode 0x%X at 0x%zX. Aborting.\n",  
                    width, op, instr_ptr);  
            break;  
        }  
        instr_ptr += width;  
    }  
  
    printf("\n--- Found Opcodes ---\n");  
    int count = 0;  
    for (int i = 0; i < NR_OPCODES; i++) {  
        if (seen_opcodes[i]) {  
            printf("Opcode 0x%02X: %-20s %s\n", i, instructions[i].name,  
                   instructions[i].implemented ? "" : "(unimplemented)");  
            count++;  
        }  
    }  
    printf("\nTotal: %d unique opcodes found\n", count);  
  
    ain_free(ain);  
    return 0;  
}