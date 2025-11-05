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

//void GUIEngine_Release(int PartsNumber);
//void GUIEngine_ReleaseAll(struct page **EraseNumberList);
//void GUIEngine_ReleaseAllWithoutSystem(struct page **EraseNumberList);
//void GUIEngine_SetDelegateIndex(int PartsNumber, int DelegateIndex);
//int GUIEngine_GetFreeNumber(void);
//bool GUIEngine_IsExist(int PartsNumber);
//void GUIEngine_PushController(void);
//void GUIEngine_PopController(struct page **EraseNumberList);
//void GUIEngine_UpdateComponent(int PassedTime);
//void GUIEngine_BeginInput(void);
//void GUIEngine_EndInput(void);
//void GUIEngine_UpdateInputState(int PassedTime);
//void GUIEngine_UpdateParts(int PassedTime, bool IsSkip, bool MessageWindowShow);
//void GUIEngine_SetFocus(int PartsNumber);
//bool GUIEngine_IsFocus(int PartsNumber);
//void GUIEngine_StopSoundWithoutSystemSound(void);
//void GUIEngine_ReleaseMessage(void);
//void GUIEngine_PopMessage(void);
//int GUIEngine_GetMessagePartsNumber(void);
//int GUIEngine_GetMessageDelegateIndex(void);
//int GUIEngine_GetDelegateIndex(int PartsNumber);
//int GUIEngine_GetMessageType(void);
//int GUIEngine_GetMessageVariableCount(void);
//int GUIEngine_GetMessageVariableType(int MessageVariableIndex);
//int GUIEngine_GetMessageVariableInt(int MessageVariableIndex);
//float GUIEngine_GetMessageVariableFloat(int MessageVariableIndex);
//bool GUIEngine_GetMessageVariableBool(int MessageVariableIndex);
//void GUIEngine_GetMessageVariableString(int MessageVariableIndex, struct string **String);
//void GUIEngine_SetButtonPos(int PartsNumber, int PosX, int PosY);
//void GUIEngine_SetButtonZ(int PartsNumber, int PosZ);
//int GUIEngine_GetButtonX(int PartsNumber);
//int GUIEngine_GetButtonY(int PartsNumber);
//int GUIEngine_GetButtonZ(int PartsNumber);
//void GUIEngine_SetButtonWidth(int PartsNumber, int Width);
//void GUIEngine_SetButtonHeight(int PartsNumber, int Height);
//int GUIEngine_GetButtonWidth(int PartsNumber);
//int GUIEngine_GetButtonHeight(int PartsNumber);
//void GUIEngine_SetButtonShow(int PartsNumber, bool Show);
//bool GUIEngine_IsButtonShow(int PartsNumber);
//void GUIEngine_SetButtonDrag(int PartsNumber, bool Drag);
//bool GUIEngine_IsButtonDrag(int PartsNumber);
//void GUIEngine_SetButtonEnable(int PartsNumber, bool Enable);
//bool GUIEngine_IsButtonEnable(int PartsNumber);
//void GUIEngine_SetButtonPixelDecide(int PartsNumber, bool PixelDecide);
//bool GUIEngine_IsButtonPixelDecide(int PartsNumber);
//void GUIEngine_SetButtonR(int PartsNumber, int Red);
//void GUIEngine_SetButtonG(int PartsNumber, int Green);
//void GUIEngine_SetButtonB(int PartsNumber, int Blue);
//int GUIEngine_GetButtonR(int PartsNumber);
//int GUIEngine_GetButtonG(int PartsNumber);
//int GUIEngine_GetButtonB(int PartsNumber);
//void GUIEngine_SetButtonFontProperty(int PartsNumber, int Type, int Size, int R, int G, int B, float BoldWeight, int EdgeR, int EdgeG, int EdgeB, float EdgeWeight);
//void GUIEngine_GetButtonFontProperty(int PartsNumber, int *Type, int *Size, int *R, int *G, int *B, float *BoldWeight, int *EdgeR, int *EdgeG, int *EdgeB, float *EdgeWeight);
//void GUIEngine_SetButtonOnCursorSoundNumber(int PartsNumber, int SoundNumber);
//void GUIEngine_SetButtonClickSoundNumber(int PartsNumber, int SoundNumber);
//int GUIEngine_GetButtonOnCursorSoundNumber(int PartsNumber);
//int GUIEngine_GetButtonClickSoundNumber(int PartsNumber);
//void GUIEngine_SetButtonCGName(int PartsNumber, struct string *Name);
//void GUIEngine_GetButtonCGName(int PartsNumber, struct string **Name);
//void GUIEngine_SetButtonText(int PartsNumber, struct string *pIText);
//void GUIEngine_GetButtonText(int PartsNumber, struct string **pIText);
//void GUIEngine_SetCGBoxPos(int PartsNumber, int PosX, int PosY);
//void GUIEngine_SetCGBoxZ(int PartsNumber, int PosZ);
//int GUIEngine_GetCGBoxX(int PartsNumber);
//int GUIEngine_GetCGBoxY(int PartsNumber);
//int GUIEngine_GetCGBoxZ(int PartsNumber);
//void GUIEngine_SetCGBoxWidth(int PartsNumber, int Width);
//void GUIEngine_SetCGBoxHeight(int PartsNumber, int Height);
//int GUIEngine_GetCGBoxWidth(int PartsNumber);
//int GUIEngine_GetCGBoxHeight(int PartsNumber);
//void GUIEngine_SetCGBoxAlpha(int PartsNumber, int Alpha);
//int GUIEngine_GetCGBoxAlpha(int PartsNumber);
//void GUIEngine_SetCGBoxViewMode(int PartsNumber, int ViewMode);
//int GUIEngine_GetCGBoxViewMode(int PartsNumber);
//void GUIEngine_SetCGBoxShow(int PartsNumber, bool Show);
//bool GUIEngine_IsCGBoxShow(int PartsNumber);
//void GUIEngine_SetCGBoxDrag(int PartsNumber, bool Drag);
//bool GUIEngine_IsCGBoxDrag(int PartsNumber);
//void GUIEngine_SetCGBoxCGName(int PartsNumber, struct string *pIName);
//void GUIEngine_GetCGBoxCGName(int PartsNumber, struct string **pIName);
//void GUIEngine_SetCGBoxAddR(int PartsNumber, int Red);
//void GUIEngine_SetCGBoxAddG(int PartsNumber, int Green);
//void GUIEngine_SetCGBoxAddB(int PartsNumber, int Blue);
//int GUIEngine_GetCGBoxAddR(int PartsNumber);
//int GUIEngine_GetCGBoxAddG(int PartsNumber);
//int GUIEngine_GetCGBoxAddB(int PartsNumber);
//void GUIEngine_SetCGBoxMulR(int PartsNumber, int Red);
//void GUIEngine_SetCGBoxMulG(int PartsNumber, int Green);
//void GUIEngine_SetCGBoxMulB(int PartsNumber, int Blue);
//int GUIEngine_GetCGBoxMulR(int PartsNumber);
//int GUIEngine_GetCGBoxMulG(int PartsNumber);
//int GUIEngine_GetCGBoxMulB(int PartsNumber);
//void GUIEngine_SetCheckBoxPos(int PartsNumber, int PosX, int PosY);
//void GUIEngine_SetCheckBoxZ(int PartsNumber, int PosZ);
//int GUIEngine_GetCheckBoxX(int PartsNumber);
//int GUIEngine_GetCheckBoxY(int PartsNumber);
//int GUIEngine_GetCheckBoxZ(int PartsNumber);
//void GUIEngine_SetCheckBoxWidth(int PartsNumber, int Width);
//void GUIEngine_SetCheckBoxHeight(int PartsNumber, int Height);
//int GUIEngine_GetCheckBoxWidth(int PartsNumber);
//int GUIEngine_GetCheckBoxHeight(int PartsNumber);
//void GUIEngine_SetCheckBoxShow(int PartsNumber, bool Show);
//bool GUIEngine_IsCheckBoxShow(int PartsNumber);
//void GUIEngine_SetCheckBoxDrag(int PartsNumber, bool Drag);
//bool GUIEngine_IsCheckBoxDrag(int PartsNumber);
//void GUIEngine_CheckBoxChecked(int PartsNumber, bool Check);
//bool GUIEngine_IsCheckBoxChecked(int PartsNumber);
//void GUIEngine_SetCheckBoxR(int PartsNumber, int Red);
//void GUIEngine_SetCheckBoxG(int PartsNumber, int Green);
//void GUIEngine_SetCheckBoxB(int PartsNumber, int Blue);
//int GUIEngine_GetCheckBoxR(int PartsNumber);
//int GUIEngine_GetCheckBoxG(int PartsNumber);
//int GUIEngine_GetCheckBoxB(int PartsNumber);
//void GUIEngine_SetCheckBoxFontProperty(int PartsNumber, int Type, int Size, int R, int G, int B, float BoldWeight, int EdgeR, int EdgeG, int EdgeB, float EdgeWeight);
//void GUIEngine_GetCheckBoxFontProperty(int PartsNumber, int *Type, int *Size, int *R, int *G, int *B, float *BoldWeight, int *EdgeR, int *EdgeG, int *EdgeB, float *EdgeWeight);
//void GUIEngine_SetCheckBoxOnCursorSoundNumber(int PartsNumber, int SoundNumber);
//void GUIEngine_SetCheckBoxClickSoundNumber(int PartsNumber, int SoundNumber);
//int GUIEngine_GetCheckBoxOnCursorSoundNumber(int PartsNumber);
//int GUIEngine_GetCheckBoxClickSoundNumber(int PartsNumber);
//void GUIEngine_SetCheckBoxCGName(int PartsNumber, struct string *pIName);
//void GUIEngine_GetCheckBoxCGName(int PartsNumber, struct string **pIName);
//void GUIEngine_SetCheckBoxText(int PartsNumber, struct string *pIName);
//void GUIEngine_GetCheckBoxText(int PartsNumber, struct string **pIName);
//void GUIEngine_SetLabelPos(int PartsNumber, int PosX, int PosY);
//void GUIEngine_SetLabelZ(int PartsNumber, int PosZ);
//int GUIEngine_GetLabelX(int PartsNumber);
//int GUIEngine_GetLabelY(int PartsNumber);
//int GUIEngine_GetLabelZ(int PartsNumber);
//void GUIEngine_SetLabelWidth(int PartsNumber, int Width);
//void GUIEngine_SetLabelHeight(int PartsNumber, int Height);
//int GUIEngine_GetLabelWidth(int PartsNumber);
//int GUIEngine_GetLabelHeight(int PartsNumber);
//void GUIEngine_SetLabelAlpha(int PartsNumber, int Alpha);
//int GUIEngine_GetLabelAlpha(int PartsNumber);
//void GUIEngine_SetLabelShow(int PartsNumber, bool Show);
//bool GUIEngine_IsLabelShow(int PartsNumber);
//void GUIEngine_SetLabelDrag(int PartsNumber, bool Drag);
//bool GUIEngine_IsLabelDrag(int PartsNumber);
//void GUIEngine_SetLabelClip(int PartsNumber, bool Clip);
//bool GUIEngine_IsLabelClip(int PartsNumber);
//void GUIEngine_SetLabelText(int PartsNumber, struct string *pIText);
//void GUIEngine_GetLabelText(int PartsNumber, struct string **pIText);
//void GUIEngine_SetLabelFontProperty(int PartsNumber, int Type, int Size, int R, int G, int B, float BoldWeight, int EdgeR, int EdgeG, int EdgeB, float EdgeWeight);
//void GUIEngine_GetLabelFontProperty(int PartsNumber, int *Type, int *Size, int *R, int *G, int *B, float *BoldWeight, int *EdgeR, int *EdgeG, int *EdgeB, float *EdgeWeight);
//void GUIEngine_SetVScrollbarPos(int PartsNumber, int PosX, int PosY);
//void GUIEngine_SetVScrollbarZ(int PartsNumber, int PosZ);
//int GUIEngine_GetVScrollbarX(int PartsNumber);
//int GUIEngine_GetVScrollbarY(int PartsNumber);
//int GUIEngine_GetVScrollbarZ(int PartsNumber);
//void GUIEngine_SetVScrollbarShow(int PartsNumber, bool Show);
//bool GUIEngine_IsVScrollbarShow(int PartsNumber);
//void GUIEngine_SetVScrollbarOnCursorSoundNumber(int PartsNumber, int SoundNumber);
//void GUIEngine_SetVScrollbarClickSoundNumber(int PartsNumber, int SoundNumber);
//int GUIEngine_GetVScrollbarOnCursorSoundNumber(int PartsNumber);
//int GUIEngine_GetVScrollbarClickSoundNumber(int PartsNumber);
//void GUIEngine_SetVScrollbarWidth(int PartsNumber, int Width);
//void GUIEngine_SetVScrollbarHeight(int PartsNumber, int Height);
//void GUIEngine_SetVScrollbarUpHeight(int PartsNumber, int Height);
//void GUIEngine_SetVScrollbarDownHeight(int PartsNumber, int Height);
//int GUIEngine_GetVScrollbarWidth(int PartsNumber);
//int GUIEngine_GetVScrollbarHeight(int PartsNumber);
//int GUIEngine_GetVScrollbarUpHeight(int PartsNumber);
//int GUIEngine_GetVScrollbarDownHeight(int PartsNumber);
//void GUIEngine_SetVScrollbarTotalSize(int PartsNumber, int Size);
//void GUIEngine_SetVScrollbarViewSize(int PartsNumber, int Size);
//void GUIEngine_SetVScrollbarScrollPos(int PartsNumber, int Pos);
//void GUIEngine_SetVScrollbarMoveSizeByButton(int PartsNumber, int Size);
//int GUIEngine_GetVScrollbarTotalSize(int PartsNumber);
//int GUIEngine_GetVScrollbarViewSize(int PartsNumber);
//int GUIEngine_GetVScrollbarScrollPos(int PartsNumber);
//int GUIEngine_GetVScrollbarMoveSizeByButton(int PartsNumber);
//void GUIEngine_SetVScrollbarCGName(int PartsNumber, struct string *pIName);
//void GUIEngine_GetVScrollbarCGName(int PartsNumber, struct string **pIName);
//void GUIEngine_SetHScrollbarPos(int PartsNumber, int PosX, int PosY);
//void GUIEngine_SetHScrollbarZ(int PartsNumber, int PosZ);
//int GUIEngine_GetHScrollbarX(int PartsNumber);
//int GUIEngine_GetHScrollbarY(int PartsNumber);
//int GUIEngine_GetHScrollbarZ(int PartsNumber);
//void GUIEngine_SetHScrollbarShow(int PartsNumber, bool Show);
//bool GUIEngine_IsHScrollbarShow(int PartsNumber);
//void GUIEngine_SetHScrollbarOnCursorSoundNumber(int PartsNumber, int SoundNumber);
//void GUIEngine_SetHScrollbarClickSoundNumber(int PartsNumber, int SoundNumber);
//int GUIEngine_GetHScrollbarOnCursorSoundNumber(int PartsNumber);
//int GUIEngine_GetHScrollbarClickSoundNumber(int PartsNumber);
//void GUIEngine_SetHScrollbarWidth(int PartsNumber, int Width);
//void GUIEngine_SetHScrollbarHeight(int PartsNumber, int Height);
//void GUIEngine_SetHScrollbarLeftWidth(int PartsNumber, int Width);
//void GUIEngine_SetHScrollbarRightWidth(int PartsNumber, int Width);
//int GUIEngine_GetHScrollbarWidth(int PartsNumber);
//int GUIEngine_GetHScrollbarHeight(int PartsNumber);
//int GUIEngine_GetHScrollbarLeftWidth(int PartsNumber);
//int GUIEngine_GetHScrollbarRightWidth(int PartsNumber);
//void GUIEngine_SetHScrollbarTotalSize(int PartsNumber, int Size);
//void GUIEngine_SetHScrollbarViewSize(int PartsNumber, int Size);
//void GUIEngine_SetHScrollbarScrollPos(int PartsNumber, int Pos);
//void GUIEngine_SetHScrollbarMoveSizeByButton(int PartsNumber, int Size);
//int GUIEngine_GetHScrollbarTotalSize(int PartsNumber);
//int GUIEngine_GetHScrollbarViewSize(int PartsNumber);
//int GUIEngine_GetHScrollbarScrollPos(int PartsNumber);
//int GUIEngine_GetHScrollbarMoveSizeByButton(int PartsNumber);
//void GUIEngine_SetHScrollbarCGName(int PartsNumber, struct string *pIName);
//void GUIEngine_GetHScrollbarCGName(int PartsNumber, struct string **pIName);
//void GUIEngine_SetTextBoxPos(int PartsNumber, int PosX, int PosY);
//void GUIEngine_SetTextBoxZ(int PartsNumber, int PosZ);
//int GUIEngine_GetTextBoxX(int PartsNumber);
//int GUIEngine_GetTextBoxY(int PartsNumber);
//int GUIEngine_GetTextBoxZ(int PartsNumber);
//void GUIEngine_SetTextBoxWidth(int PartsNumber, int Width);
//void GUIEngine_SetTextBoxHeight(int PartsNumber, int Height);
//int GUIEngine_GetTextBoxWidth(int PartsNumber);
//int GUIEngine_GetTextBoxHeight(int PartsNumber);
//void GUIEngine_SetTextBoxShow(int PartsNumber, bool Show);
//bool GUIEngine_IsTextBoxShow(int PartsNumber);
//void GUIEngine_SetTextBoxFontProperty(int PartsNumber, int Type, int Size, int R, int G, int B, float BoldWeight, int EdgeR, int EdgeG, int EdgeB, float EdgeWeight);
//void GUIEngine_GetTextBoxFontProperty(int PartsNumber, int *Type, int *Size, int *R, int *G, int *B, float *BoldWeight, int *EdgeR, int *EdgeG, int *EdgeB, float *EdgeWeight);
//void GUIEngine_SetTextBoxText(int PartsNumber, struct string *pIText);
//void GUIEngine_GetTextBoxText(int PartsNumber, struct string **pIText);
//void GUIEngine_SetTextBoxMaxTextLength(int PartsNumber, int Length);
//int GUIEngine_GetTextBoxMaxTextLength(int PartsNumber);
//void GUIEngine_SetTextBoxSelectR(int PartsNumber, int Red);
//void GUIEngine_SetTextBoxSelectG(int PartsNumber, int Green);
//void GUIEngine_SetTextBoxSelectB(int PartsNumber, int Blue);
//int GUIEngine_GetTextBoxSelectR(int PartsNumber);
//int GUIEngine_GetTextBoxSelectG(int PartsNumber);
//int GUIEngine_GetTextBoxSelectB(int PartsNumber);
//void GUIEngine_SetTextBoxCGName(int PartsNumber, struct string *pIName);
//void GUIEngine_GetTextBoxCGName(int PartsNumber, struct string **pIName);
//void GUIEngine_SetListBoxPos(int PartsNumber, int PosX, int PosY);
//void GUIEngine_SetListBoxZ(int PartsNumber, int PosZ);
//int GUIEngine_GetListBoxX(int PartsNumber);
//int GUIEngine_GetListBoxY(int PartsNumber);
//int GUIEngine_GetListBoxZ(int PartsNumber);
//void GUIEngine_SetListBoxWidth(int PartsNumber, int Width);
//void GUIEngine_SetListBoxLineHeight(int PartsNumber, int Height);
//void GUIEngine_SetListBoxHeight(int PartsNumber, int Height);
//int GUIEngine_GetListBoxWidth(int PartsNumber);
//int GUIEngine_GetListBoxLineHeight(int PartsNumber);
//int GUIEngine_GetListBoxHeight(int PartsNumber);
//void GUIEngine_SetListBoxWidthMargin(int PartsNumber, int Margin);
//void GUIEngine_SetListBoxHeightMargin(int PartsNumber, int Margin);
//int GUIEngine_GetListBoxWidthMargin(int PartsNumber);
//int GUIEngine_GetListBoxHeightMargin(int PartsNumber);
//void GUIEngine_SetListBoxShow(int PartsNumber, bool Show);
//bool GUIEngine_IsListBoxShow(int PartsNumber);
//void GUIEngine_SetListBoxCGName(int PartsNumber, struct string *pIName);
//void GUIEngine_GetListBoxCGName(int PartsNumber, struct string **pIName);
//void GUIEngine_SetListBoxScrollPos(int PartsNumber, int Pos);
//int GUIEngine_GetListBoxScrollPos(int PartsNumber);
//void GUIEngine_AddListBoxItem(int PartsNumber, struct string *pIItem);
//void GUIEngine_SetListBoxItem(int PartsNumber, int Index, struct string *pIItem);
//int GUIEngine_GetListBoxItemCount(int PartsNumber);
//void GUIEngine_GetListBoxItem(int PartsNumber, int Index, struct string **pIItem);
//void GUIEngine_EraseListBoxItem(int PartsNumber, int Index);
//void GUIEngine_ClearListBoxItem(int PartsNumber);
//void GUIEngine_SetListBoxFontProperty(int PartsNumber, int Type, int Size, int R, int G, int B, float BoldWeight, int EdgeR, int EdgeG, int EdgeB, float EdgeWeight);
//void GUIEngine_GetListBoxFontProperty(int PartsNumber, int *Type, int *Size, int *R, int *G, int *B, float *BoldWeight, int *EdgeR, int *EdgeG, int *EdgeB, float *EdgeWeight);
//void GUIEngine_SetListBoxSelectIndex(int PartsNumber, int Index);
//int GUIEngine_GetListBoxSelectIndex(int PartsNumber);
//void GUIEngine_SetComboBoxPos(int PartsNumber, int PosX, int PosY);
//void GUIEngine_SetComboBoxZ(int PartsNumber, int PosZ);
//int GUIEngine_GetComboBoxX(int PartsNumber);
//int GUIEngine_GetComboBoxY(int PartsNumber);
//int GUIEngine_GetComboBoxZ(int PartsNumber);
//void GUIEngine_SetComboBoxWidth(int PartsNumber, int Width);
//void GUIEngine_SetComboBoxHeight(int PartsNumber, int Height);
//int GUIEngine_GetComboBoxWidth(int PartsNumber);
//int GUIEngine_GetComboBoxHeight(int PartsNumber);
//void GUIEngine_SetComboBoxTextWidthMargin(int PartsNumber, int Margin);
//void GUIEngine_SetComboBoxTextHeightMargin(int PartsNumber, int Margin);
//int GUIEngine_GetComboBoxTextWidthMargin(int PartsNumber);
//int GUIEngine_GetComboBoxTextHeightMargin(int PartsNumber);
//void GUIEngine_SetComboBoxShow(int PartsNumber, bool Show);
//bool GUIEngine_IsComboBoxShow(int PartsNumber);
//void GUIEngine_SetComboBoxCGName(int PartsNumber, struct string *pIName);
//void GUIEngine_GetComboBoxCGName(int PartsNumber, struct string **pIName);
//void GUIEngine_SetComboBoxText(int PartsNumber, struct string *pIItem);
//void GUIEngine_GetComboBoxText(int PartsNumber, struct string **pIItem);
//void GUIEngine_SetComboBoxFontProperty(int PartsNumber, int Type, int Size, int R, int G, int B, float BoldWeight, int EdgeR, int EdgeG, int EdgeB, float EdgeWeight);
//void GUIEngine_GetComboBoxFontProperty(int PartsNumber, int *Type, int *Size, int *R, int *G, int *B, float *BoldWeight, int *EdgeR, int *EdgeG, int *EdgeB, float *EdgeWeight);
//void GUIEngine_SetMultiTextBoxPos(int PartsNumber, int PosX, int PosY);
//void GUIEngine_SetMultiTextBoxZ(int PartsNumber, int PosZ);
//int GUIEngine_GetMultiTextBoxX(int PartsNumber);
//int GUIEngine_GetMultiTextBoxY(int PartsNumber);
//int GUIEngine_GetMultiTextBoxZ(int PartsNumber);
//void GUIEngine_SetMultiTextBoxWidth(int PartsNumber, int Width);
//void GUIEngine_SetMultiTextBoxHeight(int PartsNumber, int Height);
//int GUIEngine_GetMultiTextBoxWidth(int PartsNumber);
//int GUIEngine_GetMultiTextBoxHeight(int PartsNumber);
//void GUIEngine_SetMultiTextBoxShow(int PartsNumber, bool Show);
//bool GUIEngine_IsMultiTextBoxShow(int PartsNumber);
//void GUIEngine_SetMultiTextBoxFontProperty(int PartsNumber, int Type, int Size, int R, int G, int B, float BoldWeight, int EdgeR, int EdgeG, int EdgeB, float EdgeWeight);
//void GUIEngine_GetMultiTextBoxFontProperty(int PartsNumber, int *Type, int *Size, int *R, int *G, int *B, float *BoldWeight, int *EdgeR, int *EdgeG, int *EdgeB, float *EdgeWeight);
//void GUIEngine_SetMultiTextBoxText(int PartsNumber, struct string *Text);
//void GUIEngine_GetMultiTextBoxText(int PartsNumber, struct string **Text);
//void GUIEngine_SetMultiTextBoxMaxTextLength(int PartsNumber, int Length);
//int GUIEngine_GetMultiTextBoxMaxTextLength(int PartsNumber);
//void GUIEngine_SetMultiTextBoxSelectR(int PartsNumber, int Red);
//void GUIEngine_SetMultiTextBoxSelectG(int PartsNumber, int Green);
//void GUIEngine_SetMultiTextBoxSelectB(int PartsNumber, int Blue);
//int GUIEngine_GetMultiTextBoxSelectR(int PartsNumber);
//int GUIEngine_GetMultiTextBoxSelectG(int PartsNumber);
//int GUIEngine_GetMultiTextBoxSelectB(int PartsNumber);
//void GUIEngine_SetMultiTextBoxCGName(int PartsNumber, struct string *pIName);
//void GUIEngine_GetMultiTextBoxCGName(int PartsNumber, struct string **pIName);
//bool GUIEngine_Parts_SetPartsCG(int PartsNumber, struct string *pCGName, int SpriteDeform, int State);
//void GUIEngine_Parts_GetPartsCGName(int PartsNumber, struct string **pCGName, int State);
//bool GUIEngine_Parts_SetPartsCGSurfaceArea(int PartsNumber, int X, int Y, int Width, int Height, int State);
//bool GUIEngine_Parts_SetLoopCG(int PartsNumber, struct string *pCGName, int StartNo, int NumofCG, int TimePerCG, int State);
//bool GUIEngine_Parts_SetLoopCGSurfaceArea(int PartsNumber, int X, int Y, int Width, int Height, int State);
//bool GUIEngine_Parts_SetText(int PartsNumber, struct string *pIText, int State);
//bool GUIEngine_Parts_AddPartsText(int PartsNumber, struct string *pIText, int State);
//bool GUIEngine_Parts_DeletePartsTopTextLine(int PartsNumber, int State);
//bool GUIEngine_Parts_SetPartsTextSurfaceArea(int PartsNumber, int X, int Y, int Width, int Height, int State);
//void GUIEngine_Parts_SetPartsTextHighlight(int PartsNumber, int Start, int Length, int nR, int nG, int nB, int State);
//void GUIEngine_Parts_AddPartsTextHighlight(int PartsNumber, int Start, int Length, int nR, int nG, int nB, int State);
//void GUIEngine_Parts_ClearPartsTextHighlight(int PartsNumber, int State);
//void GUIEngine_Parts_SetPartsTextCountReturn(int PartsNumber, bool Count, int State);
//bool GUIEngine_Parts_GetPartsTextCountReturn(int PartsNumber, int State);
//bool GUIEngine_Parts_SetFont(int PartsNumber, int Type, int Size, int R, int G, int B, float BoldWeight, int EdgeR, int EdgeG, int EdgeB, float EdgeWeight, int State);
//bool GUIEngine_Parts_SetPartsFontType(int PartsNumber, int Type, int State);
//bool GUIEngine_Parts_SetPartsFontSize(int PartsNumber, int Size, int State);
//bool GUIEngine_Parts_SetPartsFontColor(int PartsNumber, int R, int G, int B, int State);
//bool GUIEngine_Parts_SetPartsFontBoldWeight(int PartsNumber, float BoldWeight, int State);
//bool GUIEngine_Parts_SetPartsFontEdgeColor(int PartsNumber, int R, int G, int B, int State);
//bool GUIEngine_Parts_SetPartsFontEdgeWeight(int PartsNumber, float EdgeWeight, int State);
//bool GUIEngine_Parts_SetTextCharSpace(int PartsNumber, int CharSpace, int State);
//bool GUIEngine_Parts_SetTextLineSpace(int PartsNumber, int LineSpace, int State);
//bool GUIEngine_Parts_SetHGaugeCG(int PartsNumber, struct string *pCGName, int State);
//bool GUIEngine_Parts_SetHGaugeRate(int PartsNumber, float Numerator, float Denominator, int State);
//bool GUIEngine_Parts_SetVGaugeCG(int PartsNumber, struct string *pCGName, int State);
//bool GUIEngine_Parts_SetVGaugeRate(int PartsNumber, float Numerator, float Denominator, int State);
//bool GUIEngine_Parts_SetHGaugeSurfaceArea(int PartsNumber, int X, int Y, int Width, int Height, int State);
//bool GUIEngine_Parts_SetVGaugeSurfaceArea(int PartsNumber, int X, int Y, int Width, int Height, int State);
//bool GUIEngine_Parts_SetNumeralCG(int PartsNumber, struct string *pBaseCGName, int State);
//bool GUIEngine_Parts_SetNumeralLinkedCGNumberWidthWidthList(int PartsNumber, struct string *pCGName, int Width0, int Width1, int Width2, int Width3, int Width4, int Width5, int Width6, int Width7, int Width8, int Width9, int WidthMinus, int WidthComma, int State);
//bool GUIEngine_Parts_SetNumeralFont(int PartsNumber, int Type, int Size, int R, int G, int B, float BoldWeight, int EdgeR, int EdgeG, int EdgeB, float EdgeWeight, bool FullPitch, int State);
//bool GUIEngine_Parts_SetNumeralNumber(int PartsNumber, int Number, int State);
//bool GUIEngine_Parts_SetNumeralShowComma(int PartsNumber, bool ShowComma, int State);
//bool GUIEngine_Parts_SetNumeralSpace(int PartsNumber, int NumeralSpace, int State);
//bool GUIEngine_Parts_SetNumeralLength(int PartsNumber, int Length, int State);
//bool GUIEngine_Parts_SetNumeralSurfaceArea(int PartsNumber, int X, int Y, int Width, int Height, int State);
//bool GUIEngine_Parts_SetPartsRectangleDetectionSize(int PartsNumber, int Width, int Height, int State);
//bool GUIEngine_Parts_SetPartsRectangleDetectionSurfaceArea(int PartsNumber, int X, int Y, int Width, int Height, int State);
//bool GUIEngine_Parts_SetPartsCGDetectionSize(int PartsNumber, struct string *pCGName, int State);
//bool GUIEngine_Parts_SetPartsCGDetectionSurfaceArea(int PartsNumber, int X, int Y, int Width, int Height, int State);
//bool GUIEngine_Parts_SetPartsFlat(int PartsNumber, struct string *pIFileName, int State);
//bool GUIEngine_Parts_IsPartsFlatEnd(int PartsNumber, int State);
//int GUIEngine_Parts_GetPartsFlatCurrentFrameNumber(int PartsNumber, int State);
//bool GUIEngine_Parts_BackPartsFlatBeginFrame(int PartsNumber, int State);
//bool GUIEngine_Parts_StepPartsFlatFinalFrame(int PartsNumber, int State);
//bool GUIEngine_Parts_SetPartsFlatSurfaceArea(int PartsNumber, int X, int Y, int Width, int Height, int State);
//bool GUIEngine_Parts_SetPartsFlatAndStop(int PartsNumber, struct string *pIFileName, int State);
//bool GUIEngine_Parts_StopPartsFlat(int PartsNumber, int State);
//bool GUIEngine_Parts_StartPartsFlat(int PartsNumber, int State);
//bool GUIEngine_Parts_GoFramePartsFlat(int PartsNumber, int CurrentFrame, int State);
//int GUIEngine_Parts_GetPartsFlatEndFrame(int PartsNumber, int State);
//bool GUIEngine_Parts_ExistsFlatFile(struct string *pIFileName);
//bool GUIEngine_Parts_ClearPartsConstructionProcess(int PartsNumber, int State);
//bool GUIEngine_Parts_AddCreateToPartsConstructionProcess(int PartsNumber, int nWidth, int nHeight, int State);
//bool GUIEngine_Parts_AddCreatePixelOnlyToPartsConstructionProcess(int PartsNumber, int nWidth, int nHeight, int State);
//bool GUIEngine_Parts_AddCreateCGToProcess(int PartsNumber, struct string *pICGName, int State);
//bool GUIEngine_Parts_AddFillToPartsConstructionProcess(int PartsNumber, int nX, int nY, int nWidth, int nHeight, int nR, int nG, int nB, int State);
//bool GUIEngine_Parts_AddFillAlphaColorToPartsConstructionProcess(int PartsNumber, int nX, int nY, int nWidth, int nHeight, int nR, int nG, int nB, int nA, int State);
//bool GUIEngine_Parts_AddFillAMapToPartsConstructionProcess(int PartsNumber, int nX, int nY, int nWidth, int nHeight, int nAlpha, int State);
//bool GUIEngine_Parts_AddFillWithAlphaToPartsConstructionProcess(int PartsNumber, int nX, int nY, int nWidth, int nHeight, int nR, int nG, int nB, int nA, int State);
//bool GUIEngine_Parts_AddFillGradationHorizonToPartsConstructionProcess(int PartsNumber, int nX, int nY, int nWidth, int nHeight, int nTopR, int nTopG, int nTopB, int nBottomR, int nBottomG, int nBottomB, int State);
//bool GUIEngine_Parts_AddDrawRectToPartsConstructionProcess(int PartsNumber, int nX, int nY, int nWidth, int nHeight, int nR, int nG, int nB, int State);
//bool GUIEngine_Parts_AddDrawCutCGToPartsConstructionProcess(int PartsNumber, struct string *pICGName, int DestX, int DestY, int DestWidth, int DestHeight, int SrcX, int SrcY, int SrcWidth, int SrcHeight, int InterpolationType, int State);
//bool GUIEngine_Parts_AddCopyCutCGToPartsConstructionProcess(int PartsNumber, struct string *pICGName, int DestX, int DestY, int DestWidth, int DestHeight, int SrcX, int SrcY, int SrcWidth, int SrcHeight, int InterpolationType, int State);
//bool GUIEngine_Parts_AddGrayFilterToPartsConstructionProcess(int PartsNumber, int nX, int nY, int nWidth, int nHeight, bool FullSize, int State);
//bool GUIEngine_Parts_AddAddFilterToPartsConstructionProcess(int PartsNumber, int nX, int nY, int nWidth, int nHeight, int nR, int nG, int nB, bool FullSize, int State);
//bool GUIEngine_Parts_AddMulFilterToPartsConstructionProcess(int PartsNumber, int nX, int nY, int nWidth, int nHeight, int nR, int nG, int nB, bool FullSize, int State);
//bool GUIEngine_Parts_AddDrawLineToPartsConstructionProcess(int PartsNumber, int nX1, int nY1, int nX2, int nY2, int nR, int nG, int nB, int nA, int State);
//bool GUIEngine_Parts_BuildPartsConstructionProcess(int PartsNumber, int State);
//bool GUIEngine_Parts_AddDrawTextToPartsConstructionProcess(int PartsNumber, int nX, int nY, struct string *pIText, int Type, int Size, int R, int G, int B, float BoldWeight, int EdgeR, int EdgeG, int EdgeB, float EdgeWeight, int CharSpace, int LineSpace, int State);
//bool GUIEngine_Parts_AddCopyTextToPartsConstructionProcess(int PartsNumber, int nX, int nY, struct string *pIText, int Type, int Size, int R, int G, int B, float BoldWeight, int EdgeR, int EdgeG, int EdgeB, float EdgeWeight, int CharSpace, int LineSpace, int State);
//bool GUIEngine_Parts_SetPartsConstructionSurfaceArea(int PartsNumber, int X, int Y, int Width, int Height, int State);
//bool GUIEngine_Parts_CreateParts3DLayerPluginID(int PartsNumber, int State);
//int GUIEngine_Parts_GetParts3DLayerPluginID(int PartsNumber, int State);
//bool GUIEngine_Parts_ReleaseParts3DLayerPluginID(int PartsNumber, int State);
//void GUIEngine_Parts_SetPos(int PartsNumber, int X, int Y);
//void GUIEngine_Parts_SetZ(int PartsNumber, int Z);
//void GUIEngine_Parts_SetShow(int PartsNumber, bool Show);
//void GUIEngine_Parts_SetAlpha(int PartsNumber, int Alpha);
//void GUIEngine_Parts_SetPartsDrawFilter(int PartsNumber, int DrawFilter);
//void GUIEngine_Parts_SetPassCursor(int PartsNumber, bool Pass);
//void GUIEngine_Parts_SetClickable(int PartsNumber, bool Clickable);
//void GUIEngine_Parts_SetSpeedupRateByMessageSkip(int PartsNumber, int Rate);
//void GUIEngine_Parts_SetResetTimerByChangeInputStatus(int PartsNumber, bool Reset, int State);
//void GUIEngine_Parts_SetAddColor(int PartsNumber, int nR, int nG, int nB);
//void GUIEngine_Parts_SetMultiplyColor(int PartsNumber, int nR, int nG, int nB);
//void GUIEngine_Parts_SetDrag(int PartsNumber, bool Drag);
//void GUIEngine_Parts_SetPartsOriginPosMode(int PartsNumber, int OriginPosMode);
//void GUIEngine_Parts_SetParentPartsNumber(int PartsNumber, int ParentPartsNumber);
//void GUIEngine_Parts_SetInputState(int PartsNumber, int State);
//void GUIEngine_Parts_SetOnCursorShowLinkPartsNumber(int PartsNumber, int LinkPartsNumber);
//void GUIEngine_Parts_SetPartsMessageWindowShowLink(int PartsNumber, bool MessageWindowShowLink);
//void GUIEngine_Parts_SetSoundNumber(int PartsNumber, int SoundNumber, int State);
//void GUIEngine_Parts_SetClickMissSoundNumber(int SoundNumber);
//void GUIEngine_Parts_SetPartsMagX(int PartsNumber, float MagX);
//void GUIEngine_Parts_SetPartsMagY(int PartsNumber, float MagY);
//void GUIEngine_Parts_SetPartsRotateX(int PartsNumber, float RotateX);
//void GUIEngine_Parts_SetPartsRotateY(int PartsNumber, float RotateY);
//void GUIEngine_Parts_SetPartsRotateZ(int PartsNumber, float RotateZ);
//void GUIEngine_Parts_SetPartsAlphaClipperPartsNumber(int PartsNumber, int AlphaClipperPartsNumber);
//void GUIEngine_Parts_SetPartsPixelDecide(int PartsNumber, bool PixelDecide);
//int GUIEngine_Parts_GetPartsX(int PartsNumber);
//int GUIEngine_Parts_GetPartsY(int PartsNumber);
//int GUIEngine_Parts_GetPartsZ(int PartsNumber);
//bool GUIEngine_Parts_GetPartsShow(int PartsNumber);
//int GUIEngine_Parts_GetPartsAlpha(int PartsNumber);
//int GUIEngine_Parts_GetPartsDrawFilter(int PartsNumber);
//bool GUIEngine_Parts_GetPartsPassCursor(int PartsNumber);
//bool GUIEngine_Parts_GetPartsClickable(int PartsNumber);
//int GUIEngine_Parts_GetPartsSpeedupRateByMessageSkip(int PartsNumber);
//bool GUIEngine_Parts_GetResetTimerByChangeInputStatus(int PartsNumber, int State);
//void GUIEngine_Parts_GetAddColor(int PartsNumber, int *nR, int *nG, int *nB);
//void GUIEngine_Parts_GetMultiplyColor(int PartsNumber, int *nR, int *nG, int *nB);
//bool GUIEngine_Parts_GetPartsDrag(int PartsNumber);
//int GUIEngine_Parts_GetPartsOriginPosMode(int PartsNumber);
//int GUIEngine_Parts_GetParentPartsNumber(int PartsNumber);
//int GUIEngine_Parts_GetInputState(int PartsNumber);
//int GUIEngine_Parts_GetOnCursorShowLinkPartsNumber(int PartsNumber);
//bool GUIEngine_Parts_GetPartsMessageWindowShowLink(int PartsNumber);
//int GUIEngine_Parts_GetSoundNumber(int PartsNumber, int State);
//int GUIEngine_Parts_GetClickMissSoundNumber(void);
//float GUIEngine_Parts_GetPartsMagX(int PartsNumber);
//float GUIEngine_Parts_GetPartsMagY(int PartsNumber);
//float GUIEngine_Parts_GetPartsRotateX(int PartsNumber);
//float GUIEngine_Parts_GetPartsRotateY(int PartsNumber);
//float GUIEngine_Parts_GetPartsRotateZ(int PartsNumber);
//int GUIEngine_Parts_GetPartsAlphaClipperPartsNumber(int PartsNumber);
//bool GUIEngine_Parts_IsPartsPixelDecide(int PartsNumber);
//int GUIEngine_Parts_GetPartsUpperLeftPosX(int PartsNumber, int State);
//int GUIEngine_Parts_GetPartsUpperLeftPosY(int PartsNumber, int State);
//int GUIEngine_Parts_GetPartsWidth(int PartsNumber, int State);
//int GUIEngine_Parts_GetPartsHeight(int PartsNumber, int State);
//void GUIEngine_Parts_AddMotionPos(int PartsNumber, int BeginX, int BeginY, int EndX, int EndY, int BeginTime, int EndTime, struct string *pICurveName);
//void GUIEngine_Parts_AddMotionAlpha(int PartsNumber, int BeginAlpha, int EndAlpha, int BeginTime, int EndTime, struct string *pICurveName);
//bool GUIEngine_Parts_AddMotionCG(int PartsNumber, struct string *BaseCGName, int BeginCGNumber, int NumofCG, int BeginTime, int EndTime, struct string *pICurveName);
//bool GUIEngine_Parts_AddMotionCGTermination(int PartsNumber, int EndTime);
//void GUIEngine_Parts_AddMotionHGaugeRate(int PartsNumber, float BeginNumerator, float BeginDenominator, float EndNumerator, float EndDenominator, int BeginTime, int EndTime, struct string *pICurveName);
//void GUIEngine_Parts_AddMotionVGaugeRate(int PartsNumber, float BeginNumerator, float BeginDenominator, float EndNumerator, float EndDenominator, int BeginTime, int EndTime, struct string *pICurveName);
//void GUIEngine_Parts_AddMotionNumeralNumber(int PartsNumber, int BeginNumber, int EndNumber, int BeginTime, int EndTime, struct string *pICurveName);
//void GUIEngine_Parts_AddMotionMagX(int PartsNumber, float BeginMagX, float EndMagX, int BeginTime, int EndTime, struct string *pICurveName);
//void GUIEngine_Parts_AddMotionMagY(int PartsNumber, float BeginMagY, float EndMagY, int BeginTime, int EndTime, struct string *pICurveName);
//void GUIEngine_Parts_AddMotionRotateX(int PartsNumber, float BeginRotateX, float EndRotateX, int BeginTime, int EndTime, struct string *pICurveName);
//void GUIEngine_Parts_AddMotionRotateY(int PartsNumber, float BeginRotateY, float EndRotateY, int BeginTime, int EndTime, struct string *pICurveName);
//void GUIEngine_Parts_AddMotionRotateZ(int PartsNumber, float BeginRotateZ, float EndRotateZ, int BeginTime, int EndTime, struct string *pICurveName);
//void GUIEngine_Parts_AddMotionVibrationSize(int PartsNumber, int BeginWidth, int BeginHeight, int BeginTime, int EndTime);
//void GUIEngine_Parts_AddWholeMotionVibrationSize(int BeginWidth, int BeginHeight, int BeginTime, int EndTime);
//void GUIEngine_Parts_AddMotionSound(int SoundNumber, int BeginTime);
//bool GUIEngine_Parts_IsCursorIn(int PartsNumber, int MouseX, int MouseY, int State);
//bool GUIEngine_Parts_SetThumbnailReductionSize(int ReductionSize);
//bool GUIEngine_Parts_SetThumbnailMode(bool Mode);
//int GUIEngine_GetClickNumber(void);
//void GUIEngine_Parts_BeginMotion(void);
//void GUIEngine_Parts_EndMotion(void);
//bool GUIEngine_Parts_IsMotion(void);
//void GUIEngine_Parts_SeekEndMotion(void);
//void GUIEngine_Parts_UpdateMotionTime(int Time, bool Skip);
//bool GUIEngine_Save(struct page **SaveDataBuffer);
//bool GUIEngine_SaveWithoutHideParts(struct page **SaveDataBuffer);
//bool GUIEngine_Load(struct page **SaveDataBuffer);

HLL_LIBRARY(GUIEngine,
	    HLL_TODO_EXPORT(Release, GUIEngine_Release),
	    HLL_TODO_EXPORT(ReleaseAll, GUIEngine_ReleaseAll),
	    HLL_TODO_EXPORT(ReleaseAllWithoutSystem, GUIEngine_ReleaseAllWithoutSystem),
	    HLL_TODO_EXPORT(SetDelegateIndex, GUIEngine_SetDelegateIndex),
	    HLL_TODO_EXPORT(GetFreeNumber, GUIEngine_GetFreeNumber),
	    HLL_TODO_EXPORT(IsExist, GUIEngine_IsExist),
	    HLL_TODO_EXPORT(PushController, GUIEngine_PushController),
	    HLL_TODO_EXPORT(PopController, GUIEngine_PopController),
	    HLL_TODO_EXPORT(UpdateComponent, GUIEngine_UpdateComponent),
	    HLL_TODO_EXPORT(BeginInput, GUIEngine_BeginInput),
	    HLL_TODO_EXPORT(EndInput, GUIEngine_EndInput),
	    HLL_TODO_EXPORT(UpdateInputState, GUIEngine_UpdateInputState),
	    HLL_TODO_EXPORT(UpdateParts, GUIEngine_UpdateParts),
	    HLL_TODO_EXPORT(SetFocus, GUIEngine_SetFocus),
	    HLL_TODO_EXPORT(IsFocus, GUIEngine_IsFocus),
	    HLL_TODO_EXPORT(StopSoundWithoutSystemSound, GUIEngine_StopSoundWithoutSystemSound),
	    HLL_TODO_EXPORT(ReleaseMessage, GUIEngine_ReleaseMessage),
	    HLL_TODO_EXPORT(PopMessage, GUIEngine_PopMessage),
	    HLL_TODO_EXPORT(GetMessagePartsNumber, GUIEngine_GetMessagePartsNumber),
	    HLL_TODO_EXPORT(GetMessageDelegateIndex, GUIEngine_GetMessageDelegateIndex),
	    HLL_TODO_EXPORT(GetDelegateIndex, GUIEngine_GetDelegateIndex),
	    HLL_TODO_EXPORT(GetMessageType, GUIEngine_GetMessageType),
	    HLL_TODO_EXPORT(GetMessageVariableCount, GUIEngine_GetMessageVariableCount),
	    HLL_TODO_EXPORT(GetMessageVariableType, GUIEngine_GetMessageVariableType),
	    HLL_TODO_EXPORT(GetMessageVariableInt, GUIEngine_GetMessageVariableInt),
	    HLL_TODO_EXPORT(GetMessageVariableFloat, GUIEngine_GetMessageVariableFloat),
	    HLL_TODO_EXPORT(GetMessageVariableBool, GUIEngine_GetMessageVariableBool),
	    HLL_TODO_EXPORT(GetMessageVariableString, GUIEngine_GetMessageVariableString),
	    HLL_TODO_EXPORT(SetButtonPos, GUIEngine_SetButtonPos),
	    HLL_TODO_EXPORT(SetButtonZ, GUIEngine_SetButtonZ),
	    HLL_TODO_EXPORT(GetButtonX, GUIEngine_GetButtonX),
	    HLL_TODO_EXPORT(GetButtonY, GUIEngine_GetButtonY),
	    HLL_TODO_EXPORT(GetButtonZ, GUIEngine_GetButtonZ),
	    HLL_TODO_EXPORT(SetButtonWidth, GUIEngine_SetButtonWidth),
	    HLL_TODO_EXPORT(SetButtonHeight, GUIEngine_SetButtonHeight),
	    HLL_TODO_EXPORT(GetButtonWidth, GUIEngine_GetButtonWidth),
	    HLL_TODO_EXPORT(GetButtonHeight, GUIEngine_GetButtonHeight),
	    HLL_TODO_EXPORT(SetButtonShow, GUIEngine_SetButtonShow),
	    HLL_TODO_EXPORT(IsButtonShow, GUIEngine_IsButtonShow),
	    HLL_TODO_EXPORT(SetButtonDrag, GUIEngine_SetButtonDrag),
	    HLL_TODO_EXPORT(IsButtonDrag, GUIEngine_IsButtonDrag),
	    HLL_TODO_EXPORT(SetButtonEnable, GUIEngine_SetButtonEnable),
	    HLL_TODO_EXPORT(IsButtonEnable, GUIEngine_IsButtonEnable),
	    HLL_TODO_EXPORT(SetButtonPixelDecide, GUIEngine_SetButtonPixelDecide),
	    HLL_TODO_EXPORT(IsButtonPixelDecide, GUIEngine_IsButtonPixelDecide),
	    HLL_TODO_EXPORT(SetButtonR, GUIEngine_SetButtonR),
	    HLL_TODO_EXPORT(SetButtonG, GUIEngine_SetButtonG),
	    HLL_TODO_EXPORT(SetButtonB, GUIEngine_SetButtonB),
	    HLL_TODO_EXPORT(GetButtonR, GUIEngine_GetButtonR),
	    HLL_TODO_EXPORT(GetButtonG, GUIEngine_GetButtonG),
	    HLL_TODO_EXPORT(GetButtonB, GUIEngine_GetButtonB),
	    HLL_TODO_EXPORT(SetButtonFontProperty, GUIEngine_SetButtonFontProperty),
	    HLL_TODO_EXPORT(GetButtonFontProperty, GUIEngine_GetButtonFontProperty),
	    HLL_TODO_EXPORT(SetButtonOnCursorSoundNumber, GUIEngine_SetButtonOnCursorSoundNumber),
	    HLL_TODO_EXPORT(SetButtonClickSoundNumber, GUIEngine_SetButtonClickSoundNumber),
	    HLL_TODO_EXPORT(GetButtonOnCursorSoundNumber, GUIEngine_GetButtonOnCursorSoundNumber),
	    HLL_TODO_EXPORT(GetButtonClickSoundNumber, GUIEngine_GetButtonClickSoundNumber),
	    HLL_TODO_EXPORT(SetButtonCGName, GUIEngine_SetButtonCGName),
	    HLL_TODO_EXPORT(GetButtonCGName, GUIEngine_GetButtonCGName),
	    HLL_TODO_EXPORT(SetButtonText, GUIEngine_SetButtonText),
	    HLL_TODO_EXPORT(GetButtonText, GUIEngine_GetButtonText),
	    HLL_TODO_EXPORT(SetCGBoxPos, GUIEngine_SetCGBoxPos),
	    HLL_TODO_EXPORT(SetCGBoxZ, GUIEngine_SetCGBoxZ),
	    HLL_TODO_EXPORT(GetCGBoxX, GUIEngine_GetCGBoxX),
	    HLL_TODO_EXPORT(GetCGBoxY, GUIEngine_GetCGBoxY),
	    HLL_TODO_EXPORT(GetCGBoxZ, GUIEngine_GetCGBoxZ),
	    HLL_TODO_EXPORT(SetCGBoxWidth, GUIEngine_SetCGBoxWidth),
	    HLL_TODO_EXPORT(SetCGBoxHeight, GUIEngine_SetCGBoxHeight),
	    HLL_TODO_EXPORT(GetCGBoxWidth, GUIEngine_GetCGBoxWidth),
	    HLL_TODO_EXPORT(GetCGBoxHeight, GUIEngine_GetCGBoxHeight),
	    HLL_TODO_EXPORT(SetCGBoxAlpha, GUIEngine_SetCGBoxAlpha),
	    HLL_TODO_EXPORT(GetCGBoxAlpha, GUIEngine_GetCGBoxAlpha),
	    HLL_TODO_EXPORT(SetCGBoxViewMode, GUIEngine_SetCGBoxViewMode),
	    HLL_TODO_EXPORT(GetCGBoxViewMode, GUIEngine_GetCGBoxViewMode),
	    HLL_TODO_EXPORT(SetCGBoxShow, GUIEngine_SetCGBoxShow),
	    HLL_TODO_EXPORT(IsCGBoxShow, GUIEngine_IsCGBoxShow),
	    HLL_TODO_EXPORT(SetCGBoxDrag, GUIEngine_SetCGBoxDrag),
	    HLL_TODO_EXPORT(IsCGBoxDrag, GUIEngine_IsCGBoxDrag),
	    HLL_TODO_EXPORT(SetCGBoxCGName, GUIEngine_SetCGBoxCGName),
	    HLL_TODO_EXPORT(GetCGBoxCGName, GUIEngine_GetCGBoxCGName),
	    HLL_TODO_EXPORT(SetCGBoxAddR, GUIEngine_SetCGBoxAddR),
	    HLL_TODO_EXPORT(SetCGBoxAddG, GUIEngine_SetCGBoxAddG),
	    HLL_TODO_EXPORT(SetCGBoxAddB, GUIEngine_SetCGBoxAddB),
	    HLL_TODO_EXPORT(GetCGBoxAddR, GUIEngine_GetCGBoxAddR),
	    HLL_TODO_EXPORT(GetCGBoxAddG, GUIEngine_GetCGBoxAddG),
	    HLL_TODO_EXPORT(GetCGBoxAddB, GUIEngine_GetCGBoxAddB),
	    HLL_TODO_EXPORT(SetCGBoxMulR, GUIEngine_SetCGBoxMulR),
	    HLL_TODO_EXPORT(SetCGBoxMulG, GUIEngine_SetCGBoxMulG),
	    HLL_TODO_EXPORT(SetCGBoxMulB, GUIEngine_SetCGBoxMulB),
	    HLL_TODO_EXPORT(GetCGBoxMulR, GUIEngine_GetCGBoxMulR),
	    HLL_TODO_EXPORT(GetCGBoxMulG, GUIEngine_GetCGBoxMulG),
	    HLL_TODO_EXPORT(GetCGBoxMulB, GUIEngine_GetCGBoxMulB),
	    HLL_TODO_EXPORT(SetCheckBoxPos, GUIEngine_SetCheckBoxPos),
	    HLL_TODO_EXPORT(SetCheckBoxZ, GUIEngine_SetCheckBoxZ),
	    HLL_TODO_EXPORT(GetCheckBoxX, GUIEngine_GetCheckBoxX),
	    HLL_TODO_EXPORT(GetCheckBoxY, GUIEngine_GetCheckBoxY),
	    HLL_TODO_EXPORT(GetCheckBoxZ, GUIEngine_GetCheckBoxZ),
	    HLL_TODO_EXPORT(SetCheckBoxWidth, GUIEngine_SetCheckBoxWidth),
	    HLL_TODO_EXPORT(SetCheckBoxHeight, GUIEngine_SetCheckBoxHeight),
	    HLL_TODO_EXPORT(GetCheckBoxWidth, GUIEngine_GetCheckBoxWidth),
	    HLL_TODO_EXPORT(GetCheckBoxHeight, GUIEngine_GetCheckBoxHeight),
	    HLL_TODO_EXPORT(SetCheckBoxShow, GUIEngine_SetCheckBoxShow),
	    HLL_TODO_EXPORT(IsCheckBoxShow, GUIEngine_IsCheckBoxShow),
	    HLL_TODO_EXPORT(SetCheckBoxDrag, GUIEngine_SetCheckBoxDrag),
	    HLL_TODO_EXPORT(IsCheckBoxDrag, GUIEngine_IsCheckBoxDrag),
	    HLL_TODO_EXPORT(CheckBoxChecked, GUIEngine_CheckBoxChecked),
	    HLL_TODO_EXPORT(IsCheckBoxChecked, GUIEngine_IsCheckBoxChecked),
	    HLL_TODO_EXPORT(SetCheckBoxR, GUIEngine_SetCheckBoxR),
	    HLL_TODO_EXPORT(SetCheckBoxG, GUIEngine_SetCheckBoxG),
	    HLL_TODO_EXPORT(SetCheckBoxB, GUIEngine_SetCheckBoxB),
	    HLL_TODO_EXPORT(GetCheckBoxR, GUIEngine_GetCheckBoxR),
	    HLL_TODO_EXPORT(GetCheckBoxG, GUIEngine_GetCheckBoxG),
	    HLL_TODO_EXPORT(GetCheckBoxB, GUIEngine_GetCheckBoxB),
	    HLL_TODO_EXPORT(SetCheckBoxFontProperty, GUIEngine_SetCheckBoxFontProperty),
	    HLL_TODO_EXPORT(GetCheckBoxFontProperty, GUIEngine_GetCheckBoxFontProperty),
	    HLL_TODO_EXPORT(SetCheckBoxOnCursorSoundNumber, GUIEngine_SetCheckBoxOnCursorSoundNumber),
	    HLL_TODO_EXPORT(SetCheckBoxClickSoundNumber, GUIEngine_SetCheckBoxClickSoundNumber),
	    HLL_TODO_EXPORT(GetCheckBoxOnCursorSoundNumber, GUIEngine_GetCheckBoxOnCursorSoundNumber),
	    HLL_TODO_EXPORT(GetCheckBoxClickSoundNumber, GUIEngine_GetCheckBoxClickSoundNumber),
	    HLL_TODO_EXPORT(SetCheckBoxCGName, GUIEngine_SetCheckBoxCGName),
	    HLL_TODO_EXPORT(GetCheckBoxCGName, GUIEngine_GetCheckBoxCGName),
	    HLL_TODO_EXPORT(SetCheckBoxText, GUIEngine_SetCheckBoxText),
	    HLL_TODO_EXPORT(GetCheckBoxText, GUIEngine_GetCheckBoxText),
	    HLL_TODO_EXPORT(SetLabelPos, GUIEngine_SetLabelPos),
	    HLL_TODO_EXPORT(SetLabelZ, GUIEngine_SetLabelZ),
	    HLL_TODO_EXPORT(GetLabelX, GUIEngine_GetLabelX),
	    HLL_TODO_EXPORT(GetLabelY, GUIEngine_GetLabelY),
	    HLL_TODO_EXPORT(GetLabelZ, GUIEngine_GetLabelZ),
	    HLL_TODO_EXPORT(SetLabelWidth, GUIEngine_SetLabelWidth),
	    HLL_TODO_EXPORT(SetLabelHeight, GUIEngine_SetLabelHeight),
	    HLL_TODO_EXPORT(GetLabelWidth, GUIEngine_GetLabelWidth),
	    HLL_TODO_EXPORT(GetLabelHeight, GUIEngine_GetLabelHeight),
	    HLL_TODO_EXPORT(SetLabelAlpha, GUIEngine_SetLabelAlpha),
	    HLL_TODO_EXPORT(GetLabelAlpha, GUIEngine_GetLabelAlpha),
	    HLL_TODO_EXPORT(SetLabelShow, GUIEngine_SetLabelShow),
	    HLL_TODO_EXPORT(IsLabelShow, GUIEngine_IsLabelShow),
	    HLL_TODO_EXPORT(SetLabelDrag, GUIEngine_SetLabelDrag),
	    HLL_TODO_EXPORT(IsLabelDrag, GUIEngine_IsLabelDrag),
	    HLL_TODO_EXPORT(SetLabelClip, GUIEngine_SetLabelClip),
	    HLL_TODO_EXPORT(IsLabelClip, GUIEngine_IsLabelClip),
	    HLL_TODO_EXPORT(SetLabelText, GUIEngine_SetLabelText),
	    HLL_TODO_EXPORT(GetLabelText, GUIEngine_GetLabelText),
	    HLL_TODO_EXPORT(SetLabelFontProperty, GUIEngine_SetLabelFontProperty),
	    HLL_TODO_EXPORT(GetLabelFontProperty, GUIEngine_GetLabelFontProperty),
	    HLL_TODO_EXPORT(SetVScrollbarPos, GUIEngine_SetVScrollbarPos),
	    HLL_TODO_EXPORT(SetVScrollbarZ, GUIEngine_SetVScrollbarZ),
	    HLL_TODO_EXPORT(GetVScrollbarX, GUIEngine_GetVScrollbarX),
	    HLL_TODO_EXPORT(GetVScrollbarY, GUIEngine_GetVScrollbarY),
	    HLL_TODO_EXPORT(GetVScrollbarZ, GUIEngine_GetVScrollbarZ),
	    HLL_TODO_EXPORT(SetVScrollbarShow, GUIEngine_SetVScrollbarShow),
	    HLL_TODO_EXPORT(IsVScrollbarShow, GUIEngine_IsVScrollbarShow),
	    HLL_TODO_EXPORT(SetVScrollbarOnCursorSoundNumber, GUIEngine_SetVScrollbarOnCursorSoundNumber),
	    HLL_TODO_EXPORT(SetVScrollbarClickSoundNumber, GUIEngine_SetVScrollbarClickSoundNumber),
	    HLL_TODO_EXPORT(GetVScrollbarOnCursorSoundNumber, GUIEngine_GetVScrollbarOnCursorSoundNumber),
	    HLL_TODO_EXPORT(GetVScrollbarClickSoundNumber, GUIEngine_GetVScrollbarClickSoundNumber),
	    HLL_TODO_EXPORT(SetVScrollbarWidth, GUIEngine_SetVScrollbarWidth),
	    HLL_TODO_EXPORT(SetVScrollbarHeight, GUIEngine_SetVScrollbarHeight),
	    HLL_TODO_EXPORT(SetVScrollbarUpHeight, GUIEngine_SetVScrollbarUpHeight),
	    HLL_TODO_EXPORT(SetVScrollbarDownHeight, GUIEngine_SetVScrollbarDownHeight),
	    HLL_TODO_EXPORT(GetVScrollbarWidth, GUIEngine_GetVScrollbarWidth),
	    HLL_TODO_EXPORT(GetVScrollbarHeight, GUIEngine_GetVScrollbarHeight),
	    HLL_TODO_EXPORT(GetVScrollbarUpHeight, GUIEngine_GetVScrollbarUpHeight),
	    HLL_TODO_EXPORT(GetVScrollbarDownHeight, GUIEngine_GetVScrollbarDownHeight),
	    HLL_TODO_EXPORT(SetVScrollbarTotalSize, GUIEngine_SetVScrollbarTotalSize),
	    HLL_TODO_EXPORT(SetVScrollbarViewSize, GUIEngine_SetVScrollbarViewSize),
	    HLL_TODO_EXPORT(SetVScrollbarScrollPos, GUIEngine_SetVScrollbarScrollPos),
	    HLL_TODO_EXPORT(SetVScrollbarMoveSizeByButton, GUIEngine_SetVScrollbarMoveSizeByButton),
	    HLL_TODO_EXPORT(GetVScrollbarTotalSize, GUIEngine_GetVScrollbarTotalSize),
	    HLL_TODO_EXPORT(GetVScrollbarViewSize, GUIEngine_GetVScrollbarViewSize),
	    HLL_TODO_EXPORT(GetVScrollbarScrollPos, GUIEngine_GetVScrollbarScrollPos),
	    HLL_TODO_EXPORT(GetVScrollbarMoveSizeByButton, GUIEngine_GetVScrollbarMoveSizeByButton),
	    HLL_TODO_EXPORT(SetVScrollbarCGName, GUIEngine_SetVScrollbarCGName),
	    HLL_TODO_EXPORT(GetVScrollbarCGName, GUIEngine_GetVScrollbarCGName),
	    HLL_TODO_EXPORT(SetHScrollbarPos, GUIEngine_SetHScrollbarPos),
	    HLL_TODO_EXPORT(SetHScrollbarZ, GUIEngine_SetHScrollbarZ),
	    HLL_TODO_EXPORT(GetHScrollbarX, GUIEngine_GetHScrollbarX),
	    HLL_TODO_EXPORT(GetHScrollbarY, GUIEngine_GetHScrollbarY),
	    HLL_TODO_EXPORT(GetHScrollbarZ, GUIEngine_GetHScrollbarZ),
	    HLL_TODO_EXPORT(SetHScrollbarShow, GUIEngine_SetHScrollbarShow),
	    HLL_TODO_EXPORT(IsHScrollbarShow, GUIEngine_IsHScrollbarShow),
	    HLL_TODO_EXPORT(SetHScrollbarOnCursorSoundNumber, GUIEngine_SetHScrollbarOnCursorSoundNumber),
	    HLL_TODO_EXPORT(SetHScrollbarClickSoundNumber, GUIEngine_SetHScrollbarClickSoundNumber),
	    HLL_TODO_EXPORT(GetHScrollbarOnCursorSoundNumber, GUIEngine_GetHScrollbarOnCursorSoundNumber),
	    HLL_TODO_EXPORT(GetHScrollbarClickSoundNumber, GUIEngine_GetHScrollbarClickSoundNumber),
	    HLL_TODO_EXPORT(SetHScrollbarWidth, GUIEngine_SetHScrollbarWidth),
	    HLL_TODO_EXPORT(SetHScrollbarHeight, GUIEngine_SetHScrollbarHeight),
	    HLL_TODO_EXPORT(SetHScrollbarLeftWidth, GUIEngine_SetHScrollbarLeftWidth),
	    HLL_TODO_EXPORT(SetHScrollbarRightWidth, GUIEngine_SetHScrollbarRightWidth),
	    HLL_TODO_EXPORT(GetHScrollbarWidth, GUIEngine_GetHScrollbarWidth),
	    HLL_TODO_EXPORT(GetHScrollbarHeight, GUIEngine_GetHScrollbarHeight),
	    HLL_TODO_EXPORT(GetHScrollbarLeftWidth, GUIEngine_GetHScrollbarLeftWidth),
	    HLL_TODO_EXPORT(GetHScrollbarRightWidth, GUIEngine_GetHScrollbarRightWidth),
	    HLL_TODO_EXPORT(SetHScrollbarTotalSize, GUIEngine_SetHScrollbarTotalSize),
	    HLL_TODO_EXPORT(SetHScrollbarViewSize, GUIEngine_SetHScrollbarViewSize),
	    HLL_TODO_EXPORT(SetHScrollbarScrollPos, GUIEngine_SetHScrollbarScrollPos),
	    HLL_TODO_EXPORT(SetHScrollbarMoveSizeByButton, GUIEngine_SetHScrollbarMoveSizeByButton),
	    HLL_TODO_EXPORT(GetHScrollbarTotalSize, GUIEngine_GetHScrollbarTotalSize),
	    HLL_TODO_EXPORT(GetHScrollbarViewSize, GUIEngine_GetHScrollbarViewSize),
	    HLL_TODO_EXPORT(GetHScrollbarScrollPos, GUIEngine_GetHScrollbarScrollPos),
	    HLL_TODO_EXPORT(GetHScrollbarMoveSizeByButton, GUIEngine_GetHScrollbarMoveSizeByButton),
	    HLL_TODO_EXPORT(SetHScrollbarCGName, GUIEngine_SetHScrollbarCGName),
	    HLL_TODO_EXPORT(GetHScrollbarCGName, GUIEngine_GetHScrollbarCGName),
	    HLL_TODO_EXPORT(SetTextBoxPos, GUIEngine_SetTextBoxPos),
	    HLL_TODO_EXPORT(SetTextBoxZ, GUIEngine_SetTextBoxZ),
	    HLL_TODO_EXPORT(GetTextBoxX, GUIEngine_GetTextBoxX),
	    HLL_TODO_EXPORT(GetTextBoxY, GUIEngine_GetTextBoxY),
	    HLL_TODO_EXPORT(GetTextBoxZ, GUIEngine_GetTextBoxZ),
	    HLL_TODO_EXPORT(SetTextBoxWidth, GUIEngine_SetTextBoxWidth),
	    HLL_TODO_EXPORT(SetTextBoxHeight, GUIEngine_SetTextBoxHeight),
	    HLL_TODO_EXPORT(GetTextBoxWidth, GUIEngine_GetTextBoxWidth),
	    HLL_TODO_EXPORT(GetTextBoxHeight, GUIEngine_GetTextBoxHeight),
	    HLL_TODO_EXPORT(SetTextBoxShow, GUIEngine_SetTextBoxShow),
	    HLL_TODO_EXPORT(IsTextBoxShow, GUIEngine_IsTextBoxShow),
	    HLL_TODO_EXPORT(SetTextBoxFontProperty, GUIEngine_SetTextBoxFontProperty),
	    HLL_TODO_EXPORT(GetTextBoxFontProperty, GUIEngine_GetTextBoxFontProperty),
	    HLL_TODO_EXPORT(SetTextBoxText, GUIEngine_SetTextBoxText),
	    HLL_TODO_EXPORT(GetTextBoxText, GUIEngine_GetTextBoxText),
	    HLL_TODO_EXPORT(SetTextBoxMaxTextLength, GUIEngine_SetTextBoxMaxTextLength),
	    HLL_TODO_EXPORT(GetTextBoxMaxTextLength, GUIEngine_GetTextBoxMaxTextLength),
	    HLL_TODO_EXPORT(SetTextBoxSelectR, GUIEngine_SetTextBoxSelectR),
	    HLL_TODO_EXPORT(SetTextBoxSelectG, GUIEngine_SetTextBoxSelectG),
	    HLL_TODO_EXPORT(SetTextBoxSelectB, GUIEngine_SetTextBoxSelectB),
	    HLL_TODO_EXPORT(GetTextBoxSelectR, GUIEngine_GetTextBoxSelectR),
	    HLL_TODO_EXPORT(GetTextBoxSelectG, GUIEngine_GetTextBoxSelectG),
	    HLL_TODO_EXPORT(GetTextBoxSelectB, GUIEngine_GetTextBoxSelectB),
	    HLL_TODO_EXPORT(SetTextBoxCGName, GUIEngine_SetTextBoxCGName),
	    HLL_TODO_EXPORT(GetTextBoxCGName, GUIEngine_GetTextBoxCGName),
	    HLL_TODO_EXPORT(SetListBoxPos, GUIEngine_SetListBoxPos),
	    HLL_TODO_EXPORT(SetListBoxZ, GUIEngine_SetListBoxZ),
	    HLL_TODO_EXPORT(GetListBoxX, GUIEngine_GetListBoxX),
	    HLL_TODO_EXPORT(GetListBoxY, GUIEngine_GetListBoxY),
	    HLL_TODO_EXPORT(GetListBoxZ, GUIEngine_GetListBoxZ),
	    HLL_TODO_EXPORT(SetListBoxWidth, GUIEngine_SetListBoxWidth),
	    HLL_TODO_EXPORT(SetListBoxLineHeight, GUIEngine_SetListBoxLineHeight),
	    HLL_TODO_EXPORT(SetListBoxHeight, GUIEngine_SetListBoxHeight),
	    HLL_TODO_EXPORT(GetListBoxWidth, GUIEngine_GetListBoxWidth),
	    HLL_TODO_EXPORT(GetListBoxLineHeight, GUIEngine_GetListBoxLineHeight),
	    HLL_TODO_EXPORT(GetListBoxHeight, GUIEngine_GetListBoxHeight),
	    HLL_TODO_EXPORT(SetListBoxWidthMargin, GUIEngine_SetListBoxWidthMargin),
	    HLL_TODO_EXPORT(SetListBoxHeightMargin, GUIEngine_SetListBoxHeightMargin),
	    HLL_TODO_EXPORT(GetListBoxWidthMargin, GUIEngine_GetListBoxWidthMargin),
	    HLL_TODO_EXPORT(GetListBoxHeightMargin, GUIEngine_GetListBoxHeightMargin),
	    HLL_TODO_EXPORT(SetListBoxShow, GUIEngine_SetListBoxShow),
	    HLL_TODO_EXPORT(IsListBoxShow, GUIEngine_IsListBoxShow),
	    HLL_TODO_EXPORT(SetListBoxCGName, GUIEngine_SetListBoxCGName),
	    HLL_TODO_EXPORT(GetListBoxCGName, GUIEngine_GetListBoxCGName),
	    HLL_TODO_EXPORT(SetListBoxScrollPos, GUIEngine_SetListBoxScrollPos),
	    HLL_TODO_EXPORT(GetListBoxScrollPos, GUIEngine_GetListBoxScrollPos),
	    HLL_TODO_EXPORT(AddListBoxItem, GUIEngine_AddListBoxItem),
	    HLL_TODO_EXPORT(SetListBoxItem, GUIEngine_SetListBoxItem),
	    HLL_TODO_EXPORT(GetListBoxItemCount, GUIEngine_GetListBoxItemCount),
	    HLL_TODO_EXPORT(GetListBoxItem, GUIEngine_GetListBoxItem),
	    HLL_TODO_EXPORT(EraseListBoxItem, GUIEngine_EraseListBoxItem),
	    HLL_TODO_EXPORT(ClearListBoxItem, GUIEngine_ClearListBoxItem),
	    HLL_TODO_EXPORT(SetListBoxFontProperty, GUIEngine_SetListBoxFontProperty),
	    HLL_TODO_EXPORT(GetListBoxFontProperty, GUIEngine_GetListBoxFontProperty),
	    HLL_TODO_EXPORT(SetListBoxSelectIndex, GUIEngine_SetListBoxSelectIndex),
	    HLL_TODO_EXPORT(GetListBoxSelectIndex, GUIEngine_GetListBoxSelectIndex),
	    HLL_TODO_EXPORT(SetComboBoxPos, GUIEngine_SetComboBoxPos),
	    HLL_TODO_EXPORT(SetComboBoxZ, GUIEngine_SetComboBoxZ),
	    HLL_TODO_EXPORT(GetComboBoxX, GUIEngine_GetComboBoxX),
	    HLL_TODO_EXPORT(GetComboBoxY, GUIEngine_GetComboBoxY),
	    HLL_TODO_EXPORT(GetComboBoxZ, GUIEngine_GetComboBoxZ),
	    HLL_TODO_EXPORT(SetComboBoxWidth, GUIEngine_SetComboBoxWidth),
	    HLL_TODO_EXPORT(SetComboBoxHeight, GUIEngine_SetComboBoxHeight),
	    HLL_TODO_EXPORT(GetComboBoxWidth, GUIEngine_GetComboBoxWidth),
	    HLL_TODO_EXPORT(GetComboBoxHeight, GUIEngine_GetComboBoxHeight),
	    HLL_TODO_EXPORT(SetComboBoxTextWidthMargin, GUIEngine_SetComboBoxTextWidthMargin),
	    HLL_TODO_EXPORT(SetComboBoxTextHeightMargin, GUIEngine_SetComboBoxTextHeightMargin),
	    HLL_TODO_EXPORT(GetComboBoxTextWidthMargin, GUIEngine_GetComboBoxTextWidthMargin),
	    HLL_TODO_EXPORT(GetComboBoxTextHeightMargin, GUIEngine_GetComboBoxTextHeightMargin),
	    HLL_TODO_EXPORT(SetComboBoxShow, GUIEngine_SetComboBoxShow),
	    HLL_TODO_EXPORT(IsComboBoxShow, GUIEngine_IsComboBoxShow),
	    HLL_TODO_EXPORT(SetComboBoxCGName, GUIEngine_SetComboBoxCGName),
	    HLL_TODO_EXPORT(GetComboBoxCGName, GUIEngine_GetComboBoxCGName),
	    HLL_TODO_EXPORT(SetComboBoxText, GUIEngine_SetComboBoxText),
	    HLL_TODO_EXPORT(GetComboBoxText, GUIEngine_GetComboBoxText),
	    HLL_TODO_EXPORT(SetComboBoxFontProperty, GUIEngine_SetComboBoxFontProperty),
	    HLL_TODO_EXPORT(GetComboBoxFontProperty, GUIEngine_GetComboBoxFontProperty),
	    HLL_TODO_EXPORT(SetMultiTextBoxPos, GUIEngine_SetMultiTextBoxPos),
	    HLL_TODO_EXPORT(SetMultiTextBoxZ, GUIEngine_SetMultiTextBoxZ),
	    HLL_TODO_EXPORT(GetMultiTextBoxX, GUIEngine_GetMultiTextBoxX),
	    HLL_TODO_EXPORT(GetMultiTextBoxY, GUIEngine_GetMultiTextBoxY),
	    HLL_TODO_EXPORT(GetMultiTextBoxZ, GUIEngine_GetMultiTextBoxZ),
	    HLL_TODO_EXPORT(SetMultiTextBoxWidth, GUIEngine_SetMultiTextBoxWidth),
	    HLL_TODO_EXPORT(SetMultiTextBoxHeight, GUIEngine_SetMultiTextBoxHeight),
	    HLL_TODO_EXPORT(GetMultiTextBoxWidth, GUIEngine_GetMultiTextBoxWidth),
	    HLL_TODO_EXPORT(GetMultiTextBoxHeight, GUIEngine_GetMultiTextBoxHeight),
	    HLL_TODO_EXPORT(SetMultiTextBoxShow, GUIEngine_SetMultiTextBoxShow),
	    HLL_TODO_EXPORT(IsMultiTextBoxShow, GUIEngine_IsMultiTextBoxShow),
	    HLL_TODO_EXPORT(SetMultiTextBoxFontProperty, GUIEngine_SetMultiTextBoxFontProperty),
	    HLL_TODO_EXPORT(GetMultiTextBoxFontProperty, GUIEngine_GetMultiTextBoxFontProperty),
	    HLL_TODO_EXPORT(SetMultiTextBoxText, GUIEngine_SetMultiTextBoxText),
	    HLL_TODO_EXPORT(GetMultiTextBoxText, GUIEngine_GetMultiTextBoxText),
	    HLL_TODO_EXPORT(SetMultiTextBoxMaxTextLength, GUIEngine_SetMultiTextBoxMaxTextLength),
	    HLL_TODO_EXPORT(GetMultiTextBoxMaxTextLength, GUIEngine_GetMultiTextBoxMaxTextLength),
	    HLL_TODO_EXPORT(SetMultiTextBoxSelectR, GUIEngine_SetMultiTextBoxSelectR),
	    HLL_TODO_EXPORT(SetMultiTextBoxSelectG, GUIEngine_SetMultiTextBoxSelectG),
	    HLL_TODO_EXPORT(SetMultiTextBoxSelectB, GUIEngine_SetMultiTextBoxSelectB),
	    HLL_TODO_EXPORT(GetMultiTextBoxSelectR, GUIEngine_GetMultiTextBoxSelectR),
	    HLL_TODO_EXPORT(GetMultiTextBoxSelectG, GUIEngine_GetMultiTextBoxSelectG),
	    HLL_TODO_EXPORT(GetMultiTextBoxSelectB, GUIEngine_GetMultiTextBoxSelectB),
	    HLL_TODO_EXPORT(SetMultiTextBoxCGName, GUIEngine_SetMultiTextBoxCGName),
	    HLL_TODO_EXPORT(GetMultiTextBoxCGName, GUIEngine_GetMultiTextBoxCGName),
	    HLL_TODO_EXPORT(Parts_SetPartsCG, GUIEngine_Parts_SetPartsCG),
	    HLL_TODO_EXPORT(Parts_GetPartsCGName, GUIEngine_Parts_GetPartsCGName),
	    HLL_TODO_EXPORT(Parts_SetPartsCGSurfaceArea, GUIEngine_Parts_SetPartsCGSurfaceArea),
	    HLL_TODO_EXPORT(Parts_SetLoopCG, GUIEngine_Parts_SetLoopCG),
	    HLL_TODO_EXPORT(Parts_SetLoopCGSurfaceArea, GUIEngine_Parts_SetLoopCGSurfaceArea),
	    HLL_TODO_EXPORT(Parts_SetText, GUIEngine_Parts_SetText),
	    HLL_TODO_EXPORT(Parts_AddPartsText, GUIEngine_Parts_AddPartsText),
	    HLL_TODO_EXPORT(Parts_DeletePartsTopTextLine, GUIEngine_Parts_DeletePartsTopTextLine),
	    HLL_TODO_EXPORT(Parts_SetPartsTextSurfaceArea, GUIEngine_Parts_SetPartsTextSurfaceArea),
	    HLL_TODO_EXPORT(Parts_SetPartsTextHighlight, GUIEngine_Parts_SetPartsTextHighlight),
	    HLL_TODO_EXPORT(Parts_AddPartsTextHighlight, GUIEngine_Parts_AddPartsTextHighlight),
	    HLL_TODO_EXPORT(Parts_ClearPartsTextHighlight, GUIEngine_Parts_ClearPartsTextHighlight),
	    HLL_TODO_EXPORT(Parts_SetPartsTextCountReturn, GUIEngine_Parts_SetPartsTextCountReturn),
	    HLL_TODO_EXPORT(Parts_GetPartsTextCountReturn, GUIEngine_Parts_GetPartsTextCountReturn),
	    HLL_TODO_EXPORT(Parts_SetFont, GUIEngine_Parts_SetFont),
	    HLL_TODO_EXPORT(Parts_SetPartsFontType, GUIEngine_Parts_SetPartsFontType),
	    HLL_TODO_EXPORT(Parts_SetPartsFontSize, GUIEngine_Parts_SetPartsFontSize),
	    HLL_TODO_EXPORT(Parts_SetPartsFontColor, GUIEngine_Parts_SetPartsFontColor),
	    HLL_TODO_EXPORT(Parts_SetPartsFontBoldWeight, GUIEngine_Parts_SetPartsFontBoldWeight),
	    HLL_TODO_EXPORT(Parts_SetPartsFontEdgeColor, GUIEngine_Parts_SetPartsFontEdgeColor),
	    HLL_TODO_EXPORT(Parts_SetPartsFontEdgeWeight, GUIEngine_Parts_SetPartsFontEdgeWeight),
	    HLL_TODO_EXPORT(Parts_SetTextCharSpace, GUIEngine_Parts_SetTextCharSpace),
	    HLL_TODO_EXPORT(Parts_SetTextLineSpace, GUIEngine_Parts_SetTextLineSpace),
	    HLL_TODO_EXPORT(Parts_SetHGaugeCG, GUIEngine_Parts_SetHGaugeCG),
	    HLL_TODO_EXPORT(Parts_SetHGaugeRate, GUIEngine_Parts_SetHGaugeRate),
	    HLL_TODO_EXPORT(Parts_SetVGaugeCG, GUIEngine_Parts_SetVGaugeCG),
	    HLL_TODO_EXPORT(Parts_SetVGaugeRate, GUIEngine_Parts_SetVGaugeRate),
	    HLL_TODO_EXPORT(Parts_SetHGaugeSurfaceArea, GUIEngine_Parts_SetHGaugeSurfaceArea),
	    HLL_TODO_EXPORT(Parts_SetVGaugeSurfaceArea, GUIEngine_Parts_SetVGaugeSurfaceArea),
	    HLL_TODO_EXPORT(Parts_SetNumeralCG, GUIEngine_Parts_SetNumeralCG),
	    HLL_TODO_EXPORT(Parts_SetNumeralLinkedCGNumberWidthWidthList, GUIEngine_Parts_SetNumeralLinkedCGNumberWidthWidthList),
	    HLL_TODO_EXPORT(Parts_SetNumeralFont, GUIEngine_Parts_SetNumeralFont),
	    HLL_TODO_EXPORT(Parts_SetNumeralNumber, GUIEngine_Parts_SetNumeralNumber),
	    HLL_TODO_EXPORT(Parts_SetNumeralShowComma, GUIEngine_Parts_SetNumeralShowComma),
	    HLL_TODO_EXPORT(Parts_SetNumeralSpace, GUIEngine_Parts_SetNumeralSpace),
	    HLL_TODO_EXPORT(Parts_SetNumeralLength, GUIEngine_Parts_SetNumeralLength),
	    HLL_TODO_EXPORT(Parts_SetNumeralSurfaceArea, GUIEngine_Parts_SetNumeralSurfaceArea),
	    HLL_TODO_EXPORT(Parts_SetPartsRectangleDetectionSize, GUIEngine_Parts_SetPartsRectangleDetectionSize),
	    HLL_TODO_EXPORT(Parts_SetPartsRectangleDetectionSurfaceArea, GUIEngine_Parts_SetPartsRectangleDetectionSurfaceArea),
	    HLL_TODO_EXPORT(Parts_SetPartsCGDetectionSize, GUIEngine_Parts_SetPartsCGDetectionSize),
	    HLL_TODO_EXPORT(Parts_SetPartsCGDetectionSurfaceArea, GUIEngine_Parts_SetPartsCGDetectionSurfaceArea),
	    HLL_TODO_EXPORT(Parts_SetPartsFlat, GUIEngine_Parts_SetPartsFlat),
	    HLL_TODO_EXPORT(Parts_IsPartsFlatEnd, GUIEngine_Parts_IsPartsFlatEnd),
	    HLL_TODO_EXPORT(Parts_GetPartsFlatCurrentFrameNumber, GUIEngine_Parts_GetPartsFlatCurrentFrameNumber),
	    HLL_TODO_EXPORT(Parts_BackPartsFlatBeginFrame, GUIEngine_Parts_BackPartsFlatBeginFrame),
	    HLL_TODO_EXPORT(Parts_StepPartsFlatFinalFrame, GUIEngine_Parts_StepPartsFlatFinalFrame),
	    HLL_TODO_EXPORT(Parts_SetPartsFlatSurfaceArea, GUIEngine_Parts_SetPartsFlatSurfaceArea),
	    HLL_TODO_EXPORT(Parts_SetPartsFlatAndStop, GUIEngine_Parts_SetPartsFlatAndStop),
	    HLL_TODO_EXPORT(Parts_StopPartsFlat, GUIEngine_Parts_StopPartsFlat),
	    HLL_TODO_EXPORT(Parts_StartPartsFlat, GUIEngine_Parts_StartPartsFlat),
	    HLL_TODO_EXPORT(Parts_GoFramePartsFlat, GUIEngine_Parts_GoFramePartsFlat),
	    HLL_TODO_EXPORT(Parts_GetPartsFlatEndFrame, GUIEngine_Parts_GetPartsFlatEndFrame),
	    HLL_TODO_EXPORT(Parts_ExistsFlatFile, GUIEngine_Parts_ExistsFlatFile),
	    HLL_TODO_EXPORT(Parts_ClearPartsConstructionProcess, GUIEngine_Parts_ClearPartsConstructionProcess),
	    HLL_TODO_EXPORT(Parts_AddCreateToPartsConstructionProcess, GUIEngine_Parts_AddCreateToPartsConstructionProcess),
	    HLL_TODO_EXPORT(Parts_AddCreatePixelOnlyToPartsConstructionProcess, GUIEngine_Parts_AddCreatePixelOnlyToPartsConstructionProcess),
	    HLL_TODO_EXPORT(Parts_AddCreateCGToProcess, GUIEngine_Parts_AddCreateCGToProcess),
	    HLL_TODO_EXPORT(Parts_AddFillToPartsConstructionProcess, GUIEngine_Parts_AddFillToPartsConstructionProcess),
	    HLL_TODO_EXPORT(Parts_AddFillAlphaColorToPartsConstructionProcess, GUIEngine_Parts_AddFillAlphaColorToPartsConstructionProcess),
	    HLL_TODO_EXPORT(Parts_AddFillAMapToPartsConstructionProcess, GUIEngine_Parts_AddFillAMapToPartsConstructionProcess),
	    HLL_TODO_EXPORT(Parts_AddFillWithAlphaToPartsConstructionProcess, GUIEngine_Parts_AddFillWithAlphaToPartsConstructionProcess),
	    HLL_TODO_EXPORT(Parts_AddFillGradationHorizonToPartsConstructionProcess, GUIEngine_Parts_AddFillGradationHorizonToPartsConstructionProcess),
	    HLL_TODO_EXPORT(Parts_AddDrawRectToPartsConstructionProcess, GUIEngine_Parts_AddDrawRectToPartsConstructionProcess),
	    HLL_TODO_EXPORT(Parts_AddDrawCutCGToPartsConstructionProcess, GUIEngine_Parts_AddDrawCutCGToPartsConstructionProcess),
	    HLL_TODO_EXPORT(Parts_AddCopyCutCGToPartsConstructionProcess, GUIEngine_Parts_AddCopyCutCGToPartsConstructionProcess),
	    HLL_TODO_EXPORT(Parts_AddGrayFilterToPartsConstructionProcess, GUIEngine_Parts_AddGrayFilterToPartsConstructionProcess),
	    HLL_TODO_EXPORT(Parts_AddAddFilterToPartsConstructionProcess, GUIEngine_Parts_AddAddFilterToPartsConstructionProcess),
	    HLL_TODO_EXPORT(Parts_AddMulFilterToPartsConstructionProcess, GUIEngine_Parts_AddMulFilterToPartsConstructionProcess),
	    HLL_TODO_EXPORT(Parts_AddDrawLineToPartsConstructionProcess, GUIEngine_Parts_AddDrawLineToPartsConstructionProcess),
	    HLL_TODO_EXPORT(Parts_BuildPartsConstructionProcess, GUIEngine_Parts_BuildPartsConstructionProcess),
	    HLL_TODO_EXPORT(Parts_AddDrawTextToPartsConstructionProcess, GUIEngine_Parts_AddDrawTextToPartsConstructionProcess),
	    HLL_TODO_EXPORT(Parts_AddCopyTextToPartsConstructionProcess, GUIEngine_Parts_AddCopyTextToPartsConstructionProcess),
	    HLL_TODO_EXPORT(Parts_SetPartsConstructionSurfaceArea, GUIEngine_Parts_SetPartsConstructionSurfaceArea),
	    HLL_TODO_EXPORT(Parts_CreateParts3DLayerPluginID, GUIEngine_Parts_CreateParts3DLayerPluginID),
	    HLL_TODO_EXPORT(Parts_GetParts3DLayerPluginID, GUIEngine_Parts_GetParts3DLayerPluginID),
	    HLL_TODO_EXPORT(Parts_ReleaseParts3DLayerPluginID, GUIEngine_Parts_ReleaseParts3DLayerPluginID),
	    HLL_TODO_EXPORT(Parts_SetPos, GUIEngine_Parts_SetPos),
	    HLL_TODO_EXPORT(Parts_SetZ, GUIEngine_Parts_SetZ),
	    HLL_TODO_EXPORT(Parts_SetShow, GUIEngine_Parts_SetShow),
	    HLL_TODO_EXPORT(Parts_SetAlpha, GUIEngine_Parts_SetAlpha),
	    HLL_TODO_EXPORT(Parts_SetPartsDrawFilter, GUIEngine_Parts_SetPartsDrawFilter),
	    HLL_TODO_EXPORT(Parts_SetPassCursor, GUIEngine_Parts_SetPassCursor),
	    HLL_TODO_EXPORT(Parts_SetClickable, GUIEngine_Parts_SetClickable),
	    HLL_TODO_EXPORT(Parts_SetSpeedupRateByMessageSkip, GUIEngine_Parts_SetSpeedupRateByMessageSkip),
	    HLL_TODO_EXPORT(Parts_SetResetTimerByChangeInputStatus, GUIEngine_Parts_SetResetTimerByChangeInputStatus),
	    HLL_TODO_EXPORT(Parts_SetAddColor, GUIEngine_Parts_SetAddColor),
	    HLL_TODO_EXPORT(Parts_SetMultiplyColor, GUIEngine_Parts_SetMultiplyColor),
	    HLL_TODO_EXPORT(Parts_SetDrag, GUIEngine_Parts_SetDrag),
	    HLL_TODO_EXPORT(Parts_SetPartsOriginPosMode, GUIEngine_Parts_SetPartsOriginPosMode),
	    HLL_TODO_EXPORT(Parts_SetParentPartsNumber, GUIEngine_Parts_SetParentPartsNumber),
	    HLL_TODO_EXPORT(Parts_SetInputState, GUIEngine_Parts_SetInputState),
	    HLL_TODO_EXPORT(Parts_SetOnCursorShowLinkPartsNumber, GUIEngine_Parts_SetOnCursorShowLinkPartsNumber),
	    HLL_TODO_EXPORT(Parts_SetPartsMessageWindowShowLink, GUIEngine_Parts_SetPartsMessageWindowShowLink),
	    HLL_TODO_EXPORT(Parts_SetSoundNumber, GUIEngine_Parts_SetSoundNumber),
	    HLL_TODO_EXPORT(Parts_SetClickMissSoundNumber, GUIEngine_Parts_SetClickMissSoundNumber),
	    HLL_TODO_EXPORT(Parts_SetPartsMagX, GUIEngine_Parts_SetPartsMagX),
	    HLL_TODO_EXPORT(Parts_SetPartsMagY, GUIEngine_Parts_SetPartsMagY),
	    HLL_TODO_EXPORT(Parts_SetPartsRotateX, GUIEngine_Parts_SetPartsRotateX),
	    HLL_TODO_EXPORT(Parts_SetPartsRotateY, GUIEngine_Parts_SetPartsRotateY),
	    HLL_TODO_EXPORT(Parts_SetPartsRotateZ, GUIEngine_Parts_SetPartsRotateZ),
	    HLL_TODO_EXPORT(Parts_SetPartsAlphaClipperPartsNumber, GUIEngine_Parts_SetPartsAlphaClipperPartsNumber),
	    HLL_TODO_EXPORT(Parts_SetPartsPixelDecide, GUIEngine_Parts_SetPartsPixelDecide),
	    HLL_TODO_EXPORT(Parts_GetPartsX, GUIEngine_Parts_GetPartsX),
	    HLL_TODO_EXPORT(Parts_GetPartsY, GUIEngine_Parts_GetPartsY),
	    HLL_TODO_EXPORT(Parts_GetPartsZ, GUIEngine_Parts_GetPartsZ),
	    HLL_TODO_EXPORT(Parts_GetPartsShow, GUIEngine_Parts_GetPartsShow),
	    HLL_TODO_EXPORT(Parts_GetPartsAlpha, GUIEngine_Parts_GetPartsAlpha),
	    HLL_TODO_EXPORT(Parts_GetPartsDrawFilter, GUIEngine_Parts_GetPartsDrawFilter),
	    HLL_TODO_EXPORT(Parts_GetPartsPassCursor, GUIEngine_Parts_GetPartsPassCursor),
	    HLL_TODO_EXPORT(Parts_GetPartsClickable, GUIEngine_Parts_GetPartsClickable),
	    HLL_TODO_EXPORT(Parts_GetPartsSpeedupRateByMessageSkip, GUIEngine_Parts_GetPartsSpeedupRateByMessageSkip),
	    HLL_TODO_EXPORT(Parts_GetResetTimerByChangeInputStatus, GUIEngine_Parts_GetResetTimerByChangeInputStatus),
	    HLL_TODO_EXPORT(Parts_GetAddColor, GUIEngine_Parts_GetAddColor),
	    HLL_TODO_EXPORT(Parts_GetMultiplyColor, GUIEngine_Parts_GetMultiplyColor),
	    HLL_TODO_EXPORT(Parts_GetPartsDrag, GUIEngine_Parts_GetPartsDrag),
	    HLL_TODO_EXPORT(Parts_GetPartsOriginPosMode, GUIEngine_Parts_GetPartsOriginPosMode),
	    HLL_TODO_EXPORT(Parts_GetParentPartsNumber, GUIEngine_Parts_GetParentPartsNumber),
	    HLL_TODO_EXPORT(Parts_GetInputState, GUIEngine_Parts_GetInputState),
	    HLL_TODO_EXPORT(Parts_GetOnCursorShowLinkPartsNumber, GUIEngine_Parts_GetOnCursorShowLinkPartsNumber),
	    HLL_TODO_EXPORT(Parts_GetPartsMessageWindowShowLink, GUIEngine_Parts_GetPartsMessageWindowShowLink),
	    HLL_TODO_EXPORT(Parts_GetSoundNumber, GUIEngine_Parts_GetSoundNumber),
	    HLL_TODO_EXPORT(Parts_GetClickMissSoundNumber, GUIEngine_Parts_GetClickMissSoundNumber),
	    HLL_TODO_EXPORT(Parts_GetPartsMagX, GUIEngine_Parts_GetPartsMagX),
	    HLL_TODO_EXPORT(Parts_GetPartsMagY, GUIEngine_Parts_GetPartsMagY),
	    HLL_TODO_EXPORT(Parts_GetPartsRotateX, GUIEngine_Parts_GetPartsRotateX),
	    HLL_TODO_EXPORT(Parts_GetPartsRotateY, GUIEngine_Parts_GetPartsRotateY),
	    HLL_TODO_EXPORT(Parts_GetPartsRotateZ, GUIEngine_Parts_GetPartsRotateZ),
	    HLL_TODO_EXPORT(Parts_GetPartsAlphaClipperPartsNumber, GUIEngine_Parts_GetPartsAlphaClipperPartsNumber),
	    HLL_TODO_EXPORT(Parts_IsPartsPixelDecide, GUIEngine_Parts_IsPartsPixelDecide),
	    HLL_TODO_EXPORT(Parts_GetPartsUpperLeftPosX, GUIEngine_Parts_GetPartsUpperLeftPosX),
	    HLL_TODO_EXPORT(Parts_GetPartsUpperLeftPosY, GUIEngine_Parts_GetPartsUpperLeftPosY),
	    HLL_TODO_EXPORT(Parts_GetPartsWidth, GUIEngine_Parts_GetPartsWidth),
	    HLL_TODO_EXPORT(Parts_GetPartsHeight, GUIEngine_Parts_GetPartsHeight),
	    HLL_TODO_EXPORT(Parts_AddMotionPos, GUIEngine_Parts_AddMotionPos),
	    HLL_TODO_EXPORT(Parts_AddMotionAlpha, GUIEngine_Parts_AddMotionAlpha),
	    HLL_TODO_EXPORT(Parts_AddMotionCG, GUIEngine_Parts_AddMotionCG),
	    HLL_TODO_EXPORT(Parts_AddMotionCGTermination, GUIEngine_Parts_AddMotionCGTermination),
	    HLL_TODO_EXPORT(Parts_AddMotionHGaugeRate, GUIEngine_Parts_AddMotionHGaugeRate),
	    HLL_TODO_EXPORT(Parts_AddMotionVGaugeRate, GUIEngine_Parts_AddMotionVGaugeRate),
	    HLL_TODO_EXPORT(Parts_AddMotionNumeralNumber, GUIEngine_Parts_AddMotionNumeralNumber),
	    HLL_TODO_EXPORT(Parts_AddMotionMagX, GUIEngine_Parts_AddMotionMagX),
	    HLL_TODO_EXPORT(Parts_AddMotionMagY, GUIEngine_Parts_AddMotionMagY),
	    HLL_TODO_EXPORT(Parts_AddMotionRotateX, GUIEngine_Parts_AddMotionRotateX),
	    HLL_TODO_EXPORT(Parts_AddMotionRotateY, GUIEngine_Parts_AddMotionRotateY),
	    HLL_TODO_EXPORT(Parts_AddMotionRotateZ, GUIEngine_Parts_AddMotionRotateZ),
	    HLL_TODO_EXPORT(Parts_AddMotionVibrationSize, GUIEngine_Parts_AddMotionVibrationSize),
	    HLL_TODO_EXPORT(Parts_AddWholeMotionVibrationSize, GUIEngine_Parts_AddWholeMotionVibrationSize),
	    HLL_TODO_EXPORT(Parts_AddMotionSound, GUIEngine_Parts_AddMotionSound),
	    HLL_TODO_EXPORT(Parts_IsCursorIn, GUIEngine_Parts_IsCursorIn),
	    HLL_TODO_EXPORT(Parts_SetThumbnailReductionSize, GUIEngine_Parts_SetThumbnailReductionSize),
	    HLL_TODO_EXPORT(Parts_SetThumbnailMode, GUIEngine_Parts_SetThumbnailMode),
	    HLL_TODO_EXPORT(GetClickNumber, GUIEngine_GetClickNumber),
	    HLL_TODO_EXPORT(Parts_BeginMotion, GUIEngine_Parts_BeginMotion),
	    HLL_TODO_EXPORT(Parts_EndMotion, GUIEngine_Parts_EndMotion),
	    HLL_TODO_EXPORT(Parts_IsMotion, GUIEngine_Parts_IsMotion),
	    HLL_TODO_EXPORT(Parts_SeekEndMotion, GUIEngine_Parts_SeekEndMotion),
	    HLL_TODO_EXPORT(Parts_UpdateMotionTime, GUIEngine_Parts_UpdateMotionTime),
	    HLL_TODO_EXPORT(Save, GUIEngine_Save),
	    HLL_TODO_EXPORT(SaveWithoutHideParts, GUIEngine_SaveWithoutHideParts),
	    HLL_TODO_EXPORT(Load, GUIEngine_Load)
	    );
