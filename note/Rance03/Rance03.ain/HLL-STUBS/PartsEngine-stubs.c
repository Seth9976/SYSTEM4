/* Copyright (C) 2025 (INSERT YOUR NAME)
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, see <http://gnu.org/licenses/>.
 */

#include "hll.h"

//void PartsEngine_Release(int Number);
//void PartsEngine_ReleaseAllWithoutSystem(struct page **EraseNumberList);
//int PartsEngine_GetFreeNumber(void);
//bool PartsEngine_IsExist(int Number);
//int PartsEngine_AddController(int Index);
//void PartsEngine_RemoveController(struct page **EraseNumberList, int Index);
//void PartsEngine_SetActiveController(int ID);
//int PartsEngine_GetActiveController(void);
//int PartsEngine_GetControllerIndex(int ID);
//int PartsEngine_GetControllerID(int Index);
//int PartsEngine_GetControllerLength(void);
//int PartsEngine_GetSystemOverlayController(void);
//void PartsEngine_UpdateComponent(int PassedTime, bool IsSkip, bool MessageWindowShow);
//void PartsEngine_BeginInput(void);
//void PartsEngine_EndInput(void);
//int PartsEngine_GetActiveParts(void);
//void PartsEngine_BeginMotion(void);
//void PartsEngine_EndMotion(void);
//bool PartsEngine_IsMotion(void);
//void PartsEngine_SeekEndMotion(void);
//void PartsEngine_UpdateMotionTime(int Time, bool Skip);
//void PartsEngine_PauseMotion(bool Pause);
//bool PartsEngine_SaveThumbnail(struct string *SaveFileName, int ThumbnailWidth);
//void PartsEngine_SetClickMissSoundName(struct string *SoundName);
//void PartsEngine_GetClickMissSoundName(struct string **SoundName);
//int PartsEngine_GetClickNumber(void);
//void PartsEngine_StopSoundWithoutSystemSound(void);
//void PartsEngine_AddWholeMotionVibrationSize(int BeginWidth, int BeginHeight, int BeginTime, int EndTime);
//void PartsEngine_AddMotionSound(struct string *SoundName, int BeginTime);
//bool PartsEngine_IsExistActivity(struct string *Name);
//bool PartsEngine_CreateActivity(struct string *Name);
//bool PartsEngine_ReleaseActivity(struct string *Name, struct page **EraseNumberList);
//bool PartsEngine_SaveActivityEXText(struct string **Text, struct string *Name);
//bool PartsEngine_LoadActivityEXText(struct string *Name, struct string *Text);
//bool PartsEngine_ReadActivityFile(struct string *Name, struct string *FileName);
//bool PartsEngine_WriteActivityFile(struct string *Name, struct string *FileName);
//bool PartsEngine_IsExistActivityFile(struct string *FileName);
//bool PartsEngine_AddActivityParts(struct string *Name, struct string *PartsName, int Number);
//bool PartsEngine_RemoveActivityParts(struct string *Name, struct string *PartsName);
//bool PartsEngine_RemoveAllActivityParts(struct string *Name);
//int PartsEngine_NumofActivityParts(struct string *Name);
//bool PartsEngine_GetActivityParts(int Index, struct string *Name, struct string **PartsName, int *Number);
//bool PartsEngine_IsExistActivityPartsByName(struct string *Name, struct string *PartsName);
//bool PartsEngine_IsExistActivityPartsByNumber(struct string *Name, int Number);
//int PartsEngine_GetActivityPartsNumber(struct string *Name, struct string *PartsName);
//void PartsEngine_GetActivityPartsName(struct string **Out, struct string *Name, int Number);
//void PartsEngine_AddActivityCloseParts(struct string *Name, struct string *PartsName);
//void PartsEngine_RemoveActivityCloseParts(struct string *Name, struct string *PartsName);
//void PartsEngine_RemoveAllActivityCloseParts(struct string *Name);
//bool PartsEngine_IsExistActivityCloseParts(struct string *Name, struct string *PartsName);
//void PartsEngine_SetActivityIntentData(struct string *Name, struct string *PartsName, struct string *Destination, int IntentType);
//void PartsEngine_AddActivityIntentDataDestination(struct string *Name, struct string *PartsName, struct string *Destination);
//bool PartsEngine_IsExistActivityIntentData(struct string *Name, struct string *PartsName);
//int PartsEngine_NumofActivityIntentDataDestination(struct string *Name, struct string *PartsName);
//void PartsEngine_GetActivityIntentDataDestination(struct string **Out, int Index, struct string *Name, struct string *PartsName);
//int PartsEngine_GetActivityIntentDataType(struct string *Name, struct string *PartsName);
//void PartsEngine_SetActivityEndKey(struct string *Name, int Key);
//void PartsEngine_EraseActivityEndKey(struct string *Name, int Key);
//bool PartsEngine_IsExistActivityEndKey(struct string *Name, int Key);
//int PartsEngine_NumofActivityEndKey(struct string *Name);
//int PartsEngine_GetActivityEndKey(struct string *Name, int Index);
//void PartsEngine_ReleaseMessage(void);
//void PartsEngine_PopMessage(void);
//int PartsEngine_GetMessagePartsNumber(void);
//int PartsEngine_GetMessageDelegateIndex(void);
//int PartsEngine_GetDelegateIndex(int Number);
//int PartsEngine_GetMessageType(void);
//int PartsEngine_GetMessageVariableCount(void);
//int PartsEngine_GetMessageVariableType(int MessageVariableIndex);
//int PartsEngine_GetMessageVariableInt(int MessageVariableIndex);
//float PartsEngine_GetMessageVariableFloat(int MessageVariableIndex);
//bool PartsEngine_GetMessageVariableBool(int MessageVariableIndex);
//void PartsEngine_GetMessageVariableString(int MessageVariableIndex, struct string **String);
//void PartsEngine_SetDelegateIndex(int Number, int DelegateIndex);
//void PartsEngine_SetFocus(int Number);
//bool PartsEngine_IsFocus(int Number);
//void PartsEngine_SetWantSaveBackScene(int Number, bool Enable);
//bool PartsEngine_IsWantSaveBackScene(int Number);
//void PartsEngine_SetComponentType(int Number, int Type, int State);
//int PartsEngine_GetComponentType(int Number, int State);
//void PartsEngine_SetComponentPos(int Number, float X, float Y);
//void PartsEngine_SetComponentPosZ(int Number, int Z);
//float PartsEngine_GetComponentPosX(int Number);
//float PartsEngine_GetComponentPosY(int Number);
//int PartsEngine_GetComponentPosZ(int Number);
//float PartsEngine_GetComponentAbsolutePosX(int Number);
//float PartsEngine_GetComponentAbsolutePosY(int Number);
//int PartsEngine_GetComponentAbsolutePosZ(int Number);
//int PartsEngine_GetComponentAbsoluteMaxPosZ(int Number);
//void PartsEngine_GetComponentAbsolutePos(int Number, float *X1, float *Y1, float *X2, float *Y2, float *X3, float *Y3, float *X4, float *Y4, int State);
//float PartsEngine_Parts_GetPartsUpperLeftPosX(int Number, int State);
//float PartsEngine_Parts_GetPartsUpperLeftPosY(int Number, int State);
//void PartsEngine_Parts_SetInputState(int Number, int State);
//int PartsEngine_Parts_GetInputState(int Number);
//void PartsEngine_SetLockInputState(int Number, bool Lock);
//bool PartsEngine_IsLockInputState(int Number);
//void PartsEngine_SetComponentOriginPosMode(int Number, int OriginPosMode);
//int PartsEngine_GetComponentOriginPosMode(int Number);
//int PartsEngine_GetComponentWidth(int Number);
//int PartsEngine_GetComponentHeight(int Number);
//int PartsEngine_Parts_GetPartsWidth(int Number, int State);
//int PartsEngine_Parts_GetPartsHeight(int Number, int State);
//void PartsEngine_SetComponentShow(int Number, bool Show);
//bool PartsEngine_IsComponentShow(int Number);
//void PartsEngine_SetComponentMessageWindowShowLink(int Number, bool Link);
//bool PartsEngine_IsComponentMessageWindowShowLink(int Number);
//void PartsEngine_SetComponentAlpha(int Number, int Alpha);
//int PartsEngine_GetComponentAlpha(int Number);
//void PartsEngine_SetComponentAddColor(int Number, int R, int G, int B);
//int PartsEngine_GetComponentAddColorR(int Number);
//int PartsEngine_GetComponentAddColorG(int Number);
//int PartsEngine_GetComponentAddColorB(int Number);
//void PartsEngine_SetComponentMulColor(int Number, int R, int G, int B);
//int PartsEngine_GetComponentMulColorR(int Number);
//int PartsEngine_GetComponentMulColorG(int Number);
//int PartsEngine_GetComponentMulColorB(int Number);
//void PartsEngine_SetComponentDrawFilter(int Number, int DrawFilter);
//int PartsEngine_GetComponentDrawFilter(int Number);
//void PartsEngine_SetComponentMagX(int Number, float Mag);
//void PartsEngine_SetComponentMagY(int Number, float Mag);
//float PartsEngine_GetComponentMagX(int Number);
//float PartsEngine_GetComponentMagY(int Number);
//void PartsEngine_SetComponentRotateX(int Number, float Rotate);
//void PartsEngine_SetComponentRotateY(int Number, float Rotate);
//void PartsEngine_SetComponentRotateZ(int Number, float Rotate);
//float PartsEngine_GetComponentRotateX(int Number);
//float PartsEngine_GetComponentRotateY(int Number);
//float PartsEngine_GetComponentRotateZ(int Number);
//void PartsEngine_SetComponentMargin(int Number, int Top, int Bottom, int Left, int Right);
//int PartsEngine_GetComponentMarginTop(int Number);
//int PartsEngine_GetComponentMarginBottom(int Number);
//int PartsEngine_GetComponentMarginLeft(int Number);
//int PartsEngine_GetComponentMarginRight(int Number);
//void PartsEngine_SetComponentAlphaClipper(int Number, int AlphaClipperNumber);
//int PartsEngine_GetComponentAlphaClipper(int Number);
//void PartsEngine_Parts_SetOnCursorShowLinkPartsNumber(int Number, int LinkPartsNumber);
//int PartsEngine_Parts_GetOnCursorShowLinkPartsNumber(int Number);
//void PartsEngine_SetComponentScrollPosXLinkNumber(int Number, int LinkPartsNumber);
//void PartsEngine_SetComponentScrollPosYLinkNumber(int Number, int LinkPartsNumber);
//int PartsEngine_GetComponentScrollPosXLinkNumber(int Number);
//int PartsEngine_GetComponentScrollPosYLinkNumber(int Number);
//void PartsEngine_SetComponentScrollAlphaLinkNumber(int Number, int LinkPartsNumber);
//int PartsEngine_GetComponentScrollAlphaLinkNumber(int Number);
//void PartsEngine_SetComponentCheckBoxShowLinkNumber(int Number, int LinkPartsNumber);
//int PartsEngine_GetComponentCheckBoxShowLinkNumber(int Number);
//void PartsEngine_SetComponentTextureFilterType(int Number, int Type);
//int PartsEngine_GetComponentTextureFilterType(int Number);
//void PartsEngine_SetComponentMipmap(int Number, bool Mipmap);
//bool PartsEngine_IsComponentMipmap(int Number);
//void PartsEngine_SetComponentSpeedupRateByMessageSkip(int Number, int Rate);
//int PartsEngine_GetComponentSpeedupRateByMessageSkip(int Number);
//void PartsEngine_Parts_SetParentPartsNumber(int Number, int ParentPartsNumber);
//int PartsEngine_Parts_GetParentPartsNumber(int Number);
//bool PartsEngine_IsExistChild(int Number, int ChildNumber);
//void PartsEngine_ClearChild(int Number);
//void PartsEngine_AddChild(int Number, int ChildNumber);
//void PartsEngine_InsertChild(int Number, int Index, int ChildNumber);
//void PartsEngine_RemoveChild(int Number, int ChildNumber);
//int PartsEngine_NumofChild(int Number);
//int PartsEngine_GetChildIndex(int Number, int ChildNumber);
//int PartsEngine_GetChild(int Number, int ChildIndex);
//void PartsEngine_AddComponentMotionPos(int Number, float BeginX, float BeginY, float EndX, float EndY, int BeginTime, int EndTime, struct string *CurveName);
//void PartsEngine_AddComponentMotionAlpha(int Number, int BeginAlpha, int EndAlpha, int BeginTime, int EndTime, struct string *CurveName);
//void PartsEngine_AddComponentMotionAddColor(int Number, int BeginR, int BeginG, int BeginB, int EndR, int EndG, int EndB, int BeginTime, int EndTime, struct string *CurveName);
//void PartsEngine_AddComponentMotionMulColor(int Number, int BeginR, int BeginG, int BeginB, int EndR, int EndG, int EndB, int BeginTime, int EndTime, struct string *CurveName);
//bool PartsEngine_AddComponentMotionCG(int Number, struct string *BaseCGName, int BeginCGNumber, int NumofCG, int BeginTime, int EndTime, struct string *CurveName);
//bool PartsEngine_AddComponentMotionCGTermination(int Number, int EndTime);
//void PartsEngine_AddComponentMotionHGaugeRate(int Number, float BeginNumerator, float BeginDenominator, float EndNumerator, float EndDenominator, int BeginTime, int EndTime, struct string *CurveName);
//void PartsEngine_AddComponentMotionVGaugeRate(int Number, float BeginNumerator, float BeginDenominator, float EndNumerator, float EndDenominator, int BeginTime, int EndTime, struct string *CurveName);
//void PartsEngine_AddComponentMotionNumeralNumber(int Number, int BeginNumber, int EndNumber, int BeginTime, int EndTime, struct string *CurveName);
//void PartsEngine_AddComponentMotionMagX(int Number, float BeginMagX, float EndMagX, int BeginTime, int EndTime, struct string *CurveName);
//void PartsEngine_AddComponentMotionMagY(int Number, float BeginMagY, float EndMagY, int BeginTime, int EndTime, struct string *CurveName);
//void PartsEngine_AddComponentMotionRotateX(int Number, float BeginRotateX, float EndRotateX, int BeginTime, int EndTime, struct string *CurveName);
//void PartsEngine_AddComponentMotionRotateY(int Number, float BeginRotateY, float EndRotateY, int BeginTime, int EndTime, struct string *CurveName);
//void PartsEngine_AddComponentMotionRotateZ(int Number, float BeginRotateZ, float EndRotateZ, int BeginTime, int EndTime, struct string *CurveName);
//void PartsEngine_AddComponentMotionVibrationSize(int Number, int BeginWidth, int BeginHeight, int BeginTime, int EndTime);
//void PartsEngine_Parts_SetPassCursor(int Number, bool Pass);
//bool PartsEngine_Parts_GetPartsPassCursor(int Number);
//void PartsEngine_Parts_SetClickable(int Number, bool Clickable);
//bool PartsEngine_Parts_GetPartsClickable(int Number);
//void PartsEngine_Parts_SetResetTimerByChangeInputStatus(int Number, bool Reset, int State);
//bool PartsEngine_Parts_GetResetTimerByChangeInputStatus(int Number, int State);
//void PartsEngine_Parts_SetDrag(int Number, bool Drag);
//bool PartsEngine_Parts_GetPartsDrag(int Number);
//void PartsEngine_Parts_SetSoundName(int Number, struct string *SoundName, int State);
//void PartsEngine_Parts_GetSoundName(int Number, struct string **SoundName, int State);
//void PartsEngine_Parts_SetPartsPixelDecide(int Number, bool PixelDecide);
//bool PartsEngine_Parts_IsPartsPixelDecide(int Number);
//void PartsEngine_Parts_SetPosForRate(int Number, bool PosForRate);
//bool PartsEngine_Parts_IsPosForRate(int Number);
//void PartsEngine_SuspendBuildView(int Number);
//void PartsEngine_SuspendBuildViewAt(int Number, int Type);
//void PartsEngine_ResumeBuildView(int Number);
//void PartsEngine_SetButtonSize(int Number, int Width, int Height);
//void PartsEngine_SetButtonEnable(int Number, bool Enable);
//bool PartsEngine_IsButtonEnable(int Number);
//void PartsEngine_SetButtonColor(int Number, int Red, int Green, int Blue);
//int PartsEngine_GetButtonR(int Number);
//int PartsEngine_GetButtonG(int Number);
//int PartsEngine_GetButtonB(int Number);
//void PartsEngine_SetButtonFontProperty(int Number, int Type, int Size, int R, int G, int B, float BoldWeight, int EdgeR, int EdgeG, int EdgeB, float EdgeWeight);
//void PartsEngine_GetButtonFontProperty(int Number, int *Type, int *Size, int *R, int *G, int *B, float *BoldWeight, int *EdgeR, int *EdgeG, int *EdgeB, float *EdgeWeight);
//void PartsEngine_SetButtonCGName(int Number, struct string *Name);
//void PartsEngine_GetButtonCGName(int Number, struct string **Name);
//void PartsEngine_SetButtonFlatName(int Number, struct string *Name);
//void PartsEngine_GetButtonFlatName(int Number, struct string **Name);
//void PartsEngine_SetButtonText(int Number, struct string *pIText);
//void PartsEngine_GetButtonText(int Number, struct string **pIText);
//void PartsEngine_SetButtonTextOriginPosMode(int Number, int OriginPosMode);
//int PartsEngine_GetButtonTextOriginPosMode(int Number);
//void PartsEngine_SetButtonCharSpace(int Number, int Space);
//int PartsEngine_GetButtonCharSpace(int Number);
//void PartsEngine_SetButtonLineSpace(int Number, int Space);
//int PartsEngine_GetButtonLineSpace(int Number);
//void PartsEngine_SetCheckBoxSize(int Number, int Width, int Height);
//int PartsEngine_GetCheckBoxButtonWidth(int Number);
//int PartsEngine_GetCheckBoxButtonHeight(int Number);
//void PartsEngine_CheckBoxChecked(int Number, bool Check);
//bool PartsEngine_IsCheckBoxChecked(int Number);
//void PartsEngine_SetCheckBoxColor(int Number, int Red, int Green, int Blue);
//int PartsEngine_GetCheckBoxR(int Number);
//int PartsEngine_GetCheckBoxG(int Number);
//int PartsEngine_GetCheckBoxB(int Number);
//void PartsEngine_SetCheckBoxFontProperty(int Number, int Type, int Size, int R, int G, int B, float BoldWeight, int EdgeR, int EdgeG, int EdgeB, float EdgeWeight);
//void PartsEngine_GetCheckBoxFontProperty(int Number, int *Type, int *Size, int *R, int *G, int *B, float *BoldWeight, int *EdgeR, int *EdgeG, int *EdgeB, float *EdgeWeight);
//void PartsEngine_SetCheckBoxCGName(int Number, struct string *pIName);
//void PartsEngine_GetCheckBoxCGName(int Number, struct string **pIName);
//void PartsEngine_SetCheckBoxFlatName(int Number, struct string *Name);
//void PartsEngine_GetCheckBoxFlatName(int Number, struct string **Name);
//void PartsEngine_SetCheckBoxText(int Number, struct string *pIName);
//void PartsEngine_GetCheckBoxText(int Number, struct string **pIName);
//void PartsEngine_SetCheckBoxTextOriginPosMode(int Number, int OriginPosMode);
//int PartsEngine_GetCheckBoxTextOriginPosMode(int Number);
//void PartsEngine_SetCheckBoxButtonMode(int Number, bool On);
//bool PartsEngine_IsCheckBoxButtonMode(int Number);
//void PartsEngine_SetCheckBoxCharSpace(int Number, int Space);
//int PartsEngine_GetCheckBoxCharSpace(int Number);
//void PartsEngine_SetCheckBoxLineSpace(int Number, int Space);
//int PartsEngine_GetCheckBoxLineSpace(int Number);
//void PartsEngine_SetVScrollbarSize(int Number, int Width, int Height);
//void PartsEngine_SetVScrollbarUpHeight(int Number, int Height);
//void PartsEngine_SetVScrollbarDownHeight(int Number, int Height);
//int PartsEngine_GetVScrollbarUpHeight(int Number);
//int PartsEngine_GetVScrollbarDownHeight(int Number);
//void PartsEngine_SetVScrollbarTotalSize(int Number, int Size);
//void PartsEngine_SetVScrollbarViewSize(int Number, int Size);
//void PartsEngine_SetVScrollbarScrollPos(int Number, int Pos);
//void PartsEngine_SetVScrollbarScrollRate(int Number, float Rate);
//void PartsEngine_SetVScrollbarMoveSizeByButton(int Number, int Size);
//int PartsEngine_GetVScrollbarTotalSize(int Number);
//int PartsEngine_GetVScrollbarViewSize(int Number);
//int PartsEngine_GetVScrollbarScrollPos(int Number);
//float PartsEngine_GetVScrollbarScrollRate(int Number);
//int PartsEngine_GetVScrollbarMoveSizeByButton(int Number);
//void PartsEngine_SetVScrollbarCGName(int Number, struct string *pIName);
//void PartsEngine_GetVScrollbarCGName(int Number, struct string **pIName);
//void PartsEngine_SetVScrollbarFlatName(int Number, struct string *pIName);
//void PartsEngine_GetVScrollbarFlatName(int Number, struct string **pIName);
//void PartsEngine_SetHScrollbarSize(int Number, int Width, int Height);
//void PartsEngine_SetHScrollbarLeftWidth(int Number, int Width);
//void PartsEngine_SetHScrollbarRightWidth(int Number, int Width);
//int PartsEngine_GetHScrollbarLeftWidth(int Number);
//int PartsEngine_GetHScrollbarRightWidth(int Number);
//void PartsEngine_SetHScrollbarTotalSize(int Number, int Size);
//void PartsEngine_SetHScrollbarViewSize(int Number, int Size);
//void PartsEngine_SetHScrollbarScrollPos(int Number, int Pos);
//void PartsEngine_SetHScrollbarScrollRate(int Number, float Rate);
//void PartsEngine_SetHScrollbarMoveSizeByButton(int Number, int Size);
//int PartsEngine_GetHScrollbarTotalSize(int Number);
//int PartsEngine_GetHScrollbarViewSize(int Number);
//int PartsEngine_GetHScrollbarScrollPos(int Number);
//float PartsEngine_GetHScrollbarScrollRate(int Number);
//int PartsEngine_GetHScrollbarMoveSizeByButton(int Number);
//void PartsEngine_SetHScrollbarCGName(int Number, struct string *pIName);
//void PartsEngine_GetHScrollbarCGName(int Number, struct string **pIName);
//void PartsEngine_SetHScrollbarFlatName(int Number, struct string *pIName);
//void PartsEngine_GetHScrollbarFlatName(int Number, struct string **pIName);
//void PartsEngine_SetTextBoxSize(int Number, int Width, int Height);
//void PartsEngine_SetTextBoxFontProperty(int Number, int Type, int Size, int R, int G, int B, float BoldWeight, int EdgeR, int EdgeG, int EdgeB, float EdgeWeight);
//void PartsEngine_GetTextBoxFontProperty(int Number, int *Type, int *Size, int *R, int *G, int *B, float *BoldWeight, int *EdgeR, int *EdgeG, int *EdgeB, float *EdgeWeight);
//void PartsEngine_SetTextBoxReadOnly(int Number, bool Flg);
//bool PartsEngine_IsTextBoxReadOnly(int Number);
//void PartsEngine_SetTextBoxText(int Number, struct string *pIText);
//void PartsEngine_GetTextBoxText(int Number, struct string **pIText);
//void PartsEngine_SetTextBoxMaxTextLength(int Number, int Length);
//int PartsEngine_GetTextBoxMaxTextLength(int Number);
//void PartsEngine_SetTextBoxBGColor(int Number, int Red, int Green, int Blue);
//int PartsEngine_GetTextBoxBGR(int Number);
//int PartsEngine_GetTextBoxBGG(int Number);
//int PartsEngine_GetTextBoxBGB(int Number);
//void PartsEngine_SetTextBoxReadOnlyBGColor(int Number, int Red, int Green, int Blue);
//int PartsEngine_GetTextBoxReadOnlyBGR(int Number);
//int PartsEngine_GetTextBoxReadOnlyBGG(int Number);
//int PartsEngine_GetTextBoxReadOnlyBGB(int Number);
//void PartsEngine_SetTextBoxFrameColor(int Number, int Red, int Green, int Blue);
//int PartsEngine_GetTextBoxFrameR(int Number);
//int PartsEngine_GetTextBoxFrameG(int Number);
//int PartsEngine_GetTextBoxFrameB(int Number);
//void PartsEngine_SetTextBoxSelectColor(int Number, int Red, int Green, int Blue);
//int PartsEngine_GetTextBoxSelectR(int Number);
//int PartsEngine_GetTextBoxSelectG(int Number);
//int PartsEngine_GetTextBoxSelectB(int Number);
//void PartsEngine_SetTextBoxCGName(int Number, struct string *pIName);
//void PartsEngine_GetTextBoxCGName(int Number, struct string **pIName);
//void PartsEngine_SetTextBoxCharSpace(int Number, int Space);
//int PartsEngine_GetTextBoxCharSpace(int Number);
//void PartsEngine_SetOpenTextBoxIME(int Number, bool Open);
//bool PartsEngine_IsOpenTextBoxIME(int Number);
//void PartsEngine_SelectTextBoxAll(int Number);
//void PartsEngine_SetListBoxSize(int Number, int Width, int Height);
//void PartsEngine_SetListBoxLineHeight(int Number, int Height);
//int PartsEngine_GetListBoxLineHeight(int Number);
//void PartsEngine_SetListBoxMargin(int Number, int Width, int Height);
//int PartsEngine_GetListBoxWidthMargin(int Number);
//int PartsEngine_GetListBoxHeightMargin(int Number);
//void PartsEngine_SetListBoxCGName(int Number, struct string *pIName);
//void PartsEngine_GetListBoxCGName(int Number, struct string **pIName);
//void PartsEngine_SetListBoxScrollPos(int Number, int Pos);
//int PartsEngine_GetListBoxScrollPos(int Number);
//void PartsEngine_AddListBoxItem(int Number, struct string *pIItem);
//void PartsEngine_InsertListBoxItem(int Number, int Index, struct string *pIItem);
//void PartsEngine_SetListBoxItem(int Number, int Index, struct string *pIItem);
//int PartsEngine_GetListBoxItemCount(int Number);
//void PartsEngine_GetListBoxItem(int Number, int Index, struct string **pIItem);
//void PartsEngine_EraseListBoxItem(int Number, int Index);
//void PartsEngine_ClearListBoxItem(int Number);
//int PartsEngine_GetListBoxOnCursorItemIndex(int Number);
//void PartsEngine_GetListBoxOnCursorItem(int Number, struct string **pIItem);
//void PartsEngine_SetListBoxFontProperty(int Number, int Type, int Size, int R, int G, int B, float BoldWeight, int EdgeR, int EdgeG, int EdgeB, float EdgeWeight);
//void PartsEngine_GetListBoxFontProperty(int Number, int *Type, int *Size, int *R, int *G, int *B, float *BoldWeight, int *EdgeR, int *EdgeG, int *EdgeB, float *EdgeWeight);
//void PartsEngine_SetListBoxSelectIndex(int Number, int Index);
//int PartsEngine_GetListBoxSelectIndex(int Number);
//void PartsEngine_SetListBoxCharSpace(int Number, int Space);
//int PartsEngine_GetListBoxCharSpace(int Number);
//void PartsEngine_SetComboBoxSize(int Number, int Width, int Height);
//void PartsEngine_SetComboBoxTextMargin(int Number, int Width, int Height);
//int PartsEngine_GetComboBoxTextWidthMargin(int Number);
//int PartsEngine_GetComboBoxTextHeightMargin(int Number);
//void PartsEngine_SetComboBoxCGName(int Number, struct string *pIName);
//void PartsEngine_GetComboBoxCGName(int Number, struct string **pIName);
//void PartsEngine_SetComboBoxText(int Number, struct string *pIItem);
//void PartsEngine_GetComboBoxText(int Number, struct string **pIItem);
//void PartsEngine_SetComboBoxFontProperty(int Number, int Type, int Size, int R, int G, int B, float BoldWeight, int EdgeR, int EdgeG, int EdgeB, float EdgeWeight);
//void PartsEngine_GetComboBoxFontProperty(int Number, int *Type, int *Size, int *R, int *G, int *B, float *BoldWeight, int *EdgeR, int *EdgeG, int *EdgeB, float *EdgeWeight);
//void PartsEngine_SetComboBoxCharSpace(int Number, int Space);
//int PartsEngine_GetComboBoxCharSpace(int Number);
//void PartsEngine_SetMultiTextBoxSize(int Number, int Width, int Height);
//void PartsEngine_SetMultiTextBoxFontProperty(int Number, int Type, int Size, int R, int G, int B, float BoldWeight, int EdgeR, int EdgeG, int EdgeB, float EdgeWeight);
//void PartsEngine_GetMultiTextBoxFontProperty(int Number, int *Type, int *Size, int *R, int *G, int *B, float *BoldWeight, int *EdgeR, int *EdgeG, int *EdgeB, float *EdgeWeight);
//void PartsEngine_SetMultiTextBoxReadOnly(int Number, bool Flg);
//bool PartsEngine_IsMultiTextBoxReadOnly(int Number);
//void PartsEngine_SetMultiTextBoxText(int Number, struct string *Text);
//void PartsEngine_GetMultiTextBoxText(int Number, struct string **Text);
//void PartsEngine_SetMultiTextBoxMaxTextLength(int Number, int Length);
//int PartsEngine_GetMultiTextBoxMaxTextLength(int Number);
//void PartsEngine_SetMultiTextBoxBGColor(int Number, int Red, int Green, int Blue);
//int PartsEngine_GetMultiTextBoxBGR(int Number);
//int PartsEngine_GetMultiTextBoxBGG(int Number);
//int PartsEngine_GetMultiTextBoxBGB(int Number);
//void PartsEngine_SetMultiTextBoxReadOnlyBGColor(int Number, int Red, int Green, int Blue);
//int PartsEngine_GetMultiTextBoxReadOnlyBGR(int Number);
//int PartsEngine_GetMultiTextBoxReadOnlyBGG(int Number);
//int PartsEngine_GetMultiTextBoxReadOnlyBGB(int Number);
//void PartsEngine_SetMultiTextBoxFrameColor(int Number, int Red, int Green, int Blue);
//int PartsEngine_GetMultiTextBoxFrameR(int Number);
//int PartsEngine_GetMultiTextBoxFrameG(int Number);
//int PartsEngine_GetMultiTextBoxFrameB(int Number);
//void PartsEngine_SetMultiTextBoxSelectColor(int Number, int Red, int Green, int Blue);
//int PartsEngine_GetMultiTextBoxSelectR(int Number);
//int PartsEngine_GetMultiTextBoxSelectG(int Number);
//int PartsEngine_GetMultiTextBoxSelectB(int Number);
//void PartsEngine_SetMultiTextBoxCGName(int Number, struct string *pIName);
//void PartsEngine_GetMultiTextBoxCGName(int Number, struct string **pIName);
//void PartsEngine_SetMultiTextBoxCharSpace(int Number, int Space);
//int PartsEngine_GetMultiTextBoxCharSpace(int Number);
//void PartsEngine_SetMultiTextBoxLineSpace(int Number, int Space);
//int PartsEngine_GetMultiTextBoxLineSpace(int Number);
//void PartsEngine_SetLayoutBoxLayoutType(int Number, int Type);
//int PartsEngine_GetLayoutBoxLayoutType(int Number);
//void PartsEngine_SetLayoutBoxReturn(int Number, bool Return, float ReturnSize);
//bool PartsEngine_IsLayoutBoxReturn(int Number);
//float PartsEngine_GetLayoutBoxReturnSize(int Number);
//void PartsEngine_SetLayoutBoxReturnSizeForRate(int Number, bool SizeForRate);
//bool PartsEngine_IsLayoutBoxReturnSizeForRate(int Number);
//void PartsEngine_SetLayoutBoxAlign(int Number, int Align);
//int PartsEngine_GetLayoutBoxAlign(int Number);
//void PartsEngine_SetLayoutBoxPadding(int Number, int Top, int Bottom, int Left, int Right);
//int PartsEngine_GetLayoutBoxPaddingTop(int Number);
//int PartsEngine_GetLayoutBoxPaddingBottom(int Number);
//int PartsEngine_GetLayoutBoxPaddingLeft(int Number);
//int PartsEngine_GetLayoutBoxPaddingRight(int Number);
//bool PartsEngine_IsRadioButtonBoxExistGUI(int Number, int ChildNumber);
//void PartsEngine_ClearRadioButtonBoxChild(int Number);
//void PartsEngine_AddRadioButtonBoxChild(int Number, int ChildNumber);
//void PartsEngine_RemoveRadioButtonBoxChild(int Number, int ChildNumber);
//int PartsEngine_NumofRadioButtonBoxChild(int Number);
//int PartsEngine_GetRadioButtonBoxChild(int Number, int ChildIndex);
//bool PartsEngine_Parts_SetPartsCG(int Number, struct string *pCGName, int SpriteDeform, int State);
//void PartsEngine_Parts_GetPartsCGName(int Number, struct string **pCGName, int State);
//int PartsEngine_Parts_GetPartsCGDeform(int Number, int State);
//bool PartsEngine_Parts_SetPartsCGSurfaceArea(int Number, int X, int Y, int Width, int Height, int State);
//void PartsEngine_GetPartsCGSurfaceArea(int Number, int *X, int *Y, int *Width, int *Height, int State);
//bool PartsEngine_Parts_SetLoopCG(int Number, struct string *pCGName, int StartNo, int NumofCG, int TimePerCG, int State);
//bool PartsEngine_Parts_SetLoopCGSurfaceArea(int Number, int X, int Y, int Width, int Height, int State);
//void PartsEngine_GetLoopCGSurfaceArea(int Number, int *X, int *Y, int *Width, int *Height, int State);
//void PartsEngine_GetLoopCGCGName(struct string **Out, int Number, int State);
//int PartsEngine_GetLoopCGStartNo(int Number, int State);
//int PartsEngine_GetLoopCGNumofCG(int Number, int State);
//int PartsEngine_Parts_GetLoopCGTimeParCG(int Number, int State);
//bool PartsEngine_Parts_SetText(int Number, struct string *pIText, int State);
//void PartsEngine_GetTextPartsText(struct string **Out, int Number, int State);
//bool PartsEngine_Parts_AddPartsText(int Number, struct string *pIText, int State);
//bool PartsEngine_Parts_DeletePartsTopTextLine(int Number, int State);
//bool PartsEngine_Parts_SetPartsTextSurfaceArea(int Number, int X, int Y, int Width, int Height, int State);
//void PartsEngine_GetPartsTextSurfaceArea(int Number, int *X, int *Y, int *Width, int *Height, int State);
//void PartsEngine_Parts_SetPartsTextHighlight(int Number, int Start, int Length, int nR, int nG, int nB, int State);
//void PartsEngine_Parts_AddPartsTextHighlight(int Number, int Start, int Length, int nR, int nG, int nB, int State);
//void PartsEngine_Parts_ClearPartsTextHighlight(int Number, int State);
//void PartsEngine_Parts_SetPartsTextCountReturn(int Number, bool Count, int State);
//bool PartsEngine_Parts_GetPartsTextCountReturn(int Number, int State);
//void PartsEngine_Parts_SetTextShowTime(int Number, int Time, int State);
//int PartsEngine_Parts_GetTextShowTime(int Number, int State);
//void PartsEngine_Parts_SetTextPos(int Number, int Pos, int State);
//int PartsEngine_Parts_GetTextPos(int Number, int State);
//void PartsEngine_Parts_SetTextEnableTag(int Number, bool Enable, int State);
//bool PartsEngine_Parts_IsTextEnableTag(int Number, int State);
//bool PartsEngine_Parts_SetFont(int Number, int Type, int Size, int R, int G, int B, float BoldWeight, int EdgeR, int EdgeG, int EdgeB, float EdgeWeight, int State);
//void PartsEngine_GetPartsTextFontProperty(int Number, int *Type, int *Size, int *R, int *G, int *B, float *BoldWeight, int *EdgeR, int *EdgeG, int *EdgeB, float *EdgeWeight, int State);
//bool PartsEngine_Parts_SetPartsFontType(int Number, int Type, int State);
//bool PartsEngine_Parts_SetPartsFontSize(int Number, int Size, int State);
//bool PartsEngine_Parts_SetPartsFontColor(int Number, int R, int G, int B, int State);
//bool PartsEngine_Parts_SetPartsFontBoldWeight(int Number, float BoldWeight, int State);
//bool PartsEngine_Parts_SetPartsFontEdgeColor(int Number, int R, int G, int B, int State);
//bool PartsEngine_Parts_SetPartsFontEdgeWeight(int Number, float EdgeWeight, int State);
//bool PartsEngine_Parts_SetTextCharSpace(int Number, int CharSpace, int State);
//bool PartsEngine_Parts_SetTextLineSpace(int Number, int LineSpace, int State);
//int PartsEngine_Parts_GetTextCharSpace(int Number, int State);
//int PartsEngine_Parts_GetTextLineSpace(int Number, int State);
//void PartsEngine_Parts_SetRubyFont(int Number, int Type, int Size, int R, int G, int B, float BoldWeight, int EdgeR, int EdgeG, int EdgeB, float EdgeWeight, int State);
//void PartsEngine_Parts_GetRubyFont(int Number, int *Type, int *Size, int *R, int *G, int *B, float *BoldWeight, int *EdgeR, int *EdgeG, int *EdgeB, float *EdgeWeight, int State);
//void PartsEngine_Parts_SetRubyCharSpace(int Number, int CharSpace, int State);
//int PartsEngine_Parts_GetRubyCharSpace(int Number, int State);
//bool PartsEngine_Parts_SetHGaugeCG(int Number, struct string *pCGName, int State);
//void PartsEngine_Parts_GetHGaugeCG(struct string **Out, int Number, int State);
//bool PartsEngine_Parts_SetHGaugeRate(int Number, float Numerator, float Denominator, int State);
//float PartsEngine_Parts_GetHGaugeNumerator(int Number, int State);
//float PartsEngine_Parts_GetHGaugeDenominator(int Number, int State);
//bool PartsEngine_Parts_SetHGaugeSurfaceArea(int Number, int X, int Y, int Width, int Height, int State);
//void PartsEngine_GetHGaugeSurfaceArea(int Number, int *X, int *Y, int *Width, int *Height, int State);
//bool PartsEngine_Parts_SetVGaugeCG(int Number, struct string *pCGName, int State);
//void PartsEngine_Parts_GetVGaugeCG(struct string **Out, int Number, int State);
//bool PartsEngine_Parts_SetVGaugeRate(int Number, float Numerator, float Denominator, int State);
//float PartsEngine_Parts_GetVGaugeNumerator(int Number, int State);
//float PartsEngine_Parts_GetVGaugeDenominator(int Number, int State);
//bool PartsEngine_Parts_SetVGaugeSurfaceArea(int Number, int X, int Y, int Width, int Height, int State);
//void PartsEngine_GetVGaugeSurfaceArea(int Number, int *X, int *Y, int *Width, int *Height, int State);
//bool PartsEngine_Parts_SetNumeralCG(int Number, struct string *pBaseCGName, int State);
//void PartsEngine_Parts_GetNumeralCGName(struct string **Out, int Number, int State);
//bool PartsEngine_Parts_SetNumeralLinkedCGNumberWidthWidthList(int Number, struct string *pCGName, int Width0, int Width1, int Width2, int Width3, int Width4, int Width5, int Width6, int Width7, int Width8, int Width9, int WidthMinus, int WidthComma, int State);
//void PartsEngine_GetNumeralCGNumberWidthList(int Number, int *Width0, int *Width1, int *Width2, int *Width3, int *Width4, int *Width5, int *Width6, int *Width7, int *Width8, int *Width9, int *WidthMinus, int *WidthComma, int State);
//void PartsEngine_SetNumeralFont(int Number, int Type, int Size, int R, int G, int B, float BoldWeight, int EdgeR, int EdgeG, int EdgeB, float EdgeWeight, int State);
//void PartsEngine_GetNumeralFont(int Number, int *Type, int *Size, int *R, int *G, int *B, float *BoldWeight, int *EdgeR, int *EdgeG, int *EdgeB, float *EdgeWeight, int State);
//void PartsEngine_SetNumeralFullPitch(int Number, bool Full, int State);
//bool PartsEngine_IsNumerarlFullPitch(int Number, int State);
//bool PartsEngine_Parts_SetNumeralNumber(int Number, int Number, int State);
//int PartsEngine_Parts_GetNumeralNumber(int Number, int State);
//bool PartsEngine_Parts_SetNumeralShowComma(int Number, bool ShowComma, int State);
//bool PartsEngine_Parts_IsNumeralShowComma(int Number, int State);
//bool PartsEngine_Parts_SetNumeralSpace(int Number, int NumeralSpace, int State);
//int PartsEngine_Parts_GetNumeralSpace(int Number, int State);
//bool PartsEngine_Parts_SetNumeralLength(int Number, int Length, int State);
//int PartsEngine_GetNumeralLength(int Number, int State);
//bool PartsEngine_Parts_SetNumeralSurfaceArea(int Number, int X, int Y, int Width, int Height, int State);
//void PartsEngine_GetNumeralSurfaceArea(int Number, int *X, int *Y, int *Width, int *Height, int State);
//void PartsEngine_SetNumeralShowType(int Number, int Type, int State);
//int PartsEngine_Parts_GetNumeralCGType(int Number, int State);
//void PartsEngine_SetNumeralShowPadding(int Number, bool Show, int State);
//bool PartsEngine_IsNumeralShowPadding(int Number, int State);
//bool PartsEngine_Parts_SetPartsRectangleDetectionSize(int Number, int Width, int Height, int State);
//void PartsEngine_SetRectangleDetectionPoint(int Number, int X1, int Y1, int X2, int Y2, int X3, int Y3, int X4, int Y4, int State);
//void PartsEngine_GetRectangleDetectionPoint(int Number, int *X1, int *Y1, int *X2, int *Y2, int *X3, int *Y3, int *X4, int *Y4, int State);
//bool PartsEngine_Parts_SetPartsRectangleDetectionSurfaceArea(int Number, int X, int Y, int Width, int Height, int State);
//void PartsEngine_GetRectangleDetectionSurfaceArea(int Number, int *X, int *Y, int *Width, int *Height, int State);
//bool PartsEngine_Parts_SetPartsCGDetectionSize(int Number, struct string *pCGName, int State);
//void PartsEngine_Parts_GetPartsCGDetectionCGName(struct string **Out, int Number, int State);
//bool PartsEngine_Parts_SetPartsCGDetectionSurfaceArea(int Number, int X, int Y, int Width, int Height, int State);
//void PartsEngine_GetCGDetectionSurfaceArea(int Number, int *X, int *Y, int *Width, int *Height, int State);
//bool PartsEngine_Parts_SetPartsFlat(int Number, struct string *pIFileName, int State);
//bool PartsEngine_Parts_SetPartsFlatAndStop(int Number, struct string *pIFileName, int State);
//void PartsEngine_Parts_GetPartsFlatName(struct string **Out, int Number, int State);
//bool PartsEngine_Parts_StopPartsFlat(int Number, int State);
//bool PartsEngine_Parts_StartPartsFlat(int Number, int State);
//bool PartsEngine_Parts_IsPartsFlatEnd(int Number, int State);
//bool PartsEngine_Parts_IsPartsFlatStop(int Number, int State);
//int PartsEngine_Parts_GetPartsFlatCurrentFrameNumber(int Number, int State);
//bool PartsEngine_Parts_BackPartsFlatBeginFrame(int Number, int State);
//bool PartsEngine_Parts_StepPartsFlatFinalFrame(int Number, int State);
//bool PartsEngine_Parts_GoFramePartsFlat(int Number, int CurrentFrame, int State);
//int PartsEngine_Parts_GetPartsFlatEndFrame(int Number, int State);
//void PartsEngine_Parts_JumpFlatLabel(int Number, struct string *pName, int State);
//bool PartsEngine_Parts_SetPartsFlatSurfaceArea(int Number, int X, int Y, int Width, int Height, int State);
//void PartsEngine_GetFlatSurfaceArea(int Number, int *X, int *Y, int *Width, int *Height, int State);
//int PartsEngine_NumofFlatCG(int Number, int State);
//void PartsEngine_GetFlatCGName(struct string **Out, int Number, int Index, int State);
//void PartsEngine_Parts_ChangeFlatCG(int Number, struct string *OldName, struct string *NewName, int State);
//void PartsEngine_GetProxyFlatCGName(struct string **Out, int Number, struct string *OldName, int State);
//void PartsEngine_ReturnChangeFlatCG(int Number, struct string *OldName, int State);
//void PartsEngine_ClearChangeFlatCG(int Number, int State);
//int PartsEngine_NumofFlatSound(int Number, int State);
//void PartsEngine_GetFlatSoundName(struct string **Out, int Number, int Index, int State);
//void PartsEngine_Parts_ChangeFlatSound(int Number, struct string *OldName, struct string *NewSoundName, int State);
//void PartsEngine_GetProxyFlatSound(struct string **Out, int Number, struct string *OldName, int State);
//void PartsEngine_ReturnChangeFlatSound(int Number, struct string *OldName, int State);
//void PartsEngine_ClearChangeFlatSound(int Number, int State);
//void PartsEngine_SetFlatFPSRate(int Number, float Rate, int State);
//float PartsEngine_GetFlatFPSRate(int Number, int State);
//int PartsEngine_GetFlatFPS(int Number, int State);
//void PartsEngine_Parts_GetPartsFlatDataInfo(int Number, struct string **Text, int State);
//bool PartsEngine_Parts_ExistsFlatFile(struct string *pIFileName);
//bool PartsEngine_Parts_ClearPartsConstructionProcess(int Number, int State);
//bool PartsEngine_Parts_AddCreateToPartsConstructionProcess(int Number, int nWidth, int nHeight, int State);
//bool PartsEngine_Parts_AddCreatePixelOnlyToPartsConstructionProcess(int Number, int nWidth, int nHeight, int State);
//bool PartsEngine_Parts_AddCreateCGToProcess(int Number, struct string *pICGName, int State);
//bool PartsEngine_Parts_AddFillToPartsConstructionProcess(int Number, int nX, int nY, int nWidth, int nHeight, int nR, int nG, int nB, int State);
//bool PartsEngine_Parts_AddFillAlphaColorToPartsConstructionProcess(int Number, int nX, int nY, int nWidth, int nHeight, int nR, int nG, int nB, int nA, int State);
//bool PartsEngine_Parts_AddFillAMapToPartsConstructionProcess(int Number, int nX, int nY, int nWidth, int nHeight, int nAlpha, int State);
//bool PartsEngine_Parts_AddFillWithAlphaToPartsConstructionProcess(int Number, int nX, int nY, int nWidth, int nHeight, int nR, int nG, int nB, int nA, int State);
//bool PartsEngine_Parts_AddFillGradationHorizonToPartsConstructionProcess(int Number, int nX, int nY, int nWidth, int nHeight, int nTopR, int nTopG, int nTopB, int nBottomR, int nBottomG, int nBottomB, int State);
//bool PartsEngine_Parts_AddDrawRectToPartsConstructionProcess(int Number, int nX, int nY, int nWidth, int nHeight, int nR, int nG, int nB, int State);
//bool PartsEngine_Parts_AddDrawCutCGToPartsConstructionProcess(int Number, struct string *pICGName, int DestX, int DestY, int DestWidth, int DestHeight, int SrcX, int SrcY, int SrcWidth, int SrcHeight, int InterpolationType, int State);
//bool PartsEngine_Parts_AddCopyCutCGToPartsConstructionProcess(int Number, struct string *pICGName, int DestX, int DestY, int DestWidth, int DestHeight, int SrcX, int SrcY, int SrcWidth, int SrcHeight, int InterpolationType, int State);
//bool PartsEngine_Parts_AddGrayFilterToPartsConstructionProcess(int Number, int nX, int nY, int nWidth, int nHeight, bool FullSize, int State);
//bool PartsEngine_Parts_AddAddFilterToPartsConstructionProcess(int Number, int nX, int nY, int nWidth, int nHeight, int nR, int nG, int nB, bool FullSize, int State);
//bool PartsEngine_Parts_AddMulFilterToPartsConstructionProcess(int Number, int nX, int nY, int nWidth, int nHeight, int nR, int nG, int nB, bool FullSize, int State);
//bool PartsEngine_Parts_AddDrawLineToPartsConstructionProcess(int Number, int nX1, int nY1, int nX2, int nY2, int nR, int nG, int nB, int nA, int State);
//bool PartsEngine_Parts_BuildPartsConstructionProcess(int Number, int State);
//bool PartsEngine_Parts_AddDrawTextToPartsConstructionProcess(int Number, int nX, int nY, struct string *pIText, int Type, int Size, int R, int G, int B, float BoldWeight, int EdgeR, int EdgeG, int EdgeB, float EdgeWeight, int CharSpace, int LineSpace, int State);
//bool PartsEngine_Parts_AddCopyTextToPartsConstructionProcess(int Number, int nX, int nY, struct string *pIText, int Type, int Size, int R, int G, int B, float BoldWeight, int EdgeR, int EdgeG, int EdgeB, float EdgeWeight, int CharSpace, int LineSpace, int State);
//bool PartsEngine_Parts_SetPartsConstructionSurfaceArea(int Number, int X, int Y, int Width, int Height, int State);
//void PartsEngine_GetConstructionSurfaceArea(int Number, int *X, int *Y, int *Width, int *Height, int State);
//int PartsEngine_Parts_GetPartsConstructionProcessCount(int Number, int State);
//void PartsEngine_AddPartsConstructionProcess(struct page **ArrayInt, struct page **ArrayFloat, struct page **ArrayString);
//void PartsEngine_GetPartsConstructionProcess(struct page **ArrayInt, struct page **ArrayFloat, struct page **ArrayString);
//bool PartsEngine_Parts_CreateParts3DLayerPluginID(int Number, int State);
//int PartsEngine_Parts_GetParts3DLayerPluginID(int Number, int State);
//bool PartsEngine_Parts_ReleaseParts3DLayerPluginID(int Number, int State);
//bool PartsEngine_CreatePartsMovie(int Number, struct string *pIFileName, int SoundID, int SoundGroup, int Red, int Green, int Blue, int State);
//bool PartsEngine_ReleasePartsMovie(int Number, int State);
//bool PartsEngine_PlayPartsMovie(int Number, int State);
//bool PartsEngine_IsEndPartsMovie(int Number, int State);
//void PartsEngine_Parts_PlaySound(int Number, int State);
//bool PartsEngine_Parts_IsCursorIn(int Number, int MouseX, int MouseY, int State);
//void PartsEngine_ClearBackScene(void);
//void PartsEngine_SetFontColorForBackScene(int PartsNumber, int Red, int Green, int Blue, int State);
//void PartsEngine_SetMulColorForBackScene(int PartsNumber, int Red, int Green, int Blue);
//void PartsEngine_SetAlphaForBackScene(int PartsNumber, int Alpha);
//void PartsEngine_SetShowForBackScene(int PartsNumber, bool Show);
//bool PartsEngine_Save(struct page **SaveDataBuffer);
//bool PartsEngine_SaveBackScene(struct page **SaveDataBuffer);
//bool PartsEngine_Load(struct page **SaveDataBuffer);
//bool PartsEngine_LoadBackScene(struct page **SaveDataBuffer);
//bool PartsEngine_SaveParts(int Number, struct page **SaveDataBuffer);
//bool PartsEngine_LoadParts(int Number, struct page **SaveDataBuffer);

HLL_LIBRARY(PartsEngine,
	    HLL_TODO_EXPORT(Release, PartsEngine_Release),
	    HLL_TODO_EXPORT(ReleaseAllWithoutSystem, PartsEngine_ReleaseAllWithoutSystem),
	    HLL_TODO_EXPORT(GetFreeNumber, PartsEngine_GetFreeNumber),
	    HLL_TODO_EXPORT(IsExist, PartsEngine_IsExist),
	    HLL_TODO_EXPORT(AddController, PartsEngine_AddController),
	    HLL_TODO_EXPORT(RemoveController, PartsEngine_RemoveController),
	    HLL_TODO_EXPORT(SetActiveController, PartsEngine_SetActiveController),
	    HLL_TODO_EXPORT(GetActiveController, PartsEngine_GetActiveController),
	    HLL_TODO_EXPORT(GetControllerIndex, PartsEngine_GetControllerIndex),
	    HLL_TODO_EXPORT(GetControllerID, PartsEngine_GetControllerID),
	    HLL_TODO_EXPORT(GetControllerLength, PartsEngine_GetControllerLength),
	    HLL_TODO_EXPORT(GetSystemOverlayController, PartsEngine_GetSystemOverlayController),
	    HLL_TODO_EXPORT(UpdateComponent, PartsEngine_UpdateComponent),
	    HLL_TODO_EXPORT(BeginInput, PartsEngine_BeginInput),
	    HLL_TODO_EXPORT(EndInput, PartsEngine_EndInput),
	    HLL_TODO_EXPORT(GetActiveParts, PartsEngine_GetActiveParts),
	    HLL_TODO_EXPORT(BeginMotion, PartsEngine_BeginMotion),
	    HLL_TODO_EXPORT(EndMotion, PartsEngine_EndMotion),
	    HLL_TODO_EXPORT(IsMotion, PartsEngine_IsMotion),
	    HLL_TODO_EXPORT(SeekEndMotion, PartsEngine_SeekEndMotion),
	    HLL_TODO_EXPORT(UpdateMotionTime, PartsEngine_UpdateMotionTime),
	    HLL_TODO_EXPORT(PauseMotion, PartsEngine_PauseMotion),
	    HLL_TODO_EXPORT(SaveThumbnail, PartsEngine_SaveThumbnail),
	    HLL_TODO_EXPORT(SetClickMissSoundName, PartsEngine_SetClickMissSoundName),
	    HLL_TODO_EXPORT(GetClickMissSoundName, PartsEngine_GetClickMissSoundName),
	    HLL_TODO_EXPORT(GetClickNumber, PartsEngine_GetClickNumber),
	    HLL_TODO_EXPORT(StopSoundWithoutSystemSound, PartsEngine_StopSoundWithoutSystemSound),
	    HLL_TODO_EXPORT(AddWholeMotionVibrationSize, PartsEngine_AddWholeMotionVibrationSize),
	    HLL_TODO_EXPORT(AddMotionSound, PartsEngine_AddMotionSound),
	    HLL_TODO_EXPORT(IsExistActivity, PartsEngine_IsExistActivity),
	    HLL_TODO_EXPORT(CreateActivity, PartsEngine_CreateActivity),
	    HLL_TODO_EXPORT(ReleaseActivity, PartsEngine_ReleaseActivity),
	    HLL_TODO_EXPORT(SaveActivityEXText, PartsEngine_SaveActivityEXText),
	    HLL_TODO_EXPORT(LoadActivityEXText, PartsEngine_LoadActivityEXText),
	    HLL_TODO_EXPORT(ReadActivityFile, PartsEngine_ReadActivityFile),
	    HLL_TODO_EXPORT(WriteActivityFile, PartsEngine_WriteActivityFile),
	    HLL_TODO_EXPORT(IsExistActivityFile, PartsEngine_IsExistActivityFile),
	    HLL_TODO_EXPORT(AddActivityParts, PartsEngine_AddActivityParts),
	    HLL_TODO_EXPORT(RemoveActivityParts, PartsEngine_RemoveActivityParts),
	    HLL_TODO_EXPORT(RemoveAllActivityParts, PartsEngine_RemoveAllActivityParts),
	    HLL_TODO_EXPORT(NumofActivityParts, PartsEngine_NumofActivityParts),
	    HLL_TODO_EXPORT(GetActivityParts, PartsEngine_GetActivityParts),
	    HLL_TODO_EXPORT(IsExistActivityPartsByName, PartsEngine_IsExistActivityPartsByName),
	    HLL_TODO_EXPORT(IsExistActivityPartsByNumber, PartsEngine_IsExistActivityPartsByNumber),
	    HLL_TODO_EXPORT(GetActivityPartsNumber, PartsEngine_GetActivityPartsNumber),
	    HLL_TODO_EXPORT(GetActivityPartsName, PartsEngine_GetActivityPartsName),
	    HLL_TODO_EXPORT(AddActivityCloseParts, PartsEngine_AddActivityCloseParts),
	    HLL_TODO_EXPORT(RemoveActivityCloseParts, PartsEngine_RemoveActivityCloseParts),
	    HLL_TODO_EXPORT(RemoveAllActivityCloseParts, PartsEngine_RemoveAllActivityCloseParts),
	    HLL_TODO_EXPORT(IsExistActivityCloseParts, PartsEngine_IsExistActivityCloseParts),
	    HLL_TODO_EXPORT(SetActivityIntentData, PartsEngine_SetActivityIntentData),
	    HLL_TODO_EXPORT(AddActivityIntentDataDestination, PartsEngine_AddActivityIntentDataDestination),
	    HLL_TODO_EXPORT(IsExistActivityIntentData, PartsEngine_IsExistActivityIntentData),
	    HLL_TODO_EXPORT(NumofActivityIntentDataDestination, PartsEngine_NumofActivityIntentDataDestination),
	    HLL_TODO_EXPORT(GetActivityIntentDataDestination, PartsEngine_GetActivityIntentDataDestination),
	    HLL_TODO_EXPORT(GetActivityIntentDataType, PartsEngine_GetActivityIntentDataType),
	    HLL_TODO_EXPORT(SetActivityEndKey, PartsEngine_SetActivityEndKey),
	    HLL_TODO_EXPORT(EraseActivityEndKey, PartsEngine_EraseActivityEndKey),
	    HLL_TODO_EXPORT(IsExistActivityEndKey, PartsEngine_IsExistActivityEndKey),
	    HLL_TODO_EXPORT(NumofActivityEndKey, PartsEngine_NumofActivityEndKey),
	    HLL_TODO_EXPORT(GetActivityEndKey, PartsEngine_GetActivityEndKey),
	    HLL_TODO_EXPORT(ReleaseMessage, PartsEngine_ReleaseMessage),
	    HLL_TODO_EXPORT(PopMessage, PartsEngine_PopMessage),
	    HLL_TODO_EXPORT(GetMessagePartsNumber, PartsEngine_GetMessagePartsNumber),
	    HLL_TODO_EXPORT(GetMessageDelegateIndex, PartsEngine_GetMessageDelegateIndex),
	    HLL_TODO_EXPORT(GetDelegateIndex, PartsEngine_GetDelegateIndex),
	    HLL_TODO_EXPORT(GetMessageType, PartsEngine_GetMessageType),
	    HLL_TODO_EXPORT(GetMessageVariableCount, PartsEngine_GetMessageVariableCount),
	    HLL_TODO_EXPORT(GetMessageVariableType, PartsEngine_GetMessageVariableType),
	    HLL_TODO_EXPORT(GetMessageVariableInt, PartsEngine_GetMessageVariableInt),
	    HLL_TODO_EXPORT(GetMessageVariableFloat, PartsEngine_GetMessageVariableFloat),
	    HLL_TODO_EXPORT(GetMessageVariableBool, PartsEngine_GetMessageVariableBool),
	    HLL_TODO_EXPORT(GetMessageVariableString, PartsEngine_GetMessageVariableString),
	    HLL_TODO_EXPORT(SetDelegateIndex, PartsEngine_SetDelegateIndex),
	    HLL_TODO_EXPORT(SetFocus, PartsEngine_SetFocus),
	    HLL_TODO_EXPORT(IsFocus, PartsEngine_IsFocus),
	    HLL_TODO_EXPORT(SetWantSaveBackScene, PartsEngine_SetWantSaveBackScene),
	    HLL_TODO_EXPORT(IsWantSaveBackScene, PartsEngine_IsWantSaveBackScene),
	    HLL_TODO_EXPORT(SetComponentType, PartsEngine_SetComponentType),
	    HLL_TODO_EXPORT(GetComponentType, PartsEngine_GetComponentType),
	    HLL_TODO_EXPORT(SetComponentPos, PartsEngine_SetComponentPos),
	    HLL_TODO_EXPORT(SetComponentPosZ, PartsEngine_SetComponentPosZ),
	    HLL_TODO_EXPORT(GetComponentPosX, PartsEngine_GetComponentPosX),
	    HLL_TODO_EXPORT(GetComponentPosY, PartsEngine_GetComponentPosY),
	    HLL_TODO_EXPORT(GetComponentPosZ, PartsEngine_GetComponentPosZ),
	    HLL_TODO_EXPORT(GetComponentAbsolutePosX, PartsEngine_GetComponentAbsolutePosX),
	    HLL_TODO_EXPORT(GetComponentAbsolutePosY, PartsEngine_GetComponentAbsolutePosY),
	    HLL_TODO_EXPORT(GetComponentAbsolutePosZ, PartsEngine_GetComponentAbsolutePosZ),
	    HLL_TODO_EXPORT(GetComponentAbsoluteMaxPosZ, PartsEngine_GetComponentAbsoluteMaxPosZ),
	    HLL_TODO_EXPORT(GetComponentAbsolutePos, PartsEngine_GetComponentAbsolutePos),
	    HLL_TODO_EXPORT(Parts_GetPartsUpperLeftPosX, PartsEngine_Parts_GetPartsUpperLeftPosX),
	    HLL_TODO_EXPORT(Parts_GetPartsUpperLeftPosY, PartsEngine_Parts_GetPartsUpperLeftPosY),
	    HLL_TODO_EXPORT(Parts_SetInputState, PartsEngine_Parts_SetInputState),
	    HLL_TODO_EXPORT(Parts_GetInputState, PartsEngine_Parts_GetInputState),
	    HLL_TODO_EXPORT(SetLockInputState, PartsEngine_SetLockInputState),
	    HLL_TODO_EXPORT(IsLockInputState, PartsEngine_IsLockInputState),
	    HLL_TODO_EXPORT(SetComponentOriginPosMode, PartsEngine_SetComponentOriginPosMode),
	    HLL_TODO_EXPORT(GetComponentOriginPosMode, PartsEngine_GetComponentOriginPosMode),
	    HLL_TODO_EXPORT(GetComponentWidth, PartsEngine_GetComponentWidth),
	    HLL_TODO_EXPORT(GetComponentHeight, PartsEngine_GetComponentHeight),
	    HLL_TODO_EXPORT(Parts_GetPartsWidth, PartsEngine_Parts_GetPartsWidth),
	    HLL_TODO_EXPORT(Parts_GetPartsHeight, PartsEngine_Parts_GetPartsHeight),
	    HLL_TODO_EXPORT(SetComponentShow, PartsEngine_SetComponentShow),
	    HLL_TODO_EXPORT(IsComponentShow, PartsEngine_IsComponentShow),
	    HLL_TODO_EXPORT(SetComponentMessageWindowShowLink, PartsEngine_SetComponentMessageWindowShowLink),
	    HLL_TODO_EXPORT(IsComponentMessageWindowShowLink, PartsEngine_IsComponentMessageWindowShowLink),
	    HLL_TODO_EXPORT(SetComponentAlpha, PartsEngine_SetComponentAlpha),
	    HLL_TODO_EXPORT(GetComponentAlpha, PartsEngine_GetComponentAlpha),
	    HLL_TODO_EXPORT(SetComponentAddColor, PartsEngine_SetComponentAddColor),
	    HLL_TODO_EXPORT(GetComponentAddColorR, PartsEngine_GetComponentAddColorR),
	    HLL_TODO_EXPORT(GetComponentAddColorG, PartsEngine_GetComponentAddColorG),
	    HLL_TODO_EXPORT(GetComponentAddColorB, PartsEngine_GetComponentAddColorB),
	    HLL_TODO_EXPORT(SetComponentMulColor, PartsEngine_SetComponentMulColor),
	    HLL_TODO_EXPORT(GetComponentMulColorR, PartsEngine_GetComponentMulColorR),
	    HLL_TODO_EXPORT(GetComponentMulColorG, PartsEngine_GetComponentMulColorG),
	    HLL_TODO_EXPORT(GetComponentMulColorB, PartsEngine_GetComponentMulColorB),
	    HLL_TODO_EXPORT(SetComponentDrawFilter, PartsEngine_SetComponentDrawFilter),
	    HLL_TODO_EXPORT(GetComponentDrawFilter, PartsEngine_GetComponentDrawFilter),
	    HLL_TODO_EXPORT(SetComponentMagX, PartsEngine_SetComponentMagX),
	    HLL_TODO_EXPORT(SetComponentMagY, PartsEngine_SetComponentMagY),
	    HLL_TODO_EXPORT(GetComponentMagX, PartsEngine_GetComponentMagX),
	    HLL_TODO_EXPORT(GetComponentMagY, PartsEngine_GetComponentMagY),
	    HLL_TODO_EXPORT(SetComponentRotateX, PartsEngine_SetComponentRotateX),
	    HLL_TODO_EXPORT(SetComponentRotateY, PartsEngine_SetComponentRotateY),
	    HLL_TODO_EXPORT(SetComponentRotateZ, PartsEngine_SetComponentRotateZ),
	    HLL_TODO_EXPORT(GetComponentRotateX, PartsEngine_GetComponentRotateX),
	    HLL_TODO_EXPORT(GetComponentRotateY, PartsEngine_GetComponentRotateY),
	    HLL_TODO_EXPORT(GetComponentRotateZ, PartsEngine_GetComponentRotateZ),
	    HLL_TODO_EXPORT(SetComponentMargin, PartsEngine_SetComponentMargin),
	    HLL_TODO_EXPORT(GetComponentMarginTop, PartsEngine_GetComponentMarginTop),
	    HLL_TODO_EXPORT(GetComponentMarginBottom, PartsEngine_GetComponentMarginBottom),
	    HLL_TODO_EXPORT(GetComponentMarginLeft, PartsEngine_GetComponentMarginLeft),
	    HLL_TODO_EXPORT(GetComponentMarginRight, PartsEngine_GetComponentMarginRight),
	    HLL_TODO_EXPORT(SetComponentAlphaClipper, PartsEngine_SetComponentAlphaClipper),
	    HLL_TODO_EXPORT(GetComponentAlphaClipper, PartsEngine_GetComponentAlphaClipper),
	    HLL_TODO_EXPORT(Parts_SetOnCursorShowLinkPartsNumber, PartsEngine_Parts_SetOnCursorShowLinkPartsNumber),
	    HLL_TODO_EXPORT(Parts_GetOnCursorShowLinkPartsNumber, PartsEngine_Parts_GetOnCursorShowLinkPartsNumber),
	    HLL_TODO_EXPORT(SetComponentScrollPosXLinkNumber, PartsEngine_SetComponentScrollPosXLinkNumber),
	    HLL_TODO_EXPORT(SetComponentScrollPosYLinkNumber, PartsEngine_SetComponentScrollPosYLinkNumber),
	    HLL_TODO_EXPORT(GetComponentScrollPosXLinkNumber, PartsEngine_GetComponentScrollPosXLinkNumber),
	    HLL_TODO_EXPORT(GetComponentScrollPosYLinkNumber, PartsEngine_GetComponentScrollPosYLinkNumber),
	    HLL_TODO_EXPORT(SetComponentScrollAlphaLinkNumber, PartsEngine_SetComponentScrollAlphaLinkNumber),
	    HLL_TODO_EXPORT(GetComponentScrollAlphaLinkNumber, PartsEngine_GetComponentScrollAlphaLinkNumber),
	    HLL_TODO_EXPORT(SetComponentCheckBoxShowLinkNumber, PartsEngine_SetComponentCheckBoxShowLinkNumber),
	    HLL_TODO_EXPORT(GetComponentCheckBoxShowLinkNumber, PartsEngine_GetComponentCheckBoxShowLinkNumber),
	    HLL_TODO_EXPORT(SetComponentTextureFilterType, PartsEngine_SetComponentTextureFilterType),
	    HLL_TODO_EXPORT(GetComponentTextureFilterType, PartsEngine_GetComponentTextureFilterType),
	    HLL_TODO_EXPORT(SetComponentMipmap, PartsEngine_SetComponentMipmap),
	    HLL_TODO_EXPORT(IsComponentMipmap, PartsEngine_IsComponentMipmap),
	    HLL_TODO_EXPORT(SetComponentSpeedupRateByMessageSkip, PartsEngine_SetComponentSpeedupRateByMessageSkip),
	    HLL_TODO_EXPORT(GetComponentSpeedupRateByMessageSkip, PartsEngine_GetComponentSpeedupRateByMessageSkip),
	    HLL_TODO_EXPORT(Parts_SetParentPartsNumber, PartsEngine_Parts_SetParentPartsNumber),
	    HLL_TODO_EXPORT(Parts_GetParentPartsNumber, PartsEngine_Parts_GetParentPartsNumber),
	    HLL_TODO_EXPORT(IsExistChild, PartsEngine_IsExistChild),
	    HLL_TODO_EXPORT(ClearChild, PartsEngine_ClearChild),
	    HLL_TODO_EXPORT(AddChild, PartsEngine_AddChild),
	    HLL_TODO_EXPORT(InsertChild, PartsEngine_InsertChild),
	    HLL_TODO_EXPORT(RemoveChild, PartsEngine_RemoveChild),
	    HLL_TODO_EXPORT(NumofChild, PartsEngine_NumofChild),
	    HLL_TODO_EXPORT(GetChildIndex, PartsEngine_GetChildIndex),
	    HLL_TODO_EXPORT(GetChild, PartsEngine_GetChild),
	    HLL_TODO_EXPORT(AddComponentMotionPos, PartsEngine_AddComponentMotionPos),
	    HLL_TODO_EXPORT(AddComponentMotionAlpha, PartsEngine_AddComponentMotionAlpha),
	    HLL_TODO_EXPORT(AddComponentMotionAddColor, PartsEngine_AddComponentMotionAddColor),
	    HLL_TODO_EXPORT(AddComponentMotionMulColor, PartsEngine_AddComponentMotionMulColor),
	    HLL_TODO_EXPORT(AddComponentMotionCG, PartsEngine_AddComponentMotionCG),
	    HLL_TODO_EXPORT(AddComponentMotionCGTermination, PartsEngine_AddComponentMotionCGTermination),
	    HLL_TODO_EXPORT(AddComponentMotionHGaugeRate, PartsEngine_AddComponentMotionHGaugeRate),
	    HLL_TODO_EXPORT(AddComponentMotionVGaugeRate, PartsEngine_AddComponentMotionVGaugeRate),
	    HLL_TODO_EXPORT(AddComponentMotionNumeralNumber, PartsEngine_AddComponentMotionNumeralNumber),
	    HLL_TODO_EXPORT(AddComponentMotionMagX, PartsEngine_AddComponentMotionMagX),
	    HLL_TODO_EXPORT(AddComponentMotionMagY, PartsEngine_AddComponentMotionMagY),
	    HLL_TODO_EXPORT(AddComponentMotionRotateX, PartsEngine_AddComponentMotionRotateX),
	    HLL_TODO_EXPORT(AddComponentMotionRotateY, PartsEngine_AddComponentMotionRotateY),
	    HLL_TODO_EXPORT(AddComponentMotionRotateZ, PartsEngine_AddComponentMotionRotateZ),
	    HLL_TODO_EXPORT(AddComponentMotionVibrationSize, PartsEngine_AddComponentMotionVibrationSize),
	    HLL_TODO_EXPORT(Parts_SetPassCursor, PartsEngine_Parts_SetPassCursor),
	    HLL_TODO_EXPORT(Parts_GetPartsPassCursor, PartsEngine_Parts_GetPartsPassCursor),
	    HLL_TODO_EXPORT(Parts_SetClickable, PartsEngine_Parts_SetClickable),
	    HLL_TODO_EXPORT(Parts_GetPartsClickable, PartsEngine_Parts_GetPartsClickable),
	    HLL_TODO_EXPORT(Parts_SetResetTimerByChangeInputStatus, PartsEngine_Parts_SetResetTimerByChangeInputStatus),
	    HLL_TODO_EXPORT(Parts_GetResetTimerByChangeInputStatus, PartsEngine_Parts_GetResetTimerByChangeInputStatus),
	    HLL_TODO_EXPORT(Parts_SetDrag, PartsEngine_Parts_SetDrag),
	    HLL_TODO_EXPORT(Parts_GetPartsDrag, PartsEngine_Parts_GetPartsDrag),
	    HLL_TODO_EXPORT(Parts_SetSoundName, PartsEngine_Parts_SetSoundName),
	    HLL_TODO_EXPORT(Parts_GetSoundName, PartsEngine_Parts_GetSoundName),
	    HLL_TODO_EXPORT(Parts_SetPartsPixelDecide, PartsEngine_Parts_SetPartsPixelDecide),
	    HLL_TODO_EXPORT(Parts_IsPartsPixelDecide, PartsEngine_Parts_IsPartsPixelDecide),
	    HLL_TODO_EXPORT(Parts_SetPosForRate, PartsEngine_Parts_SetPosForRate),
	    HLL_TODO_EXPORT(Parts_IsPosForRate, PartsEngine_Parts_IsPosForRate),
	    HLL_TODO_EXPORT(SuspendBuildView, PartsEngine_SuspendBuildView),
	    HLL_TODO_EXPORT(SuspendBuildViewAt, PartsEngine_SuspendBuildViewAt),
	    HLL_TODO_EXPORT(ResumeBuildView, PartsEngine_ResumeBuildView),
	    HLL_TODO_EXPORT(SetButtonSize, PartsEngine_SetButtonSize),
	    HLL_TODO_EXPORT(SetButtonEnable, PartsEngine_SetButtonEnable),
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
	    HLL_TODO_EXPORT(CheckBoxChecked, PartsEngine_CheckBoxChecked),
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
	    HLL_TODO_EXPORT(SetOpenTextBoxIME, PartsEngine_SetOpenTextBoxIME),
	    HLL_TODO_EXPORT(IsOpenTextBoxIME, PartsEngine_IsOpenTextBoxIME),
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
	    HLL_TODO_EXPORT(AddListBoxItem, PartsEngine_AddListBoxItem),
	    HLL_TODO_EXPORT(InsertListBoxItem, PartsEngine_InsertListBoxItem),
	    HLL_TODO_EXPORT(SetListBoxItem, PartsEngine_SetListBoxItem),
	    HLL_TODO_EXPORT(GetListBoxItemCount, PartsEngine_GetListBoxItemCount),
	    HLL_TODO_EXPORT(GetListBoxItem, PartsEngine_GetListBoxItem),
	    HLL_TODO_EXPORT(EraseListBoxItem, PartsEngine_EraseListBoxItem),
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
	    HLL_TODO_EXPORT(IsLayoutBoxReturn, PartsEngine_IsLayoutBoxReturn),
	    HLL_TODO_EXPORT(GetLayoutBoxReturnSize, PartsEngine_GetLayoutBoxReturnSize),
	    HLL_TODO_EXPORT(SetLayoutBoxReturnSizeForRate, PartsEngine_SetLayoutBoxReturnSizeForRate),
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
	    HLL_TODO_EXPORT(Parts_SetPartsCG, PartsEngine_Parts_SetPartsCG),
	    HLL_TODO_EXPORT(Parts_GetPartsCGName, PartsEngine_Parts_GetPartsCGName),
	    HLL_TODO_EXPORT(Parts_GetPartsCGDeform, PartsEngine_Parts_GetPartsCGDeform),
	    HLL_TODO_EXPORT(Parts_SetPartsCGSurfaceArea, PartsEngine_Parts_SetPartsCGSurfaceArea),
	    HLL_TODO_EXPORT(GetPartsCGSurfaceArea, PartsEngine_GetPartsCGSurfaceArea),
	    HLL_TODO_EXPORT(Parts_SetLoopCG, PartsEngine_Parts_SetLoopCG),
	    HLL_TODO_EXPORT(Parts_SetLoopCGSurfaceArea, PartsEngine_Parts_SetLoopCGSurfaceArea),
	    HLL_TODO_EXPORT(GetLoopCGSurfaceArea, PartsEngine_GetLoopCGSurfaceArea),
	    HLL_TODO_EXPORT(GetLoopCGCGName, PartsEngine_GetLoopCGCGName),
	    HLL_TODO_EXPORT(GetLoopCGStartNo, PartsEngine_GetLoopCGStartNo),
	    HLL_TODO_EXPORT(GetLoopCGNumofCG, PartsEngine_GetLoopCGNumofCG),
	    HLL_TODO_EXPORT(Parts_GetLoopCGTimeParCG, PartsEngine_Parts_GetLoopCGTimeParCG),
	    HLL_TODO_EXPORT(Parts_SetText, PartsEngine_Parts_SetText),
	    HLL_TODO_EXPORT(GetTextPartsText, PartsEngine_GetTextPartsText),
	    HLL_TODO_EXPORT(Parts_AddPartsText, PartsEngine_Parts_AddPartsText),
	    HLL_TODO_EXPORT(Parts_DeletePartsTopTextLine, PartsEngine_Parts_DeletePartsTopTextLine),
	    HLL_TODO_EXPORT(Parts_SetPartsTextSurfaceArea, PartsEngine_Parts_SetPartsTextSurfaceArea),
	    HLL_TODO_EXPORT(GetPartsTextSurfaceArea, PartsEngine_GetPartsTextSurfaceArea),
	    HLL_TODO_EXPORT(Parts_SetPartsTextHighlight, PartsEngine_Parts_SetPartsTextHighlight),
	    HLL_TODO_EXPORT(Parts_AddPartsTextHighlight, PartsEngine_Parts_AddPartsTextHighlight),
	    HLL_TODO_EXPORT(Parts_ClearPartsTextHighlight, PartsEngine_Parts_ClearPartsTextHighlight),
	    HLL_TODO_EXPORT(Parts_SetPartsTextCountReturn, PartsEngine_Parts_SetPartsTextCountReturn),
	    HLL_TODO_EXPORT(Parts_GetPartsTextCountReturn, PartsEngine_Parts_GetPartsTextCountReturn),
	    HLL_TODO_EXPORT(Parts_SetTextShowTime, PartsEngine_Parts_SetTextShowTime),
	    HLL_TODO_EXPORT(Parts_GetTextShowTime, PartsEngine_Parts_GetTextShowTime),
	    HLL_TODO_EXPORT(Parts_SetTextPos, PartsEngine_Parts_SetTextPos),
	    HLL_TODO_EXPORT(Parts_GetTextPos, PartsEngine_Parts_GetTextPos),
	    HLL_TODO_EXPORT(Parts_SetTextEnableTag, PartsEngine_Parts_SetTextEnableTag),
	    HLL_TODO_EXPORT(Parts_IsTextEnableTag, PartsEngine_Parts_IsTextEnableTag),
	    HLL_TODO_EXPORT(Parts_SetFont, PartsEngine_Parts_SetFont),
	    HLL_TODO_EXPORT(GetPartsTextFontProperty, PartsEngine_GetPartsTextFontProperty),
	    HLL_TODO_EXPORT(Parts_SetPartsFontType, PartsEngine_Parts_SetPartsFontType),
	    HLL_TODO_EXPORT(Parts_SetPartsFontSize, PartsEngine_Parts_SetPartsFontSize),
	    HLL_TODO_EXPORT(Parts_SetPartsFontColor, PartsEngine_Parts_SetPartsFontColor),
	    HLL_TODO_EXPORT(Parts_SetPartsFontBoldWeight, PartsEngine_Parts_SetPartsFontBoldWeight),
	    HLL_TODO_EXPORT(Parts_SetPartsFontEdgeColor, PartsEngine_Parts_SetPartsFontEdgeColor),
	    HLL_TODO_EXPORT(Parts_SetPartsFontEdgeWeight, PartsEngine_Parts_SetPartsFontEdgeWeight),
	    HLL_TODO_EXPORT(Parts_SetTextCharSpace, PartsEngine_Parts_SetTextCharSpace),
	    HLL_TODO_EXPORT(Parts_SetTextLineSpace, PartsEngine_Parts_SetTextLineSpace),
	    HLL_TODO_EXPORT(Parts_GetTextCharSpace, PartsEngine_Parts_GetTextCharSpace),
	    HLL_TODO_EXPORT(Parts_GetTextLineSpace, PartsEngine_Parts_GetTextLineSpace),
	    HLL_TODO_EXPORT(Parts_SetRubyFont, PartsEngine_Parts_SetRubyFont),
	    HLL_TODO_EXPORT(Parts_GetRubyFont, PartsEngine_Parts_GetRubyFont),
	    HLL_TODO_EXPORT(Parts_SetRubyCharSpace, PartsEngine_Parts_SetRubyCharSpace),
	    HLL_TODO_EXPORT(Parts_GetRubyCharSpace, PartsEngine_Parts_GetRubyCharSpace),
	    HLL_TODO_EXPORT(Parts_SetHGaugeCG, PartsEngine_Parts_SetHGaugeCG),
	    HLL_TODO_EXPORT(Parts_GetHGaugeCG, PartsEngine_Parts_GetHGaugeCG),
	    HLL_TODO_EXPORT(Parts_SetHGaugeRate, PartsEngine_Parts_SetHGaugeRate),
	    HLL_TODO_EXPORT(Parts_GetHGaugeNumerator, PartsEngine_Parts_GetHGaugeNumerator),
	    HLL_TODO_EXPORT(Parts_GetHGaugeDenominator, PartsEngine_Parts_GetHGaugeDenominator),
	    HLL_TODO_EXPORT(Parts_SetHGaugeSurfaceArea, PartsEngine_Parts_SetHGaugeSurfaceArea),
	    HLL_TODO_EXPORT(GetHGaugeSurfaceArea, PartsEngine_GetHGaugeSurfaceArea),
	    HLL_TODO_EXPORT(Parts_SetVGaugeCG, PartsEngine_Parts_SetVGaugeCG),
	    HLL_TODO_EXPORT(Parts_GetVGaugeCG, PartsEngine_Parts_GetVGaugeCG),
	    HLL_TODO_EXPORT(Parts_SetVGaugeRate, PartsEngine_Parts_SetVGaugeRate),
	    HLL_TODO_EXPORT(Parts_GetVGaugeNumerator, PartsEngine_Parts_GetVGaugeNumerator),
	    HLL_TODO_EXPORT(Parts_GetVGaugeDenominator, PartsEngine_Parts_GetVGaugeDenominator),
	    HLL_TODO_EXPORT(Parts_SetVGaugeSurfaceArea, PartsEngine_Parts_SetVGaugeSurfaceArea),
	    HLL_TODO_EXPORT(GetVGaugeSurfaceArea, PartsEngine_GetVGaugeSurfaceArea),
	    HLL_TODO_EXPORT(Parts_SetNumeralCG, PartsEngine_Parts_SetNumeralCG),
	    HLL_TODO_EXPORT(Parts_GetNumeralCGName, PartsEngine_Parts_GetNumeralCGName),
	    HLL_TODO_EXPORT(Parts_SetNumeralLinkedCGNumberWidthWidthList, PartsEngine_Parts_SetNumeralLinkedCGNumberWidthWidthList),
	    HLL_TODO_EXPORT(GetNumeralCGNumberWidthList, PartsEngine_GetNumeralCGNumberWidthList),
	    HLL_TODO_EXPORT(SetNumeralFont, PartsEngine_SetNumeralFont),
	    HLL_TODO_EXPORT(GetNumeralFont, PartsEngine_GetNumeralFont),
	    HLL_TODO_EXPORT(SetNumeralFullPitch, PartsEngine_SetNumeralFullPitch),
	    HLL_TODO_EXPORT(IsNumerarlFullPitch, PartsEngine_IsNumerarlFullPitch),
	    HLL_TODO_EXPORT(Parts_SetNumeralNumber, PartsEngine_Parts_SetNumeralNumber),
	    HLL_TODO_EXPORT(Parts_GetNumeralNumber, PartsEngine_Parts_GetNumeralNumber),
	    HLL_TODO_EXPORT(Parts_SetNumeralShowComma, PartsEngine_Parts_SetNumeralShowComma),
	    HLL_TODO_EXPORT(Parts_IsNumeralShowComma, PartsEngine_Parts_IsNumeralShowComma),
	    HLL_TODO_EXPORT(Parts_SetNumeralSpace, PartsEngine_Parts_SetNumeralSpace),
	    HLL_TODO_EXPORT(Parts_GetNumeralSpace, PartsEngine_Parts_GetNumeralSpace),
	    HLL_TODO_EXPORT(Parts_SetNumeralLength, PartsEngine_Parts_SetNumeralLength),
	    HLL_TODO_EXPORT(GetNumeralLength, PartsEngine_GetNumeralLength),
	    HLL_TODO_EXPORT(Parts_SetNumeralSurfaceArea, PartsEngine_Parts_SetNumeralSurfaceArea),
	    HLL_TODO_EXPORT(GetNumeralSurfaceArea, PartsEngine_GetNumeralSurfaceArea),
	    HLL_TODO_EXPORT(SetNumeralShowType, PartsEngine_SetNumeralShowType),
	    HLL_TODO_EXPORT(Parts_GetNumeralCGType, PartsEngine_Parts_GetNumeralCGType),
	    HLL_TODO_EXPORT(SetNumeralShowPadding, PartsEngine_SetNumeralShowPadding),
	    HLL_TODO_EXPORT(IsNumeralShowPadding, PartsEngine_IsNumeralShowPadding),
	    HLL_TODO_EXPORT(Parts_SetPartsRectangleDetectionSize, PartsEngine_Parts_SetPartsRectangleDetectionSize),
	    HLL_TODO_EXPORT(SetRectangleDetectionPoint, PartsEngine_SetRectangleDetectionPoint),
	    HLL_TODO_EXPORT(GetRectangleDetectionPoint, PartsEngine_GetRectangleDetectionPoint),
	    HLL_TODO_EXPORT(Parts_SetPartsRectangleDetectionSurfaceArea, PartsEngine_Parts_SetPartsRectangleDetectionSurfaceArea),
	    HLL_TODO_EXPORT(GetRectangleDetectionSurfaceArea, PartsEngine_GetRectangleDetectionSurfaceArea),
	    HLL_TODO_EXPORT(Parts_SetPartsCGDetectionSize, PartsEngine_Parts_SetPartsCGDetectionSize),
	    HLL_TODO_EXPORT(Parts_GetPartsCGDetectionCGName, PartsEngine_Parts_GetPartsCGDetectionCGName),
	    HLL_TODO_EXPORT(Parts_SetPartsCGDetectionSurfaceArea, PartsEngine_Parts_SetPartsCGDetectionSurfaceArea),
	    HLL_TODO_EXPORT(GetCGDetectionSurfaceArea, PartsEngine_GetCGDetectionSurfaceArea),
	    HLL_TODO_EXPORT(Parts_SetPartsFlat, PartsEngine_Parts_SetPartsFlat),
	    HLL_TODO_EXPORT(Parts_SetPartsFlatAndStop, PartsEngine_Parts_SetPartsFlatAndStop),
	    HLL_TODO_EXPORT(Parts_GetPartsFlatName, PartsEngine_Parts_GetPartsFlatName),
	    HLL_TODO_EXPORT(Parts_StopPartsFlat, PartsEngine_Parts_StopPartsFlat),
	    HLL_TODO_EXPORT(Parts_StartPartsFlat, PartsEngine_Parts_StartPartsFlat),
	    HLL_TODO_EXPORT(Parts_IsPartsFlatEnd, PartsEngine_Parts_IsPartsFlatEnd),
	    HLL_TODO_EXPORT(Parts_IsPartsFlatStop, PartsEngine_Parts_IsPartsFlatStop),
	    HLL_TODO_EXPORT(Parts_GetPartsFlatCurrentFrameNumber, PartsEngine_Parts_GetPartsFlatCurrentFrameNumber),
	    HLL_TODO_EXPORT(Parts_BackPartsFlatBeginFrame, PartsEngine_Parts_BackPartsFlatBeginFrame),
	    HLL_TODO_EXPORT(Parts_StepPartsFlatFinalFrame, PartsEngine_Parts_StepPartsFlatFinalFrame),
	    HLL_TODO_EXPORT(Parts_GoFramePartsFlat, PartsEngine_Parts_GoFramePartsFlat),
	    HLL_TODO_EXPORT(Parts_GetPartsFlatEndFrame, PartsEngine_Parts_GetPartsFlatEndFrame),
	    HLL_TODO_EXPORT(Parts_JumpFlatLabel, PartsEngine_Parts_JumpFlatLabel),
	    HLL_TODO_EXPORT(Parts_SetPartsFlatSurfaceArea, PartsEngine_Parts_SetPartsFlatSurfaceArea),
	    HLL_TODO_EXPORT(GetFlatSurfaceArea, PartsEngine_GetFlatSurfaceArea),
	    HLL_TODO_EXPORT(NumofFlatCG, PartsEngine_NumofFlatCG),
	    HLL_TODO_EXPORT(GetFlatCGName, PartsEngine_GetFlatCGName),
	    HLL_TODO_EXPORT(Parts_ChangeFlatCG, PartsEngine_Parts_ChangeFlatCG),
	    HLL_TODO_EXPORT(GetProxyFlatCGName, PartsEngine_GetProxyFlatCGName),
	    HLL_TODO_EXPORT(ReturnChangeFlatCG, PartsEngine_ReturnChangeFlatCG),
	    HLL_TODO_EXPORT(ClearChangeFlatCG, PartsEngine_ClearChangeFlatCG),
	    HLL_TODO_EXPORT(NumofFlatSound, PartsEngine_NumofFlatSound),
	    HLL_TODO_EXPORT(GetFlatSoundName, PartsEngine_GetFlatSoundName),
	    HLL_TODO_EXPORT(Parts_ChangeFlatSound, PartsEngine_Parts_ChangeFlatSound),
	    HLL_TODO_EXPORT(GetProxyFlatSound, PartsEngine_GetProxyFlatSound),
	    HLL_TODO_EXPORT(ReturnChangeFlatSound, PartsEngine_ReturnChangeFlatSound),
	    HLL_TODO_EXPORT(ClearChangeFlatSound, PartsEngine_ClearChangeFlatSound),
	    HLL_TODO_EXPORT(SetFlatFPSRate, PartsEngine_SetFlatFPSRate),
	    HLL_TODO_EXPORT(GetFlatFPSRate, PartsEngine_GetFlatFPSRate),
	    HLL_TODO_EXPORT(GetFlatFPS, PartsEngine_GetFlatFPS),
	    HLL_TODO_EXPORT(Parts_GetPartsFlatDataInfo, PartsEngine_Parts_GetPartsFlatDataInfo),
	    HLL_TODO_EXPORT(Parts_ExistsFlatFile, PartsEngine_Parts_ExistsFlatFile),
	    HLL_TODO_EXPORT(Parts_ClearPartsConstructionProcess, PartsEngine_Parts_ClearPartsConstructionProcess),
	    HLL_TODO_EXPORT(Parts_AddCreateToPartsConstructionProcess, PartsEngine_Parts_AddCreateToPartsConstructionProcess),
	    HLL_TODO_EXPORT(Parts_AddCreatePixelOnlyToPartsConstructionProcess, PartsEngine_Parts_AddCreatePixelOnlyToPartsConstructionProcess),
	    HLL_TODO_EXPORT(Parts_AddCreateCGToProcess, PartsEngine_Parts_AddCreateCGToProcess),
	    HLL_TODO_EXPORT(Parts_AddFillToPartsConstructionProcess, PartsEngine_Parts_AddFillToPartsConstructionProcess),
	    HLL_TODO_EXPORT(Parts_AddFillAlphaColorToPartsConstructionProcess, PartsEngine_Parts_AddFillAlphaColorToPartsConstructionProcess),
	    HLL_TODO_EXPORT(Parts_AddFillAMapToPartsConstructionProcess, PartsEngine_Parts_AddFillAMapToPartsConstructionProcess),
	    HLL_TODO_EXPORT(Parts_AddFillWithAlphaToPartsConstructionProcess, PartsEngine_Parts_AddFillWithAlphaToPartsConstructionProcess),
	    HLL_TODO_EXPORT(Parts_AddFillGradationHorizonToPartsConstructionProcess, PartsEngine_Parts_AddFillGradationHorizonToPartsConstructionProcess),
	    HLL_TODO_EXPORT(Parts_AddDrawRectToPartsConstructionProcess, PartsEngine_Parts_AddDrawRectToPartsConstructionProcess),
	    HLL_TODO_EXPORT(Parts_AddDrawCutCGToPartsConstructionProcess, PartsEngine_Parts_AddDrawCutCGToPartsConstructionProcess),
	    HLL_TODO_EXPORT(Parts_AddCopyCutCGToPartsConstructionProcess, PartsEngine_Parts_AddCopyCutCGToPartsConstructionProcess),
	    HLL_TODO_EXPORT(Parts_AddGrayFilterToPartsConstructionProcess, PartsEngine_Parts_AddGrayFilterToPartsConstructionProcess),
	    HLL_TODO_EXPORT(Parts_AddAddFilterToPartsConstructionProcess, PartsEngine_Parts_AddAddFilterToPartsConstructionProcess),
	    HLL_TODO_EXPORT(Parts_AddMulFilterToPartsConstructionProcess, PartsEngine_Parts_AddMulFilterToPartsConstructionProcess),
	    HLL_TODO_EXPORT(Parts_AddDrawLineToPartsConstructionProcess, PartsEngine_Parts_AddDrawLineToPartsConstructionProcess),
	    HLL_TODO_EXPORT(Parts_BuildPartsConstructionProcess, PartsEngine_Parts_BuildPartsConstructionProcess),
	    HLL_TODO_EXPORT(Parts_AddDrawTextToPartsConstructionProcess, PartsEngine_Parts_AddDrawTextToPartsConstructionProcess),
	    HLL_TODO_EXPORT(Parts_AddCopyTextToPartsConstructionProcess, PartsEngine_Parts_AddCopyTextToPartsConstructionProcess),
	    HLL_TODO_EXPORT(Parts_SetPartsConstructionSurfaceArea, PartsEngine_Parts_SetPartsConstructionSurfaceArea),
	    HLL_TODO_EXPORT(GetConstructionSurfaceArea, PartsEngine_GetConstructionSurfaceArea),
	    HLL_TODO_EXPORT(Parts_GetPartsConstructionProcessCount, PartsEngine_Parts_GetPartsConstructionProcessCount),
	    HLL_TODO_EXPORT(AddPartsConstructionProcess, PartsEngine_AddPartsConstructionProcess),
	    HLL_TODO_EXPORT(GetPartsConstructionProcess, PartsEngine_GetPartsConstructionProcess),
	    HLL_TODO_EXPORT(Parts_CreateParts3DLayerPluginID, PartsEngine_Parts_CreateParts3DLayerPluginID),
	    HLL_TODO_EXPORT(Parts_GetParts3DLayerPluginID, PartsEngine_Parts_GetParts3DLayerPluginID),
	    HLL_TODO_EXPORT(Parts_ReleaseParts3DLayerPluginID, PartsEngine_Parts_ReleaseParts3DLayerPluginID),
	    HLL_TODO_EXPORT(CreatePartsMovie, PartsEngine_CreatePartsMovie),
	    HLL_TODO_EXPORT(ReleasePartsMovie, PartsEngine_ReleasePartsMovie),
	    HLL_TODO_EXPORT(PlayPartsMovie, PartsEngine_PlayPartsMovie),
	    HLL_TODO_EXPORT(IsEndPartsMovie, PartsEngine_IsEndPartsMovie),
	    HLL_TODO_EXPORT(Parts_PlaySound, PartsEngine_Parts_PlaySound),
	    HLL_TODO_EXPORT(Parts_IsCursorIn, PartsEngine_Parts_IsCursorIn),
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
