/* --- 自动生成的 PartsEngine.c 开始 --- */
/*
 * ==============================================================================
 * 自动生成的 PartsEngine HLL 桥接文件
 *
 * 此文件由 Python 脚本基于 'para.txt' 和 'src/parts' 源代码 自动生成。
 * 手动修改此文件后，请注意不要被脚本覆盖。
 * ==============================================================================
 */

#include <assert.h>
#include <math.h> // 用于 (int) 转换

#include "system4/ain.h"
#include "parts_internal.h" // [cite: 1238-1300]
#include "parts.h"
#include "hll.h"
#include "id_pool.h"        //
#include "system4/string.h" // [cite: 668]
#include "vm/page.h"        // [cite: 201-202]

/* --- 全局变量 --- */
static struct id_pool parts_pool; //
static struct id_pool parts_pool; //
static int g_active_controller_id = -1; // 新增：用于跟踪 system43 API 所需的活动控制器 ID
static int active_controller = 0;
/* --- 前向声明 --- */
static void PartsEngine_SetComponentType(int Number, int Type, int State);
static int PartsEngine_GetFreeNumber(void);
static void PartsEngine_Release(int Number);
static bool PartsEngine_Parts_SetPartsFontType(int Number, int Type, int State);
static void PartsEngine_SetWantSaveBackScene(int Number, bool Enable);
static bool PartsEngine_IsExist(int Number);
static void PartsEngine_BeginInput(void);
static void PartsEngine_EndInput(void);
static void PartsEngine_BeginMotion(void);
static void PartsEngine_EndMotion(void);
static bool PartsEngine_IsMotion(void);
static void PartsEngine_SeekEndMotion(void);
static void PartsEngine_UpdateMotionTime(int Time, bool Skip);
static void PartsEngine_AddWholeMotionVibrationSize(int BeginWidth, int BeginHeight, int BeginTime, int EndTime);
static int PartsEngine_GetDelegateIndex(int Number);
static void PartsEngine_SetDelegateIndex(int Number, int DelegateIndex);
static void PartsEngine_SetComponentPos(int Number, float X, float Y);
static float PartsEngine_Parts_GetPartsUpperLeftPosX(int Number, int State);
static float PartsEngine_Parts_GetPartsUpperLeftPosY(int Number, int State);
static void PartsEngine_Parts_SetInputState(int Number, int State);
static int PartsEngine_Parts_GetInputState(int Number);
static void PartsEngine_SetComponentOriginPosMode(int Number, int OriginPosMode);
static int PartsEngine_GetComponentOriginPosMode(int Number);
static int PartsEngine_Parts_GetPartsWidth(int Number, int State);
static int PartsEngine_Parts_GetPartsHeight(int Number, int State);
static void PartsEngine_SetComponentShow(int Number, bool Show);
static void PartsEngine_SetComponentMessageWindowShowLink(int Number, bool Link);
static void PartsEngine_SetComponentAlpha(int Number, int Alpha);
static int PartsEngine_GetComponentAlpha(int Number);
static void PartsEngine_SetComponentAddColor(int Number, int R, int G, int B);
static void PartsEngine_SetComponentDrawFilter(int Number, int DrawFilter);
static int PartsEngine_GetComponentDrawFilter(int Number);
static void PartsEngine_SetComponentMagX(int Number, float Mag);
static void PartsEngine_SetComponentMagY(int Number, float Mag);
static float PartsEngine_GetComponentMagX(int Number);
static float PartsEngine_GetComponentMagY(int Number);
static void PartsEngine_SetComponentRotateX(int Number, float Rotate);
static void PartsEngine_SetComponentRotateY(int Number, float Rotate);
static void PartsEngine_SetComponentRotateZ(int Number, float Rotate);
static float PartsEngine_GetComponentRotateZ(int Number);
static void PartsEngine_Parts_SetOnCursorShowLinkPartsNumber(int Number, int LinkPartsNumber);
static int PartsEngine_Parts_GetOnCursorShowLinkPartsNumber(int Number);
static void PartsEngine_SetComponentSpeedupRateByMessageSkip(int Number, int Rate);
static void PartsEngine_Parts_SetParentPartsNumber(int Number, int ParentPartsNumber);
static int PartsEngine_Parts_GetParentPartsNumber(int Number);
static void PartsEngine_AddComponentMotionVibrationSize(int Number, int BeginWidth, int BeginHeight, int BeginTime, int EndTime);
static void PartsEngine_Parts_SetClickable(int Number, bool Clickable);
static bool PartsEngine_Parts_GetPartsClickable(int Number);
static void PartsEngine_Parts_SetPartsPixelDecide(int Number, bool PixelDecide);
static void PartsEngine_Parts_GetPartsCGName(int Number, struct string ** pCGName, int State);
static bool PartsEngine_Parts_SetPartsCGSurfaceArea(int Number, int X, int Y, int Width, int Height, int State);
static bool PartsEngine_Parts_SetLoopCGSurfaceArea(int Number, int X, int Y, int Width, int Height, int State);
static bool PartsEngine_Parts_SetPartsTextSurfaceArea(int Number, int X, int Y, int Width, int Height, int State);
static bool PartsEngine_Parts_SetFont(int Number, int Type, int Size, int R, int G, int B, float BoldWeight, int EdgeR, int EdgeG, int EdgeB, float EdgeWeight, int State);
static bool PartsEngine_Parts_SetPartsFontSize(int Number, int Size, int State);
static bool PartsEngine_Parts_SetPartsFontColor(int Number, int R, int G, int B, int State);
static bool PartsEngine_Parts_SetPartsFontBoldWeight(int Number, float BoldWeight, int State);
static bool PartsEngine_Parts_SetPartsFontEdgeColor(int Number, int R, int G, int B, int State);
static bool PartsEngine_Parts_SetPartsFontEdgeWeight(int Number, float EdgeWeight, int State);
static bool PartsEngine_Parts_SetTextCharSpace(int Number, int CharSpace, int State);
static bool PartsEngine_Parts_SetTextLineSpace(int Number, int LineSpace, int State);
static bool PartsEngine_Parts_SetHGaugeRate(int Number, float Numerator, float Denominator, int State);
static bool PartsEngine_Parts_SetHGaugeSurfaceArea(int Number, int X, int Y, int Width, int Height, int State);
static bool PartsEngine_Parts_SetVGaugeRate(int Number, float Numerator, float Denominator, int State);
static bool PartsEngine_Parts_SetVGaugeSurfaceArea(int Number, int X, int Y, int Width, int Height, int State);
static bool PartsEngine_Parts_SetNumeralNumber(int partsno, int Number, int State);
static bool PartsEngine_Parts_SetNumeralShowComma(int Number, bool ShowComma, int State);
static bool PartsEngine_Parts_SetNumeralSpace(int Number, int NumeralSpace, int State);
static bool PartsEngine_Parts_SetNumeralLength(int Number, int Length, int State);
static bool PartsEngine_Parts_SetNumeralSurfaceArea(int Number, int X, int Y, int Width, int Height, int State);
static bool PartsEngine_Parts_SetPartsRectangleDetectionSize(int Number, int Width, int Height, int State);
static bool PartsEngine_Parts_ClearPartsConstructionProcess(int Number, int State);
static bool PartsEngine_Parts_AddCreateToPartsConstructionProcess(int Number, int nWidth, int nHeight, int State);
static bool PartsEngine_Parts_AddCreatePixelOnlyToPartsConstructionProcess(int Number, int nWidth, int nHeight, int State);
static bool PartsEngine_Parts_AddFillToPartsConstructionProcess(int Number, int nX, int nY, int nWidth, int nHeight, int nR, int nG, int nB, int State);
static bool PartsEngine_Parts_AddFillAlphaColorToPartsConstructionProcess(int Number, int nX, int nY, int nWidth, int nHeight, int nR, int nG, int nB, int nA, int State);
static bool PartsEngine_Parts_AddFillAMapToPartsConstructionProcess(int Number, int nX, int nY, int nWidth, int nHeight, int nAlpha, int State);
//static bool PartsEngine_Parts_AddFillWithAlphaToPartsConstructionProcess(int Number, int nX, int nY, int nWidth, int nHeight, int nR, int nG, int nB, int nA, int State);
//static bool PartsEngine_Parts_AddFillGradationHorizonToPartsConstructionProcess(int Number, int nX, int nY, int nWidth, int nHeight, int nTopR, int nTopG, int nTopB, int nBottomR, int nBottomG, int nBottomB, int State);
static bool PartsEngine_Parts_AddDrawRectToPartsConstructionProcess(int Number, int nX, int nY, int nWidth, int nHeight, int nR, int nG, int nB, int State);
//static bool PartsEngine_Parts_AddGrayFilterToPartsConstructionProcess(int Number, int nX, int nY, int nWidth, int nHeight, bool FullSize, int State);
//static bool PartsEngine_Parts_AddAddFilterToPartsConstructionProcess(int Number, int nX, int nY, int nWidth, int nHeight, int nR, int nG, int nB, bool FullSize, int State);
//static bool PartsEngine_Parts_AddMulFilterToPartsConstructionProcess(int Number, int nX, int nY, int nWidth, int nHeight, int nR, int nG, int nB, bool FullSize, int State);
//static bool PartsEngine_Parts_AddDrawLineToPartsConstructionProcess(int Number, int nX1, int nY1, int nX2, int nY2, int nR, int nG, int nB, int nA, int State);
static bool PartsEngine_Parts_BuildPartsConstructionProcess(int Number, int State);
static bool PartsEngine_Parts_SetPartsConstructionSurfaceArea(int Number, int X, int Y, int Width, int Height, int State);
static bool PartsEngine_Parts_IsCursorIn(int Number, int MouseX, int MouseY, int State);
static void PartsEngine_ModuleInit(void);
static void PartsEngine_ModuleFini(void);
static void PartsEngine_PreLink(void);
static bool PartsEngine_Parts_SetText(int Number, struct string *pIText, int State);
static int PartsEngine_GetActiveController(void);
static void PartsEngine_SetActiveController(int ID);
static void PartsEngine_PopGUIController(void);
static void PartsEngine_UpdateGUIController(int passed_time);

/* --- 包装器实现 --- */
static struct id_pool parts_pool;


/* void PartsEngine.SetComponentType(int Number, int Type, int State); [cite: 18] */
static void PartsEngine_SetComponentType(int Number, int Type, int State) {
    /* * 映射 HLL 的 Type (int) 到 'src/parts' 的 'enum parts_type' [cite: 1250]。
     * 映射 HLL 的 State (1-based) [cite: 22-24] 到 'src/parts' 的 'enum parts_state_type' (0-based) [cite: 1246, 1299]。
     * 调用 parts_state_reset [cite: 1020] 和 parts_get 。
     */
    if (!parts_state_valid(--State)) { // [cite: 1299]
        return;
    }
    struct parts *p = parts_get(Number); // 
    parts_state_reset(&p->states[State], (enum parts_type)Type); // [cite: 1020]
    parts_dirty(p); // [cite: 1010]
}


/* int PartsEngine.GetFreeNumber(); [cite: 1] */
static int PartsEngine_GetFreeNumber(void) {
    /* * 使用 id_pool 来获取一个唯一的 ID。
     * 这与 parts_table (哈希表)  协同工作。
     */
    int handle = id_pool_get_unused(&parts_pool); //

    /*
     * parts_get  会自动在哈希表中创建条目。
     * id_pool_set 用于 id_pool 内部管理，确保池知道这个 ID 被占用了。
     */
    struct parts *p = parts_get(handle); // 
    id_pool_set(&parts_pool, handle, p); //

    return handle;
}


/* void PartsEngine.Release(int Number); [cite: 1] */
static void PartsEngine_Release(int Number) {
    /*
     * 从 id_pool 和 parts_table  中释放部件。
     */
    if (id_pool_get(&parts_pool, Number)) { //
        id_pool_release(&parts_pool, Number); //
        PE_ReleaseParts(Number); // [cite: 1209]
    } else {
        PE_ReleaseParts(Number); // 仍然尝试释放，以防万一
    }
}


/* bool PartsEngine.Parts_SetPartsFontType(int Number, int Type, int State); [cite: 136] */
static bool PartsEngine_Parts_SetPartsFontType(int Number, int Type, int State) {
    /* * 直接映射到 'src/parts/text.c' 中的 PE_SetPartsFontType [cite: 1467]。
     * PE_SetPartsFontType 内部会处理 'State - 1' [cite: 1467]。
     */
    return PE_SetPartsFontType(Number, Type, State); // [cite: 1467]
}


/* void PartsEngine.SetWantSaveBackScene(int Number, bool Enable); [cite: 18] */
static void PartsEngine_SetWantSaveBackScene(int Number, bool Enable) {
    /* * 'src/parts' 中没有 'PE_SetWantSaveBackScene' 的实现。
     * 这是一个桩函数 (stub)，仅打印日志。
     */
    // struct parts *p = parts_try_get(Number); // [cite: 1013]
    // if (!p) return;
    // p->want_save_back_scene = Enable; // 'struct parts' [cite: 1271] 中没有这个字段，需要添加
    // parts_dirty(p); // [cite: 1010]
}


/* bool PartsEngine.IsExist(int Number); */
static bool PartsEngine_IsExist(int Number) {
    /* * 自动映射到 PE_IsExist
     * 无类型转换
     */
    return PE_IsExist(Number);
}


/* void PartsEngine.BeginInput(); */
static void PartsEngine_BeginInput(void) {
    /* * 自动映射到 PE_BeginInput
     * 无类型转换
     */
    PE_BeginInput();
}


/* void PartsEngine.EndInput(); */
static void PartsEngine_EndInput(void) {
    /* * 自动映射到 PE_EndInput
     * 无类型转换
     */
    PE_EndInput();
}


/* void PartsEngine.BeginMotion(); */
static void PartsEngine_BeginMotion(void) {
    /* * 自动映射到 PE_BeginMotion
     * 无类型转换
     */
    PE_BeginMotion();
}


/* void PartsEngine.EndMotion(); */
static void PartsEngine_EndMotion(void) {
    /* * 自动映射到 PE_EndMotion
     * 无类型转换
     */
    PE_EndMotion();
}


/* bool PartsEngine.IsMotion(); */
static bool PartsEngine_IsMotion(void) {
    /* * 自动映射到 PE_IsMotion
     * 无类型转换
     */
    return PE_IsMotion();
}


/* void PartsEngine.SeekEndMotion(); */
static void PartsEngine_SeekEndMotion(void) {
    /* * 自动映射到 PE_SeekEndMotion
     * 无类型转换
     */
    PE_SeekEndMotion();
}


/* void PartsEngine.UpdateMotionTime(int Time, bool Skip); */
static void PartsEngine_UpdateMotionTime(int Time, bool Skip) {
    /* * 自动映射到 PE_UpdateMotionTime
     * 无类型转换
     */
    PE_UpdateMotionTime(Time, Skip);
}


/* void PartsEngine.AddWholeMotionVibrationSize(int BeginWidth, int BeginHeight, int BeginTime, int EndTime); */
static void PartsEngine_AddWholeMotionVibrationSize(int BeginWidth, int BeginHeight, int BeginTime, int EndTime) {
    /* * 自动映射到 PE_AddWholeMotionVibrationSize
     * 无类型转换
     */
    PE_AddWholeMotionVibrationSize(BeginWidth, BeginHeight, BeginTime, EndTime);
}


/* int PartsEngine.GetDelegateIndex(int Number); */
static int PartsEngine_GetDelegateIndex(int Number) {
    /* * 自动映射到 PE_GetDelegateIndex
     * 无类型转换
     */
    return PE_GetDelegateIndex(Number);
}


/* void PartsEngine.SetDelegateIndex(int Number, int DelegateIndex); */
static void PartsEngine_SetDelegateIndex(int Number, int DelegateIndex) {
    /* * 自动映射到 PE_SetDelegateIndex
     * 无类型转换
     */
    PE_SetDelegateIndex(Number, DelegateIndex);
}


/* void PartsEngine.SetComponentPos(int Number, float X, float Y); */
static void PartsEngine_SetComponentPos(int Number, float X, float Y) {
    /* * 自动映射到 PE_SetPos
     * 类型转换: float X -> int x, float Y -> int y
     */
    PE_SetPos(Number, (int)X, (int)Y);
}


/* float PartsEngine.Parts_GetPartsUpperLeftPosX(int Number, int State); */
static float PartsEngine_Parts_GetPartsUpperLeftPosX(int Number, int State) {
    /* * 自动映射到 PE_GetPartsUpperLeftPosX
     * 无类型转换
     */
    return PE_GetPartsUpperLeftPosX(Number, State);
}


/* float PartsEngine.Parts_GetPartsUpperLeftPosY(int Number, int State); */
static float PartsEngine_Parts_GetPartsUpperLeftPosY(int Number, int State) {
    /* * 自动映射到 PE_GetPartsUpperLeftPosY
     * 无类型转换
     */
    return PE_GetPartsUpperLeftPosY(Number, State);
}


/* void PartsEngine.Parts_SetInputState(int Number, int State); */
static void PartsEngine_Parts_SetInputState(int Number, int State) {
    /* * 自动映射到 PE_SetInputState
     * 无类型转换
     */
    PE_SetInputState(Number, State);
}


/* int PartsEngine.Parts_GetInputState(int Number); */
static int PartsEngine_Parts_GetInputState(int Number) {
    /* * 自动映射到 PE_GetInputState
     * 无类型转换
     */
    return PE_GetInputState(Number);
}


/* void PartsEngine.SetComponentOriginPosMode(int Number, int OriginPosMode); */
static void PartsEngine_SetComponentOriginPosMode(int Number, int OriginPosMode) {
    /* * 自动映射到 PE_SetPartsOriginPosMode
     * 无类型转换
     */
    PE_SetPartsOriginPosMode(Number, OriginPosMode);
}


/* int PartsEngine.GetComponentOriginPosMode(int Number); */
static int PartsEngine_GetComponentOriginPosMode(int Number) {
    /* * 自动映射到 PE_GetPartsOriginPosMode
     * 无类型转换
     */
    return PE_GetPartsOriginPosMode(Number);
}


/* int PartsEngine.Parts_GetPartsWidth(int Number, int State); */
static int PartsEngine_Parts_GetPartsWidth(int Number, int State) {
    /* * 自动映射到 PE_GetPartsWidth
     * 无类型转换
     */
    return PE_GetPartsWidth(Number, State);
}


/* int PartsEngine.Parts_GetPartsHeight(int Number, int State); */
static int PartsEngine_Parts_GetPartsHeight(int Number, int State) {
    /* * 自动映射到 PE_GetPartsHeight
     * 无类型转换
     */
    return PE_GetPartsHeight(Number, State);
}


/* void PartsEngine.SetComponentShow(int Number, bool Show); */
static void PartsEngine_SetComponentShow(int Number, bool Show) {
    /* * 自动映射到 PE_SetShow
     * 无类型转换
     */
    PE_SetShow(Number, Show);
}


/* void PartsEngine.SetComponentMessageWindowShowLink(int Number, bool Link); */
static void PartsEngine_SetComponentMessageWindowShowLink(int Number, bool Link) {
    /* * 自动映射到 PE_SetPartsMessageWindowShowLink
     * 无类型转换
     */
    PE_SetPartsMessageWindowShowLink(Number, Link);
}


/* void PartsEngine.SetComponentAlpha(int Number, int Alpha); */
static void PartsEngine_SetComponentAlpha(int Number, int Alpha) {
    /* * 自动映射到 PE_SetAlpha
     * 无类型转换
     */
    PE_SetAlpha(Number, Alpha);
}


/* int PartsEngine.GetComponentAlpha(int Number); */
static int PartsEngine_GetComponentAlpha(int Number) {
    /* * 自动映射到 PE_GetPartsAlpha
     * 无类型转换
     */
    return PE_GetPartsAlpha(Number);
}


/* void PartsEngine.SetComponentAddColor(int Number, int R, int G, int B); */
static void PartsEngine_SetComponentAddColor(int Number, int R, int G, int B) {
    /* * 自动映射到 PE_SetAddColor
     * 无类型转换
     */
    PE_SetAddColor(Number, R, G, B);
}


/* void PartsEngine.SetComponentDrawFilter(int Number, int DrawFilter); */
static void PartsEngine_SetComponentDrawFilter(int Number, int DrawFilter) {
    /* * 自动映射到 PE_SetPartsDrawFilter
     * 无类型转换
     */
    PE_SetPartsDrawFilter(Number, DrawFilter);
}


/* int PartsEngine.GetComponentDrawFilter(int Number); */
static int PartsEngine_GetComponentDrawFilter(int Number) {
    /* * 自动映射到 PE_GetPartsDrawFilter
     * 无类型转换
     */
    return PE_GetPartsDrawFilter(Number);
}


/* void PartsEngine.SetComponentMagX(int Number, float Mag); */
static void PartsEngine_SetComponentMagX(int Number, float Mag) {
    /* * 自动映射到 PE_SetPartsMagX
     * 无类型转换
     */
    PE_SetPartsMagX(Number, Mag);
}


/* void PartsEngine.SetComponentMagY(int Number, float Mag); */
static void PartsEngine_SetComponentMagY(int Number, float Mag) {
    /* * 自动映射到 PE_SetPartsMagY
     * 无类型转换
     */
    PE_SetPartsMagY(Number, Mag);
}


/* float PartsEngine.GetComponentMagX(int Number); */
static float PartsEngine_GetComponentMagX(int Number) {
    /* * 自动映射到 PE_GetPartsMagX
     * 无类型转换
     */
    return PE_GetPartsMagX(Number);
}


/* float PartsEngine.GetComponentMagY(int Number); */
static float PartsEngine_GetComponentMagY(int Number) {
    /* * 自动映射到 PE_GetPartsMagY
     * 无类型转换
     */
    return PE_GetPartsMagY(Number);
}


/* void PartsEngine.SetComponentRotateX(int Number, float Rotate); */
static void PartsEngine_SetComponentRotateX(int Number, float Rotate) {
    /* * 自动映射到 PE_SetPartsRotateX
     * 无类型转换
     */
    PE_SetPartsRotateX(Number, Rotate);
}


/* void PartsEngine.SetComponentRotateY(int Number, float Rotate); */
static void PartsEngine_SetComponentRotateY(int Number, float Rotate) {
    /* * 自动映射到 PE_SetPartsRotateY
     * 无类型转换
     */
    PE_SetPartsRotateY(Number, Rotate);
}


/* void PartsEngine.SetComponentRotateZ(int Number, float Rotate); */
static void PartsEngine_SetComponentRotateZ(int Number, float Rotate) {
    /* * 自动映射到 PE_SetPartsRotateZ
     * 无类型转换
     */
    PE_SetPartsRotateZ(Number, Rotate);
}


/* float PartsEngine.GetComponentRotateZ(int Number); */
static float PartsEngine_GetComponentRotateZ(int Number) {
    /* * 自动映射到 PE_GetPartsRotateZ
     * 无类型转换
     */
    return PE_GetPartsRotateZ(Number);
}


/* void PartsEngine.Parts_SetOnCursorShowLinkPartsNumber(int Number, int LinkPartsNumber); */
static void PartsEngine_Parts_SetOnCursorShowLinkPartsNumber(int Number, int LinkPartsNumber) {
    /* * 自动映射到 PE_SetOnCursorShowLinkPartsNumber
     * 无类型转换
     */
    PE_SetOnCursorShowLinkPartsNumber(Number, LinkPartsNumber);
}


/* int PartsEngine.Parts_GetOnCursorShowLinkPartsNumber(int Number); */
static int PartsEngine_Parts_GetOnCursorShowLinkPartsNumber(int Number) {
    /* * 自动映射到 PE_GetOnCursorShowLinkPartsNumber
     * 无类型转换
     */
    return PE_GetOnCursorShowLinkPartsNumber(Number);
}


/* void PartsEngine.SetComponentSpeedupRateByMessageSkip(int Number, int Rate); */
static void PartsEngine_SetComponentSpeedupRateByMessageSkip(int Number, int Rate) {
    /* * 自动映射到 PE_SetSpeedupRateByMessageSkip
     * 无类型转换
     */
    PE_SetSpeedupRateByMessageSkip(Number, Rate);
}


/* void PartsEngine.Parts_SetParentPartsNumber(int Number, int ParentPartsNumber); */
static void PartsEngine_Parts_SetParentPartsNumber(int Number, int ParentPartsNumber) {
    /* * 自动映射到 PE_SetParentPartsNumber
     * 无类型转换
     */
    PE_SetParentPartsNumber(Number, ParentPartsNumber);
}


/* int PartsEngine.Parts_GetParentPartsNumber(int Number); */
static int PartsEngine_Parts_GetParentPartsNumber(int Number) {
    /* * 自动映射到 PE_GetParentPartsNumber
     * 无类型转换
     */
    return PE_GetParentPartsNumber(Number);
}


/* void PartsEngine.AddComponentMotionVibrationSize(int Number, int BeginWidth, int BeginHeight, int BeginTime, int EndTime); */
static void PartsEngine_AddComponentMotionVibrationSize(int Number, int BeginWidth, int BeginHeight, int BeginTime, int EndTime) {
    /* * 自动映射到 PE_AddMotionVibrationSize
     * 无类型转换
     */
    PE_AddMotionVibrationSize(Number, BeginWidth, BeginHeight, BeginTime, EndTime);
}


/* void PartsEngine.Parts_SetClickable(int Number, bool Clickable); */
static void PartsEngine_Parts_SetClickable(int Number, bool Clickable) {
    /* * 自动映射到 PE_SetClickable
     * 无类型转换
     */
    PE_SetClickable(Number, Clickable);
}


/* bool PartsEngine.Parts_GetPartsClickable(int Number); */
static bool PartsEngine_Parts_GetPartsClickable(int Number) {
    /* * 自动映射到 PE_GetPartsClickable
     * 无类型转换
     */
    return PE_GetPartsClickable(Number);
}


/* void PartsEngine.Parts_SetPartsPixelDecide(int Number, bool PixelDecide); */
static void PartsEngine_Parts_SetPartsPixelDecide(int Number, bool PixelDecide) {
    /* * 自动映射到 PE_SetPartsPixelDecide
     * 无类型转换
     */
    PE_SetPartsPixelDecide(Number, PixelDecide);
}


/* void PartsEngine.Parts_GetPartsCGName(int Number, ref string pCGName, int State); */
static void PartsEngine_Parts_GetPartsCGName(int Number, struct string ** pCGName, int State) {
    /* * 自动映射到 PE_GetPartsCGName
     * 无类型转换
     */
    PE_GetPartsCGName(Number, pCGName, State);
}


/* bool PartsEngine.Parts_SetPartsCGSurfaceArea(int Number, int X, int Y, int Width, int Height, int State); */
static bool PartsEngine_Parts_SetPartsCGSurfaceArea(int Number, int X, int Y, int Width, int Height, int State) {
    /* * 自动映射到 PE_SetPartsCGSurfaceArea
     * 无类型转换
     */
    return PE_SetPartsCGSurfaceArea(Number, X, Y, Width, Height, State);
}


/* bool PartsEngine.Parts_SetLoopCGSurfaceArea(int Number, int X, int Y, int Width, int Height, int State); */
static bool PartsEngine_Parts_SetLoopCGSurfaceArea(int Number, int X, int Y, int Width, int Height, int State) {
    /* * 自动映射到 PE_SetLoopCGSurfaceArea
     * 无类型转换
     */
    return PE_SetLoopCGSurfaceArea(Number, X, Y, Width, Height, State);
}


/* bool PartsEngine.Parts_SetPartsTextSurfaceArea(int Number, int X, int Y, int Width, int Height, int State); */
static bool PartsEngine_Parts_SetPartsTextSurfaceArea(int Number, int X, int Y, int Width, int Height, int State) {
    /* * 自动映射到 PE_SetPartsTextSurfaceArea
     * 无类型转换
     */
    return PE_SetPartsTextSurfaceArea(Number, X, Y, Width, Height, State);
}


/* bool PartsEngine.Parts_SetFont(int Number, int Type, int Size, int R, int G, int B, float BoldWeight, int EdgeR, int EdgeG, int EdgeB, float EdgeWeight, int State); */
static bool PartsEngine_Parts_SetFont(int Number, int Type, int Size, int R, int G, int B, float BoldWeight, int EdgeR, int EdgeG, int EdgeB, float EdgeWeight, int State) {
    /* * 自动映射到 PE_SetFont
     * 无类型转换
     */
    return PE_SetFont(Number, Type, Size, R, G, B, BoldWeight, EdgeR, EdgeG, EdgeB, EdgeWeight, State);
}


/* bool PartsEngine.Parts_SetPartsFontSize(int Number, int Size, int State); */
static bool PartsEngine_Parts_SetPartsFontSize(int Number, int Size, int State) {
    /* * 自动映射到 PE_SetPartsFontSize
     * 无类型转换
     */
    return PE_SetPartsFontSize(Number, Size, State);
}


/* bool PartsEngine.Parts_SetPartsFontColor(int Number, int R, int G, int B, int State); */
static bool PartsEngine_Parts_SetPartsFontColor(int Number, int R, int G, int B, int State) {
    /* * 自动映射到 PE_SetPartsFontColor
     * 无类型转换
     */
    return PE_SetPartsFontColor(Number, R, G, B, State);
}


/* bool PartsEngine.Parts_SetPartsFontBoldWeight(int Number, float BoldWeight, int State); */
static bool PartsEngine_Parts_SetPartsFontBoldWeight(int Number, float BoldWeight, int State) {
    /* * 自动映射到 PE_SetPartsFontBoldWeight
     * 无类型转换
     */
    return PE_SetPartsFontBoldWeight(Number, BoldWeight, State);
}


/* bool PartsEngine.Parts_SetPartsFontEdgeColor(int Number, int R, int G, int B, int State); */
static bool PartsEngine_Parts_SetPartsFontEdgeColor(int Number, int R, int G, int B, int State) {
    /* * 自动映射到 PE_SetPartsFontEdgeColor
     * 无类型转换
     */
    return PE_SetPartsFontEdgeColor(Number, R, G, B, State);
}


/* bool PartsEngine.Parts_SetPartsFontEdgeWeight(int Number, float EdgeWeight, int State); */
static bool PartsEngine_Parts_SetPartsFontEdgeWeight(int Number, float EdgeWeight, int State) {
    /* * 自动映射到 PE_SetPartsFontEdgeWeight
     * 无类型转换
     */
    return PE_SetPartsFontEdgeWeight(Number, EdgeWeight, State);
}


/* bool PartsEngine.Parts_SetTextCharSpace(int Number, int CharSpace, int State); */
static bool PartsEngine_Parts_SetTextCharSpace(int Number, int CharSpace, int State) {
    /* * 自动映射到 PE_SetTextCharSpace
     * 无类型转换
     */
    return PE_SetTextCharSpace(Number, CharSpace, State);
}


/* bool PartsEngine.Parts_SetTextLineSpace(int Number, int LineSpace, int State); */
static bool PartsEngine_Parts_SetTextLineSpace(int Number, int LineSpace, int State) {
    /* * 自动映射到 PE_SetTextLineSpace
     * 无类型转换
     */
    return PE_SetTextLineSpace(Number, LineSpace, State);
}


/* bool PartsEngine.Parts_SetHGaugeRate(int Number, float Numerator, float Denominator, int State); */
static bool PartsEngine_Parts_SetHGaugeRate(int Number, float Numerator, float Denominator, int State) {
    /* * 自动映射到 PE_SetHGaugeRate
     * 无类型转换
     */
    return PE_SetHGaugeRate(Number, Numerator, Denominator, State);
}


/* bool PartsEngine.Parts_SetHGaugeSurfaceArea(int Number, int X, int Y, int Width, int Height, int State); */
static bool PartsEngine_Parts_SetHGaugeSurfaceArea(int Number, int X, int Y, int Width, int Height, int State) {
    /* * 自动映射到 PE_SetHGaugeSurfaceArea
     * 无类型转换
     */
    return PE_SetHGaugeSurfaceArea(Number, X, Y, Width, Height, State);
}


/* bool PartsEngine.Parts_SetVGaugeRate(int Number, float Numerator, float Denominator, int State); */
static bool PartsEngine_Parts_SetVGaugeRate(int Number, float Numerator, float Denominator, int State) {
    /* * 自动映射到 PE_SetVGaugeRate
     * 无类型转换
     */
    return PE_SetVGaugeRate(Number, Numerator, Denominator, State);
}


/* bool PartsEngine.Parts_SetVGaugeSurfaceArea(int Number, int X, int Y, int Width, int Height, int State); */
static bool PartsEngine_Parts_SetVGaugeSurfaceArea(int Number, int X, int Y, int Width, int Height, int State) {
    /* * 自动映射到 PE_SetVGaugeSurfaceArea
     * 无类型转换
     */
    return PE_SetVGaugeSurfaceArea(Number, X, Y, Width, Height, State);
}


/* bool PartsEngine.Parts_SetNumeralNumber(int partsno, int Number, int State); */
static bool PartsEngine_Parts_SetNumeralNumber(int partsno, int Number, int State) {
    /* * 自动映射到 PE_SetNumeralNumber
     * 无类型转换
     */
    return PE_SetNumeralNumber(partsno, Number, State);
}


/* bool PartsEngine.Parts_SetNumeralShowComma(int Number, bool ShowComma, int State); */
static bool PartsEngine_Parts_SetNumeralShowComma(int Number, bool ShowComma, int State) {
    /* * 自动映射到 PE_SetNumeralShowComma
     * 无类型转换
     */
    return PE_SetNumeralShowComma(Number, ShowComma, State);
}


/* bool PartsEngine.Parts_SetNumeralSpace(int Number, int NumeralSpace, int State); */
static bool PartsEngine_Parts_SetNumeralSpace(int Number, int NumeralSpace, int State) {
    /* * 自动映射到 PE_SetNumeralSpace
     * 无类型转换
     */
    return PE_SetNumeralSpace(Number, NumeralSpace, State);
}


/* bool PartsEngine.Parts_SetNumeralLength(int Number, int Length, int State); */
static bool PartsEngine_Parts_SetNumeralLength(int Number, int Length, int State) {
    /* * 自动映射到 PE_SetNumeralLength
     * 无类型转换
     */
    return PE_SetNumeralLength(Number, Length, State);
}


/* bool PartsEngine.Parts_SetNumeralSurfaceArea(int Number, int X, int Y, int Width, int Height, int State); */
static bool PartsEngine_Parts_SetNumeralSurfaceArea(int Number, int X, int Y, int Width, int Height, int State) {
    /* * 自动映射到 PE_SetNumeralSurfaceArea
     * 无类型转换
     */
    return PE_SetNumeralSurfaceArea(Number, X, Y, Width, Height, State);
}


/* bool PartsEngine.Parts_SetPartsRectangleDetectionSize(int Number, int Width, int Height, int State); */
static bool PartsEngine_Parts_SetPartsRectangleDetectionSize(int Number, int Width, int Height, int State) {
    /* * 自动映射到 PE_SetPartsRectangleDetectionSize
     * 无类型转换
     */
    return PE_SetPartsRectangleDetectionSize(Number, Width, Height, State);
}


/* bool PartsEngine.Parts_ClearPartsConstructionProcess(int Number, int State); */
static bool PartsEngine_Parts_ClearPartsConstructionProcess(int Number, int State) {
    /* * 自动映射到 PE_ClearPartsConstructionProcess
     * 无类型转换
     */
    return PE_ClearPartsConstructionProcess(Number, State);
}


/* bool PartsEngine.Parts_AddCreateToPartsConstructionProcess(int Number, int nWidth, int nHeight, int State); */
static bool PartsEngine_Parts_AddCreateToPartsConstructionProcess(int Number, int nWidth, int nHeight, int State) {
    /* * 自动映射到 PE_AddCreateToPartsConstructionProcess
     * 无类型转换
     */
    return PE_AddCreateToPartsConstructionProcess(Number, nWidth, nHeight, State);
}


/* bool PartsEngine.Parts_AddCreatePixelOnlyToPartsConstructionProcess(int Number, int nWidth, int nHeight, int State); */
static bool PartsEngine_Parts_AddCreatePixelOnlyToPartsConstructionProcess(int Number, int nWidth, int nHeight, int State) {
    /* * 自动映射到 PE_AddCreatePixelOnlyToPartsConstructionProcess
     * 无类型转换
     */
    return PE_AddCreatePixelOnlyToPartsConstructionProcess(Number, nWidth, nHeight, State);
}


/* bool PartsEngine.Parts_AddFillToPartsConstructionProcess(int Number, int nX, int nY, int nWidth, int nHeight, int nR, int nG, int nB, int State); */
static bool PartsEngine_Parts_AddFillToPartsConstructionProcess(int Number, int nX, int nY, int nWidth, int nHeight, int nR, int nG, int nB, int State) {
    /* * 自动映射到 PE_AddFillToPartsConstructionProcess
     * 无类型转换
     */
    return PE_AddFillToPartsConstructionProcess(Number, nX, nY, nWidth, nHeight, nR, nG, nB, State);
}


/* bool PartsEngine.Parts_AddFillAlphaColorToPartsConstructionProcess(int Number, int nX, int nY, int nWidth, int nHeight, int nR, int nG, int nB, int nA, int State); */
static bool PartsEngine_Parts_AddFillAlphaColorToPartsConstructionProcess(int Number, int nX, int nY, int nWidth, int nHeight, int nR, int nG, int nB, int nA, int State) {
    /* * 自动映射到 PE_AddFillAlphaColorToPartsConstructionProcess
     * 无类型转换
     */
    return PE_AddFillAlphaColorToPartsConstructionProcess(Number, nX, nY, nWidth, nHeight, nR, nG, nB, nA, State);
}


/* bool PartsEngine.Parts_AddFillAMapToPartsConstructionProcess(int Number, int nX, int nY, int nWidth, int nHeight, int nAlpha, int State); */
static bool PartsEngine_Parts_AddFillAMapToPartsConstructionProcess(int Number, int nX, int nY, int nWidth, int nHeight, int nAlpha, int State) {
    /* * 自动映射到 PE_AddFillAMapToPartsConstructionProcess
     * 无类型转换
     */
    return PE_AddFillAMapToPartsConstructionProcess(Number, nX, nY, nWidth, nHeight, nAlpha, State);
}


/* bool PartsEngine.Parts_AddFillWithAlphaToPartsConstructionProcess(int Number, int nX, int nY, int nWidth, int nHeight, int nR, int nG, int nB, int nA, int State); */
//static bool PartsEngine_Parts_AddFillWithAlphaToPartsConstructionProcess(int Number, int nX, int nY, int nWidth, int nHeight, int nR, int nG, int nB, int nA, int State) {
    /* * 自动映射到 PE_AddFillWithAlphaToPartsConstructionProcess
     * 无类型转换
     */
//    return PE_AddFillWithAlphaToPartsConstructionProcess(Number, nX, nY, nWidth, nHeight, nR, nG, nB, nA, State);
//}


/* bool PartsEngine.Parts_AddFillGradationHorizonToPartsConstructionProcess(int Number, int nX, int nY, int nWidth, int nHeight, int nTopR, int nTopG, int nTopB, int nBottomR, int nBottomG, int nBottomB, int State); */
//static bool PartsEngine_Parts_AddFillGradationHorizonToPartsConstructionProcess(int Number, int nX, int nY, int nWidth, int nHeight, int nTopR, int nTopG, int nTopB, int nBottomR, int nBottomG, int nBottomB, int State) {
    /* * 自动映射到 PE_AddFillGradationHorizonToPartsConstructionProcess
     * 无类型转换
     */
//    return PE_AddFillGradationHorizonToPartsConstructionProcess(Number, nX, nY, nWidth, nHeight, nTopR, nTopG, nTopB, nBottomR, nBottomG, nBottomB, State);
//}


/* bool PartsEngine.Parts_AddDrawRectToPartsConstructionProcess(int Number, int nX, int nY, int nWidth, int nHeight, int nR, int nG, int nB, int State); */
static bool PartsEngine_Parts_AddDrawRectToPartsConstructionProcess(int Number, int nX, int nY, int nWidth, int nHeight, int nR, int nG, int nB, int State) {
    /* * 自动映射到 PE_AddDrawRectToPartsConstructionProcess
     * 无类型转换
     */
    return PE_AddDrawRectToPartsConstructionProcess(Number, nX, nY, nWidth, nHeight, nR, nG, nB, State);
}


/* bool PartsEngine.Parts_AddGrayFilterToPartsConstructionProcess(int Number, int nX, int nY, int nWidth, int nHeight, bool FullSize, int State); */
//static bool PartsEngine_Parts_AddGrayFilterToPartsConstructionProcess(int Number, int nX, int nY, int nWidth, int nHeight, bool FullSize, int State) {
    /* * 自动映射到 PE_AddGrayFilterToPartsConstructionProcess
     * 无类型转换
     */
//    return PE_AddGrayFilterToPartsConstructionProcess(Number, nX, nY, nWidth, nHeight, FullSize, State);
//}


/* bool PartsEngine.Parts_AddAddFilterToPartsConstructionProcess(int Number, int nX, int nY, int nWidth, int nHeight, int nR, int nG, int nB, bool FullSize, int State); */
//static bool PartsEngine_Parts_AddAddFilterToPartsConstructionProcess(int Number, int nX, int nY, int nWidth, int nHeight, int nR, int nG, int nB, bool FullSize, int State) {
    /* * 自动映射到 PE_AddAddFilterToPartsConstructionProcess
     * 无类型转换
     */
//    return PE_AddAddFilterToPartsConstructionProcess(Number, nX, nY, nWidth, nHeight, nR, nG, nB, FullSize, State);
//}


/* bool PartsEngine.Parts_AddMulFilterToPartsConstructionProcess(int Number, int nX, int nY, int nWidth, int nHeight, int nR, int nG, int nB, bool FullSize, int State); */
//static bool PartsEngine_Parts_AddMulFilterToPartsConstructionProcess(int Number, int nX, int nY, int nWidth, int nHeight, int nR, int nG, int nB, bool FullSize, int State) {
    /* * 自动映射到 PE_AddMulFilterToPartsConstructionProcess
     * 无类型转换
     */
//    return PE_AddMulFilterToPartsConstructionProcess(Number, nX, nY, nWidth, nHeight, nR, nG, nB, FullSize, State);
//}


/* bool PartsEngine.Parts_AddDrawLineToPartsConstructionProcess(int Number, int nX1, int nY1, int nX2, int nY2, int nR, int nG, int nB, int nA, int State); */
//static bool PartsEngine_Parts_AddDrawLineToPartsConstructionProcess(int Number, int nX1, int nY1, int nX2, int nY2, int nR, int nG, int nB, int nA, int State) {
    /* * 自动映射到 PE_AddDrawLineToPartsConstructionProcess
     * 无类型转换
     */
//    return PE_AddDrawLineToPartsConstructionProcess(Number, nX1, nY1, nX2, nY2, nR, nG, nB, nA, State);
//}


/* bool PartsEngine.Parts_BuildPartsConstructionProcess(int Number, int State); */
static bool PartsEngine_Parts_BuildPartsConstructionProcess(int Number, int State) {
    /* * 自动映射到 PE_BuildPartsConstructionProcess
     * 无类型转换
     */
    return PE_BuildPartsConstructionProcess(Number, State);
}


/* bool PartsEngine.Parts_SetPartsConstructionSurfaceArea(int Number, int X, int Y, int Width, int Height, int State); */
static bool PartsEngine_Parts_SetPartsConstructionSurfaceArea(int Number, int X, int Y, int Width, int Height, int State) {
    /* * 自动映射到 PE_SetPartsConstructionSurfaceArea
     * 无类型转换
     */
    return PE_SetPartsConstructionSurfaceArea(Number, X, Y, Width, Height, State);
}


/* bool PartsEngine.Parts_IsCursorIn(int Number, int MouseX, int MouseY, int State); */
static bool PartsEngine_Parts_IsCursorIn(int Number, int MouseX, int MouseY, int State) {
    /* * 自动映射到 PE_IsCursorIn
     * 无类型转换
     */
    return PE_IsCursorIn(Number, MouseX, MouseY, State);
}

/* bool PartsEngine.Parts_SetText(int Number, struct string *pIText, int State); */
static bool PartsEngine_Parts_SetText(int Number, struct string *pIText, int State)
{
    /*
     * 自动映射到 PE_SetText
     * (来自 src/parts/text.c [cite: 791])
     */
    return PE_SetText(Number, pIText, State); // [cite: 791]
}

/**
 * @brief (HLL) 获取当前活动的控制器 ID。
 * @note 这是为 system43 API 模拟的实现，因为 system42 底层没有此功能。
 * @return 当前活动的控制器 ID。
 */
static int PartsEngine_GetActiveController(void) {
    return g_active_controller_id;
}

/**
 * @brief (HLL) 设置当前活动的控制器 ID。
 * @note 这是为 system43 API 模拟的实现。
 * @param ID 要设为活动的控制器 ID。
 */
static void PartsEngine_SetActiveController(int ID) {
    g_active_controller_id = ID;
}
#define MAX_CONTROLLER_STACK 32  
static int controller_stack[MAX_CONTROLLER_STACK];  
static int controller_stack_ptr = 0; 
static void PartsEngine_PushGUIController(void) {  
    if (controller_stack_ptr >= MAX_CONTROLLER_STACK)  
        VM_ERROR("Controller stack overflow");  
    controller_stack[controller_stack_ptr++] = g_active_controller_id;  
    g_active_controller_id = -1; // 重置为无活动控制器  
}  
  
static void PartsEngine_PopGUIController(void) {  
    if (controller_stack_ptr <= 0)  
        VM_ERROR("Controller stack underflow");  
    g_active_controller_id = controller_stack[--controller_stack_ptr];  
}  
  
static void PartsEngine_UpdateGUIController(int passed_time) {  
    // 更新当前活动控制器  
    // 根据游戏需求，这里可能需要更新输入状态、动画等  
}
static void PartsEngine_ModuleInit(void)
{
    PE_Init(); // [cite: 1119]
    id_pool_init(&parts_pool, 1); //
    g_active_controller_id = -1;
    controller_stack_ptr = 0;
}


static void PartsEngine_ModuleFini(void)
{
  id_pool_delete(&parts_pool); //
    PE_Reset(); // [cite: 1120]
}





/* --- HLL 库导出 --- */

HLL_LIBRARY(PartsEngine,
    HLL_EXPORT(_PreLink, PartsEngine_PreLink),
    HLL_EXPORT(_ModuleInit, PartsEngine_ModuleInit),
    HLL_EXPORT(_ModuleFini, PartsEngine_ModuleFini),
    HLL_EXPORT(SetComponentType, PartsEngine_SetComponentType),
	HLL_EXPORT(GetFreeNumber, PartsEngine_GetFreeNumber),
	HLL_EXPORT(Release, PartsEngine_Release),
	HLL_EXPORT(Parts_SetPartsFontType, PartsEngine_Parts_SetPartsFontType),
	HLL_EXPORT(SetWantSaveBackScene, PartsEngine_SetWantSaveBackScene),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(ReleaseAllWithoutSystem, PartsEngine_ReleaseAllWithoutSystem),
	HLL_EXPORT(IsExist, PartsEngine_IsExist),
	HLL_TODO_EXPORT(AddController, PartsEngine_AddController),
	HLL_TODO_EXPORT(RemoveController, PartsEngine_RemoveController),
	HLL_EXPORT(SetActiveController, PartsEngine_SetActiveController),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_EXPORT(GetActiveController, PartsEngine_GetActiveController),
    HLL_EXPORT(PushGUIController, PartsEngine_PushGUIController),
    HLL_EXPORT(PopGUIController, PartsEngine_PopGUIController),
	HLL_EXPORT(UpdateGUIController, PartsEngine_UpdateGUIController),
	HLL_TODO_EXPORT(GetControllerIndex, PartsEngine_GetControllerIndex),
	HLL_TODO_EXPORT(GetControllerID, PartsEngine_GetControllerID),
	HLL_TODO_EXPORT(GetControllerLength, PartsEngine_GetControllerLength),
	HLL_TODO_EXPORT(GetSystemOverlayController, PartsEngine_GetSystemOverlayController),
	/* 找到 PE_Update，但参数不兼容，需要手动实现 */
	HLL_TODO_EXPORT(UpdateComponent, PartsEngine_UpdateComponent),
	HLL_EXPORT(BeginInput, PartsEngine_BeginInput),
	HLL_EXPORT(EndInput, PartsEngine_EndInput),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(GetActiveParts, PartsEngine_GetActiveParts),
	HLL_EXPORT(BeginMotion, PartsEngine_BeginMotion),
	HLL_EXPORT(EndMotion, PartsEngine_EndMotion),
	HLL_EXPORT(IsMotion, PartsEngine_IsMotion),
	HLL_EXPORT(SeekEndMotion, PartsEngine_SeekEndMotion),
	HLL_EXPORT(UpdateMotionTime, PartsEngine_UpdateMotionTime),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(PauseMotion, PartsEngine_PauseMotion),
	HLL_TODO_EXPORT(SaveThumbnail, PartsEngine_SaveThumbnail),
	HLL_TODO_EXPORT(SetClickMissSoundName, PartsEngine_SetClickMissSoundName),
	HLL_TODO_EXPORT(GetClickMissSoundName, PartsEngine_GetClickMissSoundName),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(GetClickNumber, PartsEngine_GetClickNumber),
	HLL_TODO_EXPORT(StopSoundWithoutSystemSound, PartsEngine_StopSoundWithoutSystemSound),
	HLL_EXPORT(AddWholeMotionVibrationSize, PartsEngine_AddWholeMotionVibrationSize),
	/* 找到 PE_AddMotionSound，但参数不兼容，需要手动实现 */
	HLL_TODO_EXPORT(AddMotionSound, PartsEngine_AddMotionSound),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(IsExistActivity, PartsEngine_IsExistActivity),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(CreateActivity, PartsEngine_CreateActivity),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(ReleaseActivity, PartsEngine_ReleaseActivity),
	HLL_TODO_EXPORT(SaveActivityEXText, PartsEngine_SaveActivityEXText),
	HLL_TODO_EXPORT(LoadActivityEXText, PartsEngine_LoadActivityEXText),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(ReadActivityFile, PartsEngine_ReadActivityFile),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(WriteActivityFile, PartsEngine_WriteActivityFile),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(IsExistActivityFile, PartsEngine_IsExistActivityFile),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(AddActivityParts, PartsEngine_AddActivityParts),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(RemoveActivityParts, PartsEngine_RemoveActivityParts),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(RemoveAllActivityParts, PartsEngine_RemoveAllActivityParts),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(NumofActivityParts, PartsEngine_NumofActivityParts),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(GetActivityParts, PartsEngine_GetActivityParts),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(IsExistActivityPartsByName, PartsEngine_IsExistActivityPartsByName),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(IsExistActivityPartsByNumber, PartsEngine_IsExistActivityPartsByNumber),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(GetActivityPartsNumber, PartsEngine_GetActivityPartsNumber),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(GetActivityPartsName, PartsEngine_GetActivityPartsName),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(AddActivityCloseParts, PartsEngine_AddActivityCloseParts),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(RemoveActivityCloseParts, PartsEngine_RemoveActivityCloseParts),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(RemoveAllActivityCloseParts, PartsEngine_RemoveAllActivityCloseParts),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(IsExistActivityCloseParts, PartsEngine_IsExistActivityCloseParts),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(SetActivityIntentData, PartsEngine_SetActivityIntentData),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(AddActivityIntentDataDestination, PartsEngine_AddActivityIntentDataDestination),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(IsExistActivityIntentData, PartsEngine_IsExistActivityIntentData),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(NumofActivityIntentDataDestination, PartsEngine_NumofActivityIntentDataDestination),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(GetActivityIntentDataDestination, PartsEngine_GetActivityIntentDataDestination),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(GetActivityIntentDataType, PartsEngine_GetActivityIntentDataType),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(SetActivityEndKey, PartsEngine_SetActivityEndKey),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(EraseActivityEndKey, PartsEngine_EraseActivityEndKey),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(IsExistActivityEndKey, PartsEngine_IsExistActivityEndKey),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(NumofActivityEndKey, PartsEngine_NumofActivityEndKey),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(GetActivityEndKey, PartsEngine_GetActivityEndKey),
	HLL_TODO_EXPORT(ReleaseMessage, PartsEngine_ReleaseMessage),
	HLL_TODO_EXPORT(PopMessage, PartsEngine_PopMessage),
	HLL_TODO_EXPORT(GetMessagePartsNumber, PartsEngine_GetMessagePartsNumber),
	HLL_TODO_EXPORT(GetMessageDelegateIndex, PartsEngine_GetMessageDelegateIndex),
	HLL_EXPORT(GetDelegateIndex, PartsEngine_GetDelegateIndex),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(GetMessageType, PartsEngine_GetMessageType),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(GetMessageVariableCount, PartsEngine_GetMessageVariableCount),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(GetMessageVariableType, PartsEngine_GetMessageVariableType),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(GetMessageVariableInt, PartsEngine_GetMessageVariableInt),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(GetMessageVariableFloat, PartsEngine_GetMessageVariableFloat),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(GetMessageVariableBool, PartsEngine_GetMessageVariableBool),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(GetMessageVariableString, PartsEngine_GetMessageVariableString),
	HLL_EXPORT(SetDelegateIndex, PartsEngine_SetDelegateIndex),
	HLL_TODO_EXPORT(SetFocus, PartsEngine_SetFocus),
	HLL_TODO_EXPORT(IsFocus, PartsEngine_IsFocus),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(IsWantSaveBackScene, PartsEngine_IsWantSaveBackScene),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(GetComponentType, PartsEngine_GetComponentType),
	HLL_EXPORT(SetComponentPos, PartsEngine_SetComponentPos),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(SetComponentPosZ, PartsEngine_SetComponentPosZ),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(GetComponentPosX, PartsEngine_GetComponentPosX),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(GetComponentPosY, PartsEngine_GetComponentPosY),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(GetComponentPosZ, PartsEngine_GetComponentPosZ),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(GetComponentAbsolutePosX, PartsEngine_GetComponentAbsolutePosX),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(GetComponentAbsolutePosY, PartsEngine_GetComponentAbsolutePosY),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(GetComponentAbsolutePosZ, PartsEngine_GetComponentAbsolutePosZ),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(GetComponentAbsoluteMaxPosZ, PartsEngine_GetComponentAbsoluteMaxPosZ),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(GetComponentAbsolutePos, PartsEngine_GetComponentAbsolutePos),
	HLL_EXPORT(Parts_GetPartsUpperLeftPosX, PartsEngine_Parts_GetPartsUpperLeftPosX),
	HLL_EXPORT(Parts_GetPartsUpperLeftPosY, PartsEngine_Parts_GetPartsUpperLeftPosY),
	HLL_EXPORT(Parts_SetInputState, PartsEngine_Parts_SetInputState),
	HLL_EXPORT(Parts_GetInputState, PartsEngine_Parts_GetInputState),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(SetLockInputState, PartsEngine_SetLockInputState),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(IsLockInputState, PartsEngine_IsLockInputState),
	HLL_EXPORT(SetComponentOriginPosMode, PartsEngine_SetComponentOriginPosMode),
	HLL_EXPORT(GetComponentOriginPosMode, PartsEngine_GetComponentOriginPosMode),
	/* 找到 PE_GetPartsWidth，但参数不兼容，需要手动实现 */
	HLL_TODO_EXPORT(GetComponentWidth, PartsEngine_GetComponentWidth),
	/* 找到 PE_GetPartsHeight，但参数不兼容，需要手动实现 */
	HLL_TODO_EXPORT(GetComponentHeight, PartsEngine_GetComponentHeight),
	HLL_EXPORT(Parts_GetPartsWidth, PartsEngine_Parts_GetPartsWidth),
	HLL_EXPORT(Parts_GetPartsHeight, PartsEngine_Parts_GetPartsHeight),
	HLL_EXPORT(SetComponentShow, PartsEngine_SetComponentShow),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(IsComponentShow, PartsEngine_IsComponentShow),
	HLL_EXPORT(SetComponentMessageWindowShowLink, PartsEngine_SetComponentMessageWindowShowLink),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(IsComponentMessageWindowShowLink, PartsEngine_IsComponentMessageWindowShowLink),
	HLL_EXPORT(SetComponentAlpha, PartsEngine_SetComponentAlpha),
	HLL_EXPORT(GetComponentAlpha, PartsEngine_GetComponentAlpha),
	HLL_EXPORT(SetComponentAddColor, PartsEngine_SetComponentAddColor),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(GetComponentAddColorR, PartsEngine_GetComponentAddColorR),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(GetComponentAddColorG, PartsEngine_GetComponentAddColorG),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(GetComponentAddColorB, PartsEngine_GetComponentAddColorB),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(SetComponentMulColor, PartsEngine_SetComponentMulColor),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(GetComponentMulColorR, PartsEngine_GetComponentMulColorR),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(GetComponentMulColorG, PartsEngine_GetComponentMulColorG),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(GetComponentMulColorB, PartsEngine_GetComponentMulColorB),
	HLL_EXPORT(SetComponentDrawFilter, PartsEngine_SetComponentDrawFilter),
	HLL_EXPORT(GetComponentDrawFilter, PartsEngine_GetComponentDrawFilter),
	HLL_EXPORT(SetComponentMagX, PartsEngine_SetComponentMagX),
	HLL_EXPORT(SetComponentMagY, PartsEngine_SetComponentMagY),
	HLL_EXPORT(GetComponentMagX, PartsEngine_GetComponentMagX),
	HLL_EXPORT(GetComponentMagY, PartsEngine_GetComponentMagY),
	HLL_EXPORT(SetComponentRotateX, PartsEngine_SetComponentRotateX),
	HLL_EXPORT(SetComponentRotateY, PartsEngine_SetComponentRotateY),
	HLL_EXPORT(SetComponentRotateZ, PartsEngine_SetComponentRotateZ),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(GetComponentRotateX, PartsEngine_GetComponentRotateX),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(GetComponentRotateY, PartsEngine_GetComponentRotateY),
	HLL_EXPORT(GetComponentRotateZ, PartsEngine_GetComponentRotateZ),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(SetComponentMargin, PartsEngine_SetComponentMargin),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(GetComponentMarginTop, PartsEngine_GetComponentMarginTop),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(GetComponentMarginBottom, PartsEngine_GetComponentMarginBottom),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(GetComponentMarginLeft, PartsEngine_GetComponentMarginLeft),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(GetComponentMarginRight, PartsEngine_GetComponentMarginRight),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(SetComponentAlphaClipper, PartsEngine_SetComponentAlphaClipper),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(GetComponentAlphaClipper, PartsEngine_GetComponentAlphaClipper),
	HLL_EXPORT(Parts_SetOnCursorShowLinkPartsNumber, PartsEngine_Parts_SetOnCursorShowLinkPartsNumber),
	HLL_EXPORT(Parts_GetOnCursorShowLinkPartsNumber, PartsEngine_Parts_GetOnCursorShowLinkPartsNumber),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(SetComponentScrollPosXLinkNumber, PartsEngine_SetComponentScrollPosXLinkNumber),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(SetComponentScrollPosYLinkNumber, PartsEngine_SetComponentScrollPosYLinkNumber),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(GetComponentScrollPosXLinkNumber, PartsEngine_GetComponentScrollPosXLinkNumber),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(GetComponentScrollPosYLinkNumber, PartsEngine_GetComponentScrollPosYLinkNumber),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(SetComponentScrollAlphaLinkNumber, PartsEngine_SetComponentScrollAlphaLinkNumber),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(GetComponentScrollAlphaLinkNumber, PartsEngine_GetComponentScrollAlphaLinkNumber),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(SetComponentCheckBoxShowLinkNumber, PartsEngine_SetComponentCheckBoxShowLinkNumber),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(GetComponentCheckBoxShowLinkNumber, PartsEngine_GetComponentCheckBoxShowLinkNumber),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(SetComponentTextureFilterType, PartsEngine_SetComponentTextureFilterType),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(GetComponentTextureFilterType, PartsEngine_GetComponentTextureFilterType),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(SetComponentMipmap, PartsEngine_SetComponentMipmap),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(IsComponentMipmap, PartsEngine_IsComponentMipmap),
	HLL_EXPORT(SetComponentSpeedupRateByMessageSkip, PartsEngine_SetComponentSpeedupRateByMessageSkip),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(GetComponentSpeedupRateByMessageSkip, PartsEngine_GetComponentSpeedupRateByMessageSkip),
	HLL_EXPORT(Parts_SetParentPartsNumber, PartsEngine_Parts_SetParentPartsNumber),
	HLL_EXPORT(Parts_GetParentPartsNumber, PartsEngine_Parts_GetParentPartsNumber),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(IsExistChild, PartsEngine_IsExistChild),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(ClearChild, PartsEngine_ClearChild),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(AddChild, PartsEngine_AddChild),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(InsertChild, PartsEngine_InsertChild),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(RemoveChild, PartsEngine_RemoveChild),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(NumofChild, PartsEngine_NumofChild),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(GetChildIndex, PartsEngine_GetChildIndex),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(GetChild, PartsEngine_GetChild),
	/* 找到 PE_AddMotionPos，但参数不兼容，需要手动实现 */
	HLL_TODO_EXPORT(AddComponentMotionPos, PartsEngine_AddComponentMotionPos),
	/* 找到 PE_AddMotionAlpha，但参数不兼容，需要手动实现 */
	HLL_TODO_EXPORT(AddComponentMotionAlpha, PartsEngine_AddComponentMotionAlpha),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(AddComponentMotionAddColor, PartsEngine_AddComponentMotionAddColor),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(AddComponentMotionMulColor, PartsEngine_AddComponentMotionMulColor),
	/* 参数不匹配，需要手动实现 [Rule 5] */
	HLL_TODO_EXPORT(AddComponentMotionCG, PartsEngine_AddComponentMotionCG),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(AddComponentMotionCGTermination, PartsEngine_AddComponentMotionCGTermination),
	/* 找到 PE_AddMotionHGaugeRate，但参数不兼容，需要手动实现 */
	HLL_TODO_EXPORT(AddComponentMotionHGaugeRate, PartsEngine_AddComponentMotionHGaugeRate),
	/* 找到 PE_AddMotionVGaugeRate，但参数不兼容，需要手动实现 */
	HLL_TODO_EXPORT(AddComponentMotionVGaugeRate, PartsEngine_AddComponentMotionVGaugeRate),
	/* 找到 PE_AddMotionNumeralNumber，但参数不兼容，需要手动实现 */
	HLL_TODO_EXPORT(AddComponentMotionNumeralNumber, PartsEngine_AddComponentMotionNumeralNumber),
	/* 找到 PE_AddMotionMagX，但参数不兼容，需要手动实现 */
	HLL_TODO_EXPORT(AddComponentMotionMagX, PartsEngine_AddComponentMotionMagX),
	/* 找到 PE_AddMotionMagY，但参数不兼容，需要手动实现 */
	HLL_TODO_EXPORT(AddComponentMotionMagY, PartsEngine_AddComponentMotionMagY),
	/* 找到 PE_AddMotionRotateX，但参数不兼容，需要手动实现 */
	HLL_TODO_EXPORT(AddComponentMotionRotateX, PartsEngine_AddComponentMotionRotateX),
	/* 找到 PE_AddMotionRotateY，但参数不兼容，需要手动实现 */
	HLL_TODO_EXPORT(AddComponentMotionRotateY, PartsEngine_AddComponentMotionRotateY),
	/* 找到 PE_AddMotionRotateZ，但参数不兼容，需要手动实现 */
	HLL_TODO_EXPORT(AddComponentMotionRotateZ, PartsEngine_AddComponentMotionRotateZ),
	HLL_EXPORT(AddComponentMotionVibrationSize, PartsEngine_AddComponentMotionVibrationSize),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(Parts_SetPassCursor, PartsEngine_Parts_SetPassCursor),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(Parts_GetPartsPassCursor, PartsEngine_Parts_GetPartsPassCursor),
	HLL_EXPORT(Parts_SetClickable, PartsEngine_Parts_SetClickable),
	HLL_EXPORT(Parts_GetPartsClickable, PartsEngine_Parts_GetPartsClickable),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(Parts_SetResetTimerByChangeInputStatus, PartsEngine_Parts_SetResetTimerByChangeInputStatus),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(Parts_GetResetTimerByChangeInputStatus, PartsEngine_Parts_GetResetTimerByChangeInputStatus),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(Parts_SetDrag, PartsEngine_Parts_SetDrag),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(Parts_GetPartsDrag, PartsEngine_Parts_GetPartsDrag),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(Parts_SetSoundName, PartsEngine_Parts_SetSoundName),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(Parts_GetSoundName, PartsEngine_Parts_GetSoundName),
	HLL_EXPORT(Parts_SetPartsPixelDecide, PartsEngine_Parts_SetPartsPixelDecide),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(Parts_IsPartsPixelDecide, PartsEngine_Parts_IsPartsPixelDecide),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(Parts_SetPosForRate, PartsEngine_Parts_SetPosForRate),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(Parts_IsPosForRate, PartsEngine_Parts_IsPosForRate),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(SuspendBuildView, PartsEngine_SuspendBuildView),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(SuspendBuildViewAt, PartsEngine_SuspendBuildViewAt),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(ResumeBuildView, PartsEngine_ResumeBuildView),
	HLL_TODO_EXPORT(SetButtonSize, PartsEngine_SetButtonSize),
	HLL_TODO_EXPORT(SetButtonEnable, PartsEngine_SetButtonEnable),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(IsButtonEnable, PartsEngine_IsButtonEnable),
	HLL_TODO_EXPORT(SetButtonColor, PartsEngine_SetButtonColor),
	HLL_TODO_EXPORT(GetButtonR, PartsEngine_GetButtonR),
	HLL_TODO_EXPORT(GetButtonG, PartsEngine_GetButtonG),
	HLL_TODO_EXPORT(GetButtonB, PartsEngine_GetButtonB),
	HLL_TODO_EXPORT(SetButtonFontProperty, PartsEngine_SetButtonFontProperty),
	HLL_TODO_EXPORT(GetButtonFontProperty, PartsEngine_GetButtonFontProperty),
	HLL_TODO_EXPORT(SetButtonCGName, PartsEngine_SetButtonCGName),
	HLL_TODO_EXPORT(GetButtonCGName, PartsEngine_GetButtonCGName),
	HLL_TODO_EXPORT(SetButtonFlatName, PartsEngine_SetButtonFlatName),
	HLL_TODO_EXPORT(GetButtonFlatName, PartsEngine_GetButtonFlatName),
	HLL_TODO_EXPORT(SetButtonText, PartsEngine_SetButtonText),
	HLL_TODO_EXPORT(GetButtonText, PartsEngine_GetButtonText),
	HLL_TODO_EXPORT(SetButtonTextOriginPosMode, PartsEngine_SetButtonTextOriginPosMode),
	HLL_TODO_EXPORT(GetButtonTextOriginPosMode, PartsEngine_GetButtonTextOriginPosMode),
	HLL_TODO_EXPORT(SetButtonCharSpace, PartsEngine_SetButtonCharSpace),
	HLL_TODO_EXPORT(GetButtonCharSpace, PartsEngine_GetButtonCharSpace),
	HLL_TODO_EXPORT(SetButtonLineSpace, PartsEngine_SetButtonLineSpace),
	HLL_TODO_EXPORT(GetButtonLineSpace, PartsEngine_GetButtonLineSpace),
	HLL_TODO_EXPORT(SetCheckBoxSize, PartsEngine_SetCheckBoxSize),
	HLL_TODO_EXPORT(GetCheckBoxButtonWidth, PartsEngine_GetCheckBoxButtonWidth),
	HLL_TODO_EXPORT(GetCheckBoxButtonHeight, PartsEngine_GetCheckBoxButtonHeight),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(CheckBoxChecked, PartsEngine_CheckBoxChecked),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(IsCheckBoxChecked, PartsEngine_IsCheckBoxChecked),
	HLL_TODO_EXPORT(SetCheckBoxColor, PartsEngine_SetCheckBoxColor),
	HLL_TODO_EXPORT(GetCheckBoxR, PartsEngine_GetCheckBoxR),
	HLL_TODO_EXPORT(GetCheckBoxG, PartsEngine_GetCheckBoxG),
	HLL_TODO_EXPORT(GetCheckBoxB, PartsEngine_GetCheckBoxB),
	HLL_TODO_EXPORT(SetCheckBoxFontProperty, PartsEngine_SetCheckBoxFontProperty),
	HLL_TODO_EXPORT(GetCheckBoxFontProperty, PartsEngine_GetCheckBoxFontProperty),
	HLL_TODO_EXPORT(SetCheckBoxCGName, PartsEngine_SetCheckBoxCGName),
	HLL_TODO_EXPORT(GetCheckBoxCGName, PartsEngine_GetCheckBoxCGName),
	HLL_TODO_EXPORT(SetCheckBoxFlatName, PartsEngine_SetCheckBoxFlatName),
	HLL_TODO_EXPORT(GetCheckBoxFlatName, PartsEngine_GetCheckBoxFlatName),
	HLL_TODO_EXPORT(SetCheckBoxText, PartsEngine_SetCheckBoxText),
	HLL_TODO_EXPORT(GetCheckBoxText, PartsEngine_GetCheckBoxText),
	HLL_TODO_EXPORT(SetCheckBoxTextOriginPosMode, PartsEngine_SetCheckBoxTextOriginPosMode),
	HLL_TODO_EXPORT(GetCheckBoxTextOriginPosMode, PartsEngine_GetCheckBoxTextOriginPosMode),
	HLL_TODO_EXPORT(SetCheckBoxButtonMode, PartsEngine_SetCheckBoxButtonMode),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(IsCheckBoxButtonMode, PartsEngine_IsCheckBoxButtonMode),
	HLL_TODO_EXPORT(SetCheckBoxCharSpace, PartsEngine_SetCheckBoxCharSpace),
	HLL_TODO_EXPORT(GetCheckBoxCharSpace, PartsEngine_GetCheckBoxCharSpace),
	HLL_TODO_EXPORT(SetCheckBoxLineSpace, PartsEngine_SetCheckBoxLineSpace),
	HLL_TODO_EXPORT(GetCheckBoxLineSpace, PartsEngine_GetCheckBoxLineSpace),
	HLL_TODO_EXPORT(SetVScrollbarSize, PartsEngine_SetVScrollbarSize),
	HLL_TODO_EXPORT(SetVScrollbarUpHeight, PartsEngine_SetVScrollbarUpHeight),
	HLL_TODO_EXPORT(SetVScrollbarDownHeight, PartsEngine_SetVScrollbarDownHeight),
	HLL_TODO_EXPORT(GetVScrollbarUpHeight, PartsEngine_GetVScrollbarUpHeight),
	HLL_TODO_EXPORT(GetVScrollbarDownHeight, PartsEngine_GetVScrollbarDownHeight),
	HLL_TODO_EXPORT(SetVScrollbarTotalSize, PartsEngine_SetVScrollbarTotalSize),
	HLL_TODO_EXPORT(SetVScrollbarViewSize, PartsEngine_SetVScrollbarViewSize),
	HLL_TODO_EXPORT(SetVScrollbarScrollPos, PartsEngine_SetVScrollbarScrollPos),
	HLL_TODO_EXPORT(SetVScrollbarScrollRate, PartsEngine_SetVScrollbarScrollRate),
	HLL_TODO_EXPORT(SetVScrollbarMoveSizeByButton, PartsEngine_SetVScrollbarMoveSizeByButton),
	HLL_TODO_EXPORT(GetVScrollbarTotalSize, PartsEngine_GetVScrollbarTotalSize),
	HLL_TODO_EXPORT(GetVScrollbarViewSize, PartsEngine_GetVScrollbarViewSize),
	HLL_TODO_EXPORT(GetVScrollbarScrollPos, PartsEngine_GetVScrollbarScrollPos),
	HLL_TODO_EXPORT(GetVScrollbarScrollRate, PartsEngine_GetVScrollbarScrollRate),
	HLL_TODO_EXPORT(GetVScrollbarMoveSizeByButton, PartsEngine_GetVScrollbarMoveSizeByButton),
	HLL_TODO_EXPORT(SetVScrollbarCGName, PartsEngine_SetVScrollbarCGName),
	HLL_TODO_EXPORT(GetVScrollbarCGName, PartsEngine_GetVScrollbarCGName),
	HLL_TODO_EXPORT(SetVScrollbarFlatName, PartsEngine_SetVScrollbarFlatName),
	HLL_TODO_EXPORT(GetVScrollbarFlatName, PartsEngine_GetVScrollbarFlatName),
	HLL_TODO_EXPORT(SetHScrollbarSize, PartsEngine_SetHScrollbarSize),
	HLL_TODO_EXPORT(SetHScrollbarLeftWidth, PartsEngine_SetHScrollbarLeftWidth),
	HLL_TODO_EXPORT(SetHScrollbarRightWidth, PartsEngine_SetHScrollbarRightWidth),
	HLL_TODO_EXPORT(GetHScrollbarLeftWidth, PartsEngine_GetHScrollbarLeftWidth),
	HLL_TODO_EXPORT(GetHScrollbarRightWidth, PartsEngine_GetHScrollbarRightWidth),
	HLL_TODO_EXPORT(SetHScrollbarTotalSize, PartsEngine_SetHScrollbarTotalSize),
	HLL_TODO_EXPORT(SetHScrollbarViewSize, PartsEngine_SetHScrollbarViewSize),
	HLL_TODO_EXPORT(SetHScrollbarScrollPos, PartsEngine_SetHScrollbarScrollPos),
	HLL_TODO_EXPORT(SetHScrollbarScrollRate, PartsEngine_SetHScrollbarScrollRate),
	HLL_TODO_EXPORT(SetHScrollbarMoveSizeByButton, PartsEngine_SetHScrollbarMoveSizeByButton),
	HLL_TODO_EXPORT(GetHScrollbarTotalSize, PartsEngine_GetHScrollbarTotalSize),
	HLL_TODO_EXPORT(GetHScrollbarViewSize, PartsEngine_GetHScrollbarViewSize),
	HLL_TODO_EXPORT(GetHScrollbarScrollPos, PartsEngine_GetHScrollbarScrollPos),
	HLL_TODO_EXPORT(GetHScrollbarScrollRate, PartsEngine_GetHScrollbarScrollRate),
	HLL_TODO_EXPORT(GetHScrollbarMoveSizeByButton, PartsEngine_GetHScrollbarMoveSizeByButton),
	HLL_TODO_EXPORT(SetHScrollbarCGName, PartsEngine_SetHScrollbarCGName),
	HLL_TODO_EXPORT(GetHScrollbarCGName, PartsEngine_GetHScrollbarCGName),
	HLL_TODO_EXPORT(SetHScrollbarFlatName, PartsEngine_SetHScrollbarFlatName),
	HLL_TODO_EXPORT(GetHScrollbarFlatName, PartsEngine_GetHScrollbarFlatName),
	HLL_TODO_EXPORT(SetTextBoxSize, PartsEngine_SetTextBoxSize),
	HLL_TODO_EXPORT(SetTextBoxFontProperty, PartsEngine_SetTextBoxFontProperty),
	HLL_TODO_EXPORT(GetTextBoxFontProperty, PartsEngine_GetTextBoxFontProperty),
	HLL_TODO_EXPORT(SetTextBoxReadOnly, PartsEngine_SetTextBoxReadOnly),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(IsTextBoxReadOnly, PartsEngine_IsTextBoxReadOnly),
	HLL_TODO_EXPORT(SetTextBoxText, PartsEngine_SetTextBoxText),
	HLL_TODO_EXPORT(GetTextBoxText, PartsEngine_GetTextBoxText),
	HLL_TODO_EXPORT(SetTextBoxMaxTextLength, PartsEngine_SetTextBoxMaxTextLength),
	HLL_TODO_EXPORT(GetTextBoxMaxTextLength, PartsEngine_GetTextBoxMaxTextLength),
	HLL_TODO_EXPORT(SetTextBoxBGColor, PartsEngine_SetTextBoxBGColor),
	HLL_TODO_EXPORT(GetTextBoxBGR, PartsEngine_GetTextBoxBGR),
	HLL_TODO_EXPORT(GetTextBoxBGG, PartsEngine_GetTextBoxBGG),
	HLL_TODO_EXPORT(GetTextBoxBGB, PartsEngine_GetTextBoxBGB),
	HLL_TODO_EXPORT(SetTextBoxReadOnlyBGColor, PartsEngine_SetTextBoxReadOnlyBGColor),
	HLL_TODO_EXPORT(GetTextBoxReadOnlyBGR, PartsEngine_GetTextBoxReadOnlyBGR),
	HLL_TODO_EXPORT(GetTextBoxReadOnlyBGG, PartsEngine_GetTextBoxReadOnlyBGG),
	HLL_TODO_EXPORT(GetTextBoxReadOnlyBGB, PartsEngine_GetTextBoxReadOnlyBGB),
	HLL_TODO_EXPORT(SetTextBoxFrameColor, PartsEngine_SetTextBoxFrameColor),
	HLL_TODO_EXPORT(GetTextBoxFrameR, PartsEngine_GetTextBoxFrameR),
	HLL_TODO_EXPORT(GetTextBoxFrameG, PartsEngine_GetTextBoxFrameG),
	HLL_TODO_EXPORT(GetTextBoxFrameB, PartsEngine_GetTextBoxFrameB),
	HLL_TODO_EXPORT(SetTextBoxSelectColor, PartsEngine_SetTextBoxSelectColor),
	HLL_TODO_EXPORT(GetTextBoxSelectR, PartsEngine_GetTextBoxSelectR),
	HLL_TODO_EXPORT(GetTextBoxSelectG, PartsEngine_GetTextBoxSelectG),
	HLL_TODO_EXPORT(GetTextBoxSelectB, PartsEngine_GetTextBoxSelectB),
	HLL_TODO_EXPORT(SetTextBoxCGName, PartsEngine_SetTextBoxCGName),
	HLL_TODO_EXPORT(GetTextBoxCGName, PartsEngine_GetTextBoxCGName),
	HLL_TODO_EXPORT(SetTextBoxCharSpace, PartsEngine_SetTextBoxCharSpace),
	HLL_TODO_EXPORT(GetTextBoxCharSpace, PartsEngine_GetTextBoxCharSpace),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(SetOpenTextBoxIME, PartsEngine_SetOpenTextBoxIME),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(IsOpenTextBoxIME, PartsEngine_IsOpenTextBoxIME),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(SelectTextBoxAll, PartsEngine_SelectTextBoxAll),
	HLL_TODO_EXPORT(SetListBoxSize, PartsEngine_SetListBoxSize),
	HLL_TODO_EXPORT(SetListBoxLineHeight, PartsEngine_SetListBoxLineHeight),
	HLL_TODO_EXPORT(GetListBoxLineHeight, PartsEngine_GetListBoxLineHeight),
	HLL_TODO_EXPORT(SetListBoxMargin, PartsEngine_SetListBoxMargin),
	HLL_TODO_EXPORT(GetListBoxWidthMargin, PartsEngine_GetListBoxWidthMargin),
	HLL_TODO_EXPORT(GetListBoxHeightMargin, PartsEngine_GetListBoxHeightMargin),
	HLL_TODO_EXPORT(SetListBoxCGName, PartsEngine_SetListBoxCGName),
	HLL_TODO_EXPORT(GetListBoxCGName, PartsEngine_GetListBoxCGName),
	HLL_TODO_EXPORT(SetListBoxScrollPos, PartsEngine_SetListBoxScrollPos),
	HLL_TODO_EXPORT(GetListBoxScrollPos, PartsEngine_GetListBoxScrollPos),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(AddListBoxItem, PartsEngine_AddListBoxItem),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(InsertListBoxItem, PartsEngine_InsertListBoxItem),
	HLL_TODO_EXPORT(SetListBoxItem, PartsEngine_SetListBoxItem),
	HLL_TODO_EXPORT(GetListBoxItemCount, PartsEngine_GetListBoxItemCount),
	HLL_TODO_EXPORT(GetListBoxItem, PartsEngine_GetListBoxItem),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(EraseListBoxItem, PartsEngine_EraseListBoxItem),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(ClearListBoxItem, PartsEngine_ClearListBoxItem),
	HLL_TODO_EXPORT(GetListBoxOnCursorItemIndex, PartsEngine_GetListBoxOnCursorItemIndex),
	HLL_TODO_EXPORT(GetListBoxOnCursorItem, PartsEngine_GetListBoxOnCursorItem),
	HLL_TODO_EXPORT(SetListBoxFontProperty, PartsEngine_SetListBoxFontProperty),
	HLL_TODO_EXPORT(GetListBoxFontProperty, PartsEngine_GetListBoxFontProperty),
	HLL_TODO_EXPORT(SetListBoxSelectIndex, PartsEngine_SetListBoxSelectIndex),
	HLL_TODO_EXPORT(GetListBoxSelectIndex, PartsEngine_GetListBoxSelectIndex),
	HLL_TODO_EXPORT(SetListBoxCharSpace, PartsEngine_SetListBoxCharSpace),
	HLL_TODO_EXPORT(GetListBoxCharSpace, PartsEngine_GetListBoxCharSpace),
	HLL_TODO_EXPORT(SetComboBoxSize, PartsEngine_SetComboBoxSize),
	HLL_TODO_EXPORT(SetComboBoxTextMargin, PartsEngine_SetComboBoxTextMargin),
	HLL_TODO_EXPORT(GetComboBoxTextWidthMargin, PartsEngine_GetComboBoxTextWidthMargin),
	HLL_TODO_EXPORT(GetComboBoxTextHeightMargin, PartsEngine_GetComboBoxTextHeightMargin),
	HLL_TODO_EXPORT(SetComboBoxCGName, PartsEngine_SetComboBoxCGName),
	HLL_TODO_EXPORT(GetComboBoxCGName, PartsEngine_GetComboBoxCGName),
	HLL_TODO_EXPORT(SetComboBoxText, PartsEngine_SetComboBoxText),
	HLL_TODO_EXPORT(GetComboBoxText, PartsEngine_GetComboBoxText),
	HLL_TODO_EXPORT(SetComboBoxFontProperty, PartsEngine_SetComboBoxFontProperty),
	HLL_TODO_EXPORT(GetComboBoxFontProperty, PartsEngine_GetComboBoxFontProperty),
	HLL_TODO_EXPORT(SetComboBoxCharSpace, PartsEngine_SetComboBoxCharSpace),
	HLL_TODO_EXPORT(GetComboBoxCharSpace, PartsEngine_GetComboBoxCharSpace),
	HLL_TODO_EXPORT(SetMultiTextBoxSize, PartsEngine_SetMultiTextBoxSize),
	HLL_TODO_EXPORT(SetMultiTextBoxFontProperty, PartsEngine_SetMultiTextBoxFontProperty),
	HLL_TODO_EXPORT(GetMultiTextBoxFontProperty, PartsEngine_GetMultiTextBoxFontProperty),
	HLL_TODO_EXPORT(SetMultiTextBoxReadOnly, PartsEngine_SetMultiTextBoxReadOnly),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(IsMultiTextBoxReadOnly, PartsEngine_IsMultiTextBoxReadOnly),
	HLL_TODO_EXPORT(SetMultiTextBoxText, PartsEngine_SetMultiTextBoxText),
	HLL_TODO_EXPORT(GetMultiTextBoxText, PartsEngine_GetMultiTextBoxText),
	HLL_TODO_EXPORT(SetMultiTextBoxMaxTextLength, PartsEngine_SetMultiTextBoxMaxTextLength),
	HLL_TODO_EXPORT(GetMultiTextBoxMaxTextLength, PartsEngine_GetMultiTextBoxMaxTextLength),
	HLL_TODO_EXPORT(SetMultiTextBoxBGColor, PartsEngine_SetMultiTextBoxBGColor),
	HLL_TODO_EXPORT(GetMultiTextBoxBGR, PartsEngine_GetMultiTextBoxBGR),
	HLL_TODO_EXPORT(GetMultiTextBoxBGG, PartsEngine_GetMultiTextBoxBGG),
	HLL_TODO_EXPORT(GetMultiTextBoxBGB, PartsEngine_GetMultiTextBoxBGB),
	HLL_TODO_EXPORT(SetMultiTextBoxReadOnlyBGColor, PartsEngine_SetMultiTextBoxReadOnlyBGColor),
	HLL_TODO_EXPORT(GetMultiTextBoxReadOnlyBGR, PartsEngine_GetMultiTextBoxReadOnlyBGR),
	HLL_TODO_EXPORT(GetMultiTextBoxReadOnlyBGG, PartsEngine_GetMultiTextBoxReadOnlyBGG),
	HLL_TODO_EXPORT(GetMultiTextBoxReadOnlyBGB, PartsEngine_GetMultiTextBoxReadOnlyBGB),
	HLL_TODO_EXPORT(SetMultiTextBoxFrameColor, PartsEngine_SetMultiTextBoxFrameColor),
	HLL_TODO_EXPORT(GetMultiTextBoxFrameR, PartsEngine_GetMultiTextBoxFrameR),
	HLL_TODO_EXPORT(GetMultiTextBoxFrameG, PartsEngine_GetMultiTextBoxFrameG),
	HLL_TODO_EXPORT(GetMultiTextBoxFrameB, PartsEngine_GetMultiTextBoxFrameB),
	HLL_TODO_EXPORT(SetMultiTextBoxSelectColor, PartsEngine_SetMultiTextBoxSelectColor),
	HLL_TODO_EXPORT(GetMultiTextBoxSelectR, PartsEngine_GetMultiTextBoxSelectR),
	HLL_TODO_EXPORT(GetMultiTextBoxSelectG, PartsEngine_GetMultiTextBoxSelectG),
	HLL_TODO_EXPORT(GetMultiTextBoxSelectB, PartsEngine_GetMultiTextBoxSelectB),
	HLL_TODO_EXPORT(SetMultiTextBoxCGName, PartsEngine_SetMultiTextBoxCGName),
	HLL_TODO_EXPORT(GetMultiTextBoxCGName, PartsEngine_GetMultiTextBoxCGName),
	HLL_TODO_EXPORT(SetMultiTextBoxCharSpace, PartsEngine_SetMultiTextBoxCharSpace),
	HLL_TODO_EXPORT(GetMultiTextBoxCharSpace, PartsEngine_GetMultiTextBoxCharSpace),
	HLL_TODO_EXPORT(SetMultiTextBoxLineSpace, PartsEngine_SetMultiTextBoxLineSpace),
	HLL_TODO_EXPORT(GetMultiTextBoxLineSpace, PartsEngine_GetMultiTextBoxLineSpace),
	HLL_TODO_EXPORT(SetLayoutBoxLayoutType, PartsEngine_SetLayoutBoxLayoutType),
	HLL_TODO_EXPORT(GetLayoutBoxLayoutType, PartsEngine_GetLayoutBoxLayoutType),
	HLL_TODO_EXPORT(SetLayoutBoxReturn, PartsEngine_SetLayoutBoxReturn),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(IsLayoutBoxReturn, PartsEngine_IsLayoutBoxReturn),
	HLL_TODO_EXPORT(GetLayoutBoxReturnSize, PartsEngine_GetLayoutBoxReturnSize),
	HLL_TODO_EXPORT(SetLayoutBoxReturnSizeForRate, PartsEngine_SetLayoutBoxReturnSizeForRate),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(IsLayoutBoxReturnSizeForRate, PartsEngine_IsLayoutBoxReturnSizeForRate),
	HLL_TODO_EXPORT(SetLayoutBoxAlign, PartsEngine_SetLayoutBoxAlign),
	HLL_TODO_EXPORT(GetLayoutBoxAlign, PartsEngine_GetLayoutBoxAlign),
	HLL_TODO_EXPORT(SetLayoutBoxPadding, PartsEngine_SetLayoutBoxPadding),
	HLL_TODO_EXPORT(GetLayoutBoxPaddingTop, PartsEngine_GetLayoutBoxPaddingTop),
	HLL_TODO_EXPORT(GetLayoutBoxPaddingBottom, PartsEngine_GetLayoutBoxPaddingBottom),
	HLL_TODO_EXPORT(GetLayoutBoxPaddingLeft, PartsEngine_GetLayoutBoxPaddingLeft),
	HLL_TODO_EXPORT(GetLayoutBoxPaddingRight, PartsEngine_GetLayoutBoxPaddingRight),
	HLL_TODO_EXPORT(IsRadioButtonBoxExistGUI, PartsEngine_IsRadioButtonBoxExistGUI),
	HLL_TODO_EXPORT(ClearRadioButtonBoxChild, PartsEngine_ClearRadioButtonBoxChild),
	HLL_TODO_EXPORT(AddRadioButtonBoxChild, PartsEngine_AddRadioButtonBoxChild),
	HLL_TODO_EXPORT(RemoveRadioButtonBoxChild, PartsEngine_RemoveRadioButtonBoxChild),
	HLL_TODO_EXPORT(NumofRadioButtonBoxChild, PartsEngine_NumofRadioButtonBoxChild),
	HLL_TODO_EXPORT(GetRadioButtonBoxChild, PartsEngine_GetRadioButtonBoxChild),
	/* 找到 PE_SetPartsCG，但参数不兼容，需要手动实现 */
	HLL_TODO_EXPORT(Parts_SetPartsCG, PartsEngine_Parts_SetPartsCG),
	HLL_EXPORT(Parts_GetPartsCGName, PartsEngine_Parts_GetPartsCGName),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(Parts_GetPartsCGDeform, PartsEngine_Parts_GetPartsCGDeform),
	HLL_EXPORT(Parts_SetPartsCGSurfaceArea, PartsEngine_Parts_SetPartsCGSurfaceArea),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(GetPartsCGSurfaceArea, PartsEngine_GetPartsCGSurfaceArea),
	/* 找到 PE_SetLoopCG，但参数不兼容，需要手动实现 */
	HLL_TODO_EXPORT(Parts_SetLoopCG, PartsEngine_Parts_SetLoopCG),
	HLL_EXPORT(Parts_SetLoopCGSurfaceArea, PartsEngine_Parts_SetLoopCGSurfaceArea),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(GetLoopCGSurfaceArea, PartsEngine_GetLoopCGSurfaceArea),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(GetLoopCGCGName, PartsEngine_GetLoopCGCGName),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(GetLoopCGStartNo, PartsEngine_GetLoopCGStartNo),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(GetLoopCGNumofCG, PartsEngine_GetLoopCGNumofCG),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(Parts_GetLoopCGTimeParCG, PartsEngine_Parts_GetLoopCGTimeParCG),
	/* 找到 PE_SetText，但参数不兼容，需要手动实现 */
	HLL_EXPORT(Parts_SetText, PartsEngine_Parts_SetText),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(GetTextPartsText, PartsEngine_GetTextPartsText),
	/* 找到 PE_AddPartsText，但参数不兼容，需要手动实现 */
	HLL_TODO_EXPORT(Parts_AddPartsText, PartsEngine_Parts_AddPartsText),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(Parts_DeletePartsTopTextLine, PartsEngine_Parts_DeletePartsTopTextLine),
	HLL_EXPORT(Parts_SetPartsTextSurfaceArea, PartsEngine_Parts_SetPartsTextSurfaceArea),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(GetPartsTextSurfaceArea, PartsEngine_GetPartsTextSurfaceArea),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(Parts_SetPartsTextHighlight, PartsEngine_Parts_SetPartsTextHighlight),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(Parts_AddPartsTextHighlight, PartsEngine_Parts_AddPartsTextHighlight),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(Parts_ClearPartsTextHighlight, PartsEngine_Parts_ClearPartsTextHighlight),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(Parts_SetPartsTextCountReturn, PartsEngine_Parts_SetPartsTextCountReturn),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(Parts_GetPartsTextCountReturn, PartsEngine_Parts_GetPartsTextCountReturn),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(Parts_SetTextShowTime, PartsEngine_Parts_SetTextShowTime),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(Parts_GetTextShowTime, PartsEngine_Parts_GetTextShowTime),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(Parts_SetTextPos, PartsEngine_Parts_SetTextPos),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(Parts_GetTextPos, PartsEngine_Parts_GetTextPos),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(Parts_SetTextEnableTag, PartsEngine_Parts_SetTextEnableTag),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(Parts_IsTextEnableTag, PartsEngine_Parts_IsTextEnableTag),
	HLL_EXPORT(Parts_SetFont, PartsEngine_Parts_SetFont),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(GetPartsTextFontProperty, PartsEngine_GetPartsTextFontProperty),
	HLL_EXPORT(Parts_SetPartsFontSize, PartsEngine_Parts_SetPartsFontSize),
	HLL_EXPORT(Parts_SetPartsFontColor, PartsEngine_Parts_SetPartsFontColor),
	HLL_EXPORT(Parts_SetPartsFontBoldWeight, PartsEngine_Parts_SetPartsFontBoldWeight),
	HLL_EXPORT(Parts_SetPartsFontEdgeColor, PartsEngine_Parts_SetPartsFontEdgeColor),
	HLL_EXPORT(Parts_SetPartsFontEdgeWeight, PartsEngine_Parts_SetPartsFontEdgeWeight),
	HLL_EXPORT(Parts_SetTextCharSpace, PartsEngine_Parts_SetTextCharSpace),
	HLL_EXPORT(Parts_SetTextLineSpace, PartsEngine_Parts_SetTextLineSpace),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(Parts_GetTextCharSpace, PartsEngine_Parts_GetTextCharSpace),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(Parts_GetTextLineSpace, PartsEngine_Parts_GetTextLineSpace),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(Parts_SetRubyFont, PartsEngine_Parts_SetRubyFont),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(Parts_GetRubyFont, PartsEngine_Parts_GetRubyFont),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(Parts_SetRubyCharSpace, PartsEngine_Parts_SetRubyCharSpace),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(Parts_GetRubyCharSpace, PartsEngine_Parts_GetRubyCharSpace),
	/* 找到 PE_SetHGaugeCG，但参数不兼容，需要手动实现 */
	HLL_TODO_EXPORT(Parts_SetHGaugeCG, PartsEngine_Parts_SetHGaugeCG),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(Parts_GetHGaugeCG, PartsEngine_Parts_GetHGaugeCG),
	HLL_EXPORT(Parts_SetHGaugeRate, PartsEngine_Parts_SetHGaugeRate),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(Parts_GetHGaugeNumerator, PartsEngine_Parts_GetHGaugeNumerator),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(Parts_GetHGaugeDenominator, PartsEngine_Parts_GetHGaugeDenominator),
	HLL_EXPORT(Parts_SetHGaugeSurfaceArea, PartsEngine_Parts_SetHGaugeSurfaceArea),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(GetHGaugeSurfaceArea, PartsEngine_GetHGaugeSurfaceArea),
	/* 找到 PE_SetVGaugeCG，但参数不兼容，需要手动实现 */
	HLL_TODO_EXPORT(Parts_SetVGaugeCG, PartsEngine_Parts_SetVGaugeCG),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(Parts_GetVGaugeCG, PartsEngine_Parts_GetVGaugeCG),
	HLL_EXPORT(Parts_SetVGaugeRate, PartsEngine_Parts_SetVGaugeRate),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(Parts_GetVGaugeNumerator, PartsEngine_Parts_GetVGaugeNumerator),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(Parts_GetVGaugeDenominator, PartsEngine_Parts_GetVGaugeDenominator),
	HLL_EXPORT(Parts_SetVGaugeSurfaceArea, PartsEngine_Parts_SetVGaugeSurfaceArea),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(GetVGaugeSurfaceArea, PartsEngine_GetVGaugeSurfaceArea),
	/* 找到 PE_SetNumeralCG，但参数不兼容，需要手动实现 */
	HLL_TODO_EXPORT(Parts_SetNumeralCG, PartsEngine_Parts_SetNumeralCG),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(Parts_GetNumeralCGName, PartsEngine_Parts_GetNumeralCGName),
	/* 找到 PE_SetNumeralLinkedCGNumberWidthWidthList，但参数不兼容，需要手动实现 */
	HLL_TODO_EXPORT(Parts_SetNumeralLinkedCGNumberWidthWidthList, PartsEngine_Parts_SetNumeralLinkedCGNumberWidthWidthList),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(GetNumeralCGNumberWidthList, PartsEngine_GetNumeralCGNumberWidthList),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(SetNumeralFont, PartsEngine_SetNumeralFont),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(GetNumeralFont, PartsEngine_GetNumeralFont),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(SetNumeralFullPitch, PartsEngine_SetNumeralFullPitch),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(IsNumerarlFullPitch, PartsEngine_IsNumerarlFullPitch),
	HLL_EXPORT(Parts_SetNumeralNumber, PartsEngine_Parts_SetNumeralNumber),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(Parts_GetNumeralNumber, PartsEngine_Parts_GetNumeralNumber),
	HLL_EXPORT(Parts_SetNumeralShowComma, PartsEngine_Parts_SetNumeralShowComma),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(Parts_IsNumeralShowComma, PartsEngine_Parts_IsNumeralShowComma),
	HLL_EXPORT(Parts_SetNumeralSpace, PartsEngine_Parts_SetNumeralSpace),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(Parts_GetNumeralSpace, PartsEngine_Parts_GetNumeralSpace),
	HLL_EXPORT(Parts_SetNumeralLength, PartsEngine_Parts_SetNumeralLength),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(GetNumeralLength, PartsEngine_GetNumeralLength),
	HLL_EXPORT(Parts_SetNumeralSurfaceArea, PartsEngine_Parts_SetNumeralSurfaceArea),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(GetNumeralSurfaceArea, PartsEngine_GetNumeralSurfaceArea),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(SetNumeralShowType, PartsEngine_SetNumeralShowType),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(Parts_GetNumeralCGType, PartsEngine_Parts_GetNumeralCGType),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(SetNumeralShowPadding, PartsEngine_SetNumeralShowPadding),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(IsNumeralShowPadding, PartsEngine_IsNumeralShowPadding),
	HLL_EXPORT(Parts_SetPartsRectangleDetectionSize, PartsEngine_Parts_SetPartsRectangleDetectionSize),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(SetRectangleDetectionPoint, PartsEngine_SetRectangleDetectionPoint),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(GetRectangleDetectionPoint, PartsEngine_GetRectangleDetectionPoint),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(Parts_SetPartsRectangleDetectionSurfaceArea, PartsEngine_Parts_SetPartsRectangleDetectionSurfaceArea),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(GetRectangleDetectionSurfaceArea, PartsEngine_GetRectangleDetectionSurfaceArea),
	/* 找到 PE_SetPartsCGDetectionSize，但参数不兼容，需要手动实现 */
	HLL_TODO_EXPORT(Parts_SetPartsCGDetectionSize, PartsEngine_Parts_SetPartsCGDetectionSize),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(Parts_GetPartsCGDetectionCGName, PartsEngine_Parts_GetPartsCGDetectionCGName),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(Parts_SetPartsCGDetectionSurfaceArea, PartsEngine_Parts_SetPartsCGDetectionSurfaceArea),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(GetCGDetectionSurfaceArea, PartsEngine_GetCGDetectionSurfaceArea),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(Parts_SetPartsFlat, PartsEngine_Parts_SetPartsFlat),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(Parts_SetPartsFlatAndStop, PartsEngine_Parts_SetPartsFlatAndStop),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(Parts_GetPartsFlatName, PartsEngine_Parts_GetPartsFlatName),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(Parts_StopPartsFlat, PartsEngine_Parts_StopPartsFlat),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(Parts_StartPartsFlat, PartsEngine_Parts_StartPartsFlat),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(Parts_IsPartsFlatEnd, PartsEngine_Parts_IsPartsFlatEnd),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(Parts_IsPartsFlatStop, PartsEngine_Parts_IsPartsFlatStop),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(Parts_GetPartsFlatCurrentFrameNumber, PartsEngine_Parts_GetPartsFlatCurrentFrameNumber),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(Parts_BackPartsFlatBeginFrame, PartsEngine_Parts_BackPartsFlatBeginFrame),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(Parts_StepPartsFlatFinalFrame, PartsEngine_Parts_StepPartsFlatFinalFrame),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(Parts_GoFramePartsFlat, PartsEngine_Parts_GoFramePartsFlat),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(Parts_GetPartsFlatEndFrame, PartsEngine_Parts_GetPartsFlatEndFrame),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(Parts_JumpFlatLabel, PartsEngine_Parts_JumpFlatLabel),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(Parts_SetPartsFlatSurfaceArea, PartsEngine_Parts_SetPartsFlatSurfaceArea),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(GetFlatSurfaceArea, PartsEngine_GetFlatSurfaceArea),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(NumofFlatCG, PartsEngine_NumofFlatCG),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(GetFlatCGName, PartsEngine_GetFlatCGName),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(Parts_ChangeFlatCG, PartsEngine_Parts_ChangeFlatCG),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(GetProxyFlatCGName, PartsEngine_GetProxyFlatCGName),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(ReturnChangeFlatCG, PartsEngine_ReturnChangeFlatCG),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(ClearChangeFlatCG, PartsEngine_ClearChangeFlatCG),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(NumofFlatSound, PartsEngine_NumofFlatSound),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(GetFlatSoundName, PartsEngine_GetFlatSoundName),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(Parts_ChangeFlatSound, PartsEngine_Parts_ChangeFlatSound),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(GetProxyFlatSound, PartsEngine_GetProxyFlatSound),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(ReturnChangeFlatSound, PartsEngine_ReturnChangeFlatSound),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(ClearChangeFlatSound, PartsEngine_ClearChangeFlatSound),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(SetFlatFPSRate, PartsEngine_SetFlatFPSRate),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(GetFlatFPSRate, PartsEngine_GetFlatFPSRate),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(GetFlatFPS, PartsEngine_GetFlatFPS),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(Parts_GetPartsFlatDataInfo, PartsEngine_Parts_GetPartsFlatDataInfo),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(Parts_ExistsFlatFile, PartsEngine_Parts_ExistsFlatFile),
	HLL_EXPORT(Parts_ClearPartsConstructionProcess, PartsEngine_Parts_ClearPartsConstructionProcess),
	HLL_EXPORT(Parts_AddCreateToPartsConstructionProcess, PartsEngine_Parts_AddCreateToPartsConstructionProcess),
	HLL_EXPORT(Parts_AddCreatePixelOnlyToPartsConstructionProcess, PartsEngine_Parts_AddCreatePixelOnlyToPartsConstructionProcess),
	/* 找到 PE_AddCreateCGToProcess，但参数不兼容，需要手动实现 */
	HLL_TODO_EXPORT(Parts_AddCreateCGToProcess, PartsEngine_Parts_AddCreateCGToProcess),
	HLL_EXPORT(Parts_AddFillToPartsConstructionProcess, PartsEngine_Parts_AddFillToPartsConstructionProcess),
	HLL_EXPORT(Parts_AddFillAlphaColorToPartsConstructionProcess, PartsEngine_Parts_AddFillAlphaColorToPartsConstructionProcess),
	HLL_EXPORT(Parts_AddFillAMapToPartsConstructionProcess, PartsEngine_Parts_AddFillAMapToPartsConstructionProcess),
	HLL_TODO_EXPORT(Parts_AddFillWithAlphaToPartsConstructionProcess, PartsEngine_Parts_AddFillWithAlphaToPartsConstructionProcess),
	HLL_TODO_EXPORT(Parts_AddFillGradationHorizonToPartsConstructionProcess, PartsEngine_Parts_AddFillGradationHorizonToPartsConstructionProcess),
	HLL_EXPORT(Parts_AddDrawRectToPartsConstructionProcess, PartsEngine_Parts_AddDrawRectToPartsConstructionProcess),
	/* 找到 PE_AddDrawCutCGToPartsConstructionProcess，但参数不兼容，需要手动实现 */
	HLL_TODO_EXPORT(Parts_AddDrawCutCGToPartsConstructionProcess, PartsEngine_Parts_AddDrawCutCGToPartsConstructionProcess),
	/* 找到 PE_AddCopyCutCGToPartsConstructionProcess，但参数不兼容，需要手动实现 */
	HLL_TODO_EXPORT(Parts_AddCopyCutCGToPartsConstructionProcess, PartsEngine_Parts_AddCopyCutCGToPartsConstructionProcess),
	HLL_TODO_EXPORT(Parts_AddGrayFilterToPartsConstructionProcess, PartsEngine_Parts_AddGrayFilterToPartsConstructionProcess),
	HLL_TODO_EXPORT(Parts_AddAddFilterToPartsConstructionProcess, PartsEngine_Parts_AddAddFilterToPartsConstructionProcess),
	HLL_TODO_EXPORT(Parts_AddMulFilterToPartsConstructionProcess, PartsEngine_Parts_AddMulFilterToPartsConstructionProcess),
	HLL_TODO_EXPORT(Parts_AddDrawLineToPartsConstructionProcess, PartsEngine_Parts_AddDrawLineToPartsConstructionProcess),
	HLL_EXPORT(Parts_BuildPartsConstructionProcess, PartsEngine_Parts_BuildPartsConstructionProcess),
	/* 找到 PE_AddDrawTextToPartsConstructionProcess，但参数不兼容，需要手动实现 */
	HLL_TODO_EXPORT(Parts_AddDrawTextToPartsConstructionProcess, PartsEngine_Parts_AddDrawTextToPartsConstructionProcess),
	/* 找到 PE_AddCopyTextToPartsConstructionProcess，但参数不兼容，需要手动实现 */
	HLL_TODO_EXPORT(Parts_AddCopyTextToPartsConstructionProcess, PartsEngine_Parts_AddCopyTextToPartsConstructionProcess),
	HLL_EXPORT(Parts_SetPartsConstructionSurfaceArea, PartsEngine_Parts_SetPartsConstructionSurfaceArea),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(GetConstructionSurfaceArea, PartsEngine_GetConstructionSurfaceArea),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(Parts_GetPartsConstructionProcessCount, PartsEngine_Parts_GetPartsConstructionProcessCount),
	/* 参数不匹配，需要手动实现 [Rule 5] */
	HLL_TODO_EXPORT(AddPartsConstructionProcess, PartsEngine_AddPartsConstructionProcess),
	/* 参数不匹配，需要手动实现 [Rule 5] */
	HLL_TODO_EXPORT(GetPartsConstructionProcess, PartsEngine_GetPartsConstructionProcess),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(Parts_CreateParts3DLayerPluginID, PartsEngine_Parts_CreateParts3DLayerPluginID),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(Parts_GetParts3DLayerPluginID, PartsEngine_Parts_GetParts3DLayerPluginID),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(Parts_ReleaseParts3DLayerPluginID, PartsEngine_Parts_ReleaseParts3DLayerPluginID),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(CreatePartsMovie, PartsEngine_CreatePartsMovie),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(ReleasePartsMovie, PartsEngine_ReleasePartsMovie),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(PlayPartsMovie, PartsEngine_PlayPartsMovie),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(IsEndPartsMovie, PartsEngine_IsEndPartsMovie),
	/* 未在 'src/parts' 中找到匹配的 PE_ 函数 */
	HLL_TODO_EXPORT(Parts_PlaySound, PartsEngine_Parts_PlaySound),
	HLL_EXPORT(Parts_IsCursorIn, PartsEngine_Parts_IsCursorIn),
	HLL_TODO_EXPORT(ClearBackScene, PartsEngine_ClearBackScene),
	HLL_TODO_EXPORT(SetFontColorForBackScene, PartsEngine_SetFontColorForBackScene),
	HLL_TODO_EXPORT(SetMulColorForBackScene, PartsEngine_SetMulColorForBackScene),
	HLL_TODO_EXPORT(SetAlphaForBackScene, PartsEngine_SetAlphaForBackScene),
	HLL_TODO_EXPORT(SetShowForBackScene, PartsEngine_SetShowForBackScene),
	HLL_TODO_EXPORT(Save, PartsEngine_Save),
	HLL_TODO_EXPORT(SaveBackScene, PartsEngine_SaveBackScene),
	HLL_TODO_EXPORT(Load, PartsEngine_Load),
	HLL_TODO_EXPORT(LoadBackScene, PartsEngine_LoadBackScene),
	HLL_TODO_EXPORT(SaveParts, PartsEngine_SaveParts),
	HLL_TODO_EXPORT(LoadParts, PartsEngine_LoadParts)
	);

static struct ain_hll_function *get_fun(int libno, const char *name)
{
	int fno = ain_get_library_function(ain, libno, name);
	return fno >= 0 ? &ain->libraries[libno].functions[fno] : NULL;
}


static void PartsEngine_PreLink(void)
{
	struct ain_hll_function *fun;
	int libno = ain_get_library(ain, "PartsEngine");
	assert(libno >= 0);

	fun = get_fun(libno, "AddDrawCutCGToPartsConstructionProcess");
	if (fun && fun->nr_arguments == 12) {
		static_library_replace(&lib_PartsEngine, "AddDrawCutCGToPartsConstructionProcess",
				PE_AddDrawCutCGToPartsConstructionProcess);
	}
	fun = get_fun(libno, "AddCopyCutCGToPartsConstructionProcess");
	if (fun && fun->nr_arguments == 12) {
		static_library_replace(&lib_PartsEngine, "AddCopyCutCGToPartsConstructionProcess",
				PE_AddCopyCutCGToPartsConstructionProcess);
	}
}
