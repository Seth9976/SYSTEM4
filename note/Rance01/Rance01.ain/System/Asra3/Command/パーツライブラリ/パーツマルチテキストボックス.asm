; FUNC Ｐ＿マルチテキストボックス＿座標設定 (0x545e4-0x54602)
/* 000545e4 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 000545ea */ SH_LOCALREF _Ｘ座標                   ; stack:  0 ->  0 (0)
/* 000545f0 */ SH_LOCALREF _Ｙ座標                   ; stack:  0 ->  0 (0)
/* 000545f6 */ CALLHLL GUIEngine.SetMultiTextBoxPos (args: 3) ; stack:  0 ->  0 (0)
/* 00054600 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿マルチテキストボックス＿座標設定

; FUNC Ｐ＿マルチテキストボックス＿Ｚ座標設定 (0x5460e-0x54626)
/* 0005460e */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00054614 */ SH_LOCALREF _Ｚ座標                   ; stack:  0 ->  0 (0)
/* 0005461a */ CALLHLL GUIEngine.SetMultiTextBoxZ (args: 2) ; stack:  0 ->  0 (0)
/* 00054624 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿マルチテキストボックス＿Ｚ座標設定

; FUNC Ｐ＿マルチテキストボックス＿Ｘ座標取得 (0x54632-0x5464c)
/* 00054632 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00054638 */ CALLHLL GUIEngine.GetMultiTextBoxX (args: 1) ; stack:  0 ->  0 (0)
/* 00054642 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00054644 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 0005464a */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿マルチテキストボックス＿Ｘ座標取得

; FUNC Ｐ＿マルチテキストボックス＿Ｙ座標取得 (0x54658-0x54672)
/* 00054658 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 0005465e */ CALLHLL GUIEngine.GetMultiTextBoxY (args: 1) ; stack:  0 ->  0 (0)
/* 00054668 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 0005466a */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00054670 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿マルチテキストボックス＿Ｙ座標取得

; FUNC Ｐ＿マルチテキストボックス＿Ｚ座標取得 (0x5467e-0x54698)
/* 0005467e */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00054684 */ CALLHLL GUIEngine.GetMultiTextBoxZ (args: 1) ; stack:  0 ->  0 (0)
/* 0005468e */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00054690 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00054696 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿マルチテキストボックス＿Ｚ座標取得

; FUNC Ｐ＿マルチテキストボックス＿サイズ設定 (0x546a4-0x546d2)
/* 000546a4 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 000546aa */ SH_LOCALREF 幅                          ; stack:  0 ->  0 (0)
/* 000546b0 */ CALLHLL GUIEngine.SetMultiTextBoxWidth (args: 2) ; stack:  0 ->  0 (0)
/* 000546ba */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 000546c0 */ SH_LOCALREF 高さ                       ; stack:  0 ->  0 (0)
/* 000546c6 */ CALLHLL GUIEngine.SetMultiTextBoxHeight (args: 2) ; stack:  0 ->  0 (0)
/* 000546d0 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿マルチテキストボックス＿サイズ設定

; FUNC Ｐ＿マルチテキストボックス＿幅取得 (0x546de-0x546f8)
/* 000546de */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 000546e4 */ CALLHLL GUIEngine.GetMultiTextBoxWidth (args: 1) ; stack:  0 ->  0 (0)
/* 000546ee */ RETURN                                   ; stack:  0 ->  0 (0)
/* 000546f0 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 000546f6 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿マルチテキストボックス＿幅取得

; FUNC Ｐ＿マルチテキストボックス＿高さ取得 (0x54704-0x5471e)
/* 00054704 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 0005470a */ CALLHLL GUIEngine.GetMultiTextBoxHeight (args: 1) ; stack:  0 ->  0 (0)
/* 00054714 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00054716 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 0005471c */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿マルチテキストボックス＿高さ取得

; FUNC Ｐ＿マルチテキストボックス＿表示設定 (0x5472a-0x54742)
/* 0005472a */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00054730 */ SH_LOCALREF 表示                       ; stack:  0 ->  0 (0)
/* 00054736 */ CALLHLL GUIEngine.SetMultiTextBoxShow (args: 2) ; stack:  0 ->  0 (0)
/* 00054740 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿マルチテキストボックス＿表示設定

; FUNC Ｐ＿マルチテキストボックス＿表示設定取得 (0x5474e-0x54768)
/* 0005474e */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00054754 */ CALLHLL GUIEngine.IsMultiTextBoxShow (args: 1) ; stack:  0 ->  0 (0)
/* 0005475e */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00054760 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00054766 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿マルチテキストボックス＿表示設定取得

; FUNC Ｐ＿マルチテキストボックス＿フォント設定 (0x54774-0x547c2)
/* 00054774 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 0005477a */ SH_LOCALREF 種類                       ; stack:  0 ->  0 (0)
/* 00054780 */ SH_LOCALREF サイズ                    ; stack:  0 ->  0 (0)
/* 00054786 */ SH_LOCALREF 赤                          ; stack:  0 ->  0 (0)
/* 0005478c */ SH_LOCALREF 緑                          ; stack:  0 ->  0 (0)
/* 00054792 */ SH_LOCALREF 青                          ; stack:  0 ->  0 (0)
/* 00054798 */ SH_LOCALREF 太字幅                    ; stack:  0 ->  0 (0)
/* 0005479e */ SH_LOCALREF 縁取り赤                 ; stack:  0 ->  0 (0)
/* 000547a4 */ SH_LOCALREF 縁取り緑                 ; stack:  0 ->  0 (0)
/* 000547aa */ SH_LOCALREF 縁取り青                 ; stack:  0 ->  0 (0)
/* 000547b0 */ SH_LOCALREF 縁取り幅                 ; stack:  0 ->  0 (0)
/* 000547b6 */ CALLHLL GUIEngine.SetMultiTextBoxFontProperty (args: 11) ; stack:  0 ->  0 (0)
/* 000547c0 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿マルチテキストボックス＿フォント設定

; FUNC Ｐ＿マルチテキストボックス＿フォント取得 (0x547ce-0x5481c)
/* 000547ce */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 000547d4 */ (SH_LOCALREFREF 1)                       ; stack:  0 ->  0 (0)
/* 000547da */ (SH_LOCALREFREF 3)                       ; stack:  0 ->  0 (0)
/* 000547e0 */ (SH_LOCALREFREF 5)                       ; stack:  0 ->  0 (0)
/* 000547e6 */ (SH_LOCALREFREF 7)                       ; stack:  0 ->  0 (0)
/* 000547ec */ (SH_LOCALREFREF 9)                       ; stack:  0 ->  0 (0)
/* 000547f2 */ (SH_LOCALREFREF 11)                      ; stack:  0 ->  0 (0)
/* 000547f8 */ (SH_LOCALREFREF 15)                      ; stack:  0 ->  0 (0)
/* 000547fe */ (SH_LOCALREFREF 17)                      ; stack:  0 ->  0 (0)
/* 00054804 */ (SH_LOCALREFREF 19)                      ; stack:  0 ->  0 (0)
/* 0005480a */ (SH_LOCALREFREF 13)                      ; stack:  0 ->  0 (0)
/* 00054810 */ CALLHLL GUIEngine.GetMultiTextBoxFontProperty (args: 11) ; stack:  0 ->  0 (0)
/* 0005481a */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿マルチテキストボックス＿フォント取得

; FUNC Ｐ＿マルチテキストボックス＿テキスト設定 (0x54828-0x54840)
/* 00054828 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 0005482e */ (SH_LOCAL_S_REF 1)                       ; stack:  0 ->  0 (0)
/* 00054834 */ CALLHLL GUIEngine.SetMultiTextBoxText (args: 2) ; stack:  0 ->  0 (0)
/* 0005483e */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿マルチテキストボックス＿テキスト設定

; FUNC Ｐ＿マルチテキストボックス＿テキスト取得 (0x5484c-0x5487e)
/* 0005484c */ SH_LOCALREF Text                         ; stack:  0 ->  0 (0)
/* 00054852 */ (SH_S_ASSIGN_STR0 0)                     ; stack:  0 ->  0 (0)
/* 00054858 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 0005485e */ SH_LOCALREF Text                         ; stack:  0 ->  0 (0)
/* 00054864 */ CALLHLL GUIEngine.GetMultiTextBoxText (args: 2) ; stack:  0 ->  0 (0)
/* 0005486e */ (SH_LOCAL_S_REF 1)                       ; stack:  0 ->  0 (0)
/* 00054874 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00054876 */ S_PUSH 0 ("")                            ; stack:  0 ->  1 (+1)
/* 0005487c */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿マルチテキストボックス＿テキスト取得

; FUNC Ｐ＿マルチテキストボックス＿最大文字数設定 (0x5488a-0x548a2)
/* 0005488a */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00054890 */ SH_LOCALREF 最大文字数              ; stack:  0 ->  0 (0)
/* 00054896 */ CALLHLL GUIEngine.SetMultiTextBoxMaxTextLength (args: 2) ; stack:  0 ->  0 (0)
/* 000548a0 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿マルチテキストボックス＿最大文字数設定

; FUNC Ｐ＿マルチテキストボックス＿最大文字数取得 (0x548ae-0x548c8)
/* 000548ae */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 000548b4 */ CALLHLL GUIEngine.GetMultiTextBoxMaxTextLength (args: 1) ; stack:  0 ->  0 (0)
/* 000548be */ RETURN                                   ; stack:  0 ->  0 (0)
/* 000548c0 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 000548c6 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿マルチテキストボックス＿最大文字数取得

; FUNC Ｐ＿マルチテキストボックス＿選択色設定 (0x548d4-0x54918)
/* 000548d4 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 000548da */ SH_LOCALREF 赤                          ; stack:  0 ->  0 (0)
/* 000548e0 */ CALLHLL GUIEngine.SetMultiTextBoxSelectR (args: 2) ; stack:  0 ->  0 (0)
/* 000548ea */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 000548f0 */ SH_LOCALREF 緑                          ; stack:  0 ->  0 (0)
/* 000548f6 */ CALLHLL GUIEngine.SetMultiTextBoxSelectG (args: 2) ; stack:  0 ->  0 (0)
/* 00054900 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00054906 */ SH_LOCALREF 青                          ; stack:  0 ->  0 (0)
/* 0005490c */ CALLHLL GUIEngine.SetMultiTextBoxSelectB (args: 2) ; stack:  0 ->  0 (0)
/* 00054916 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿マルチテキストボックス＿選択色設定

; FUNC Ｐ＿マルチテキストボックス＿選択色赤取得 (0x54924-0x5493e)
/* 00054924 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 0005492a */ CALLHLL GUIEngine.GetMultiTextBoxSelectR (args: 1) ; stack:  0 ->  0 (0)
/* 00054934 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00054936 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 0005493c */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿マルチテキストボックス＿選択色赤取得

; FUNC Ｐ＿マルチテキストボックス＿選択色緑取得 (0x5494a-0x54964)
/* 0005494a */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00054950 */ CALLHLL GUIEngine.GetMultiTextBoxSelectG (args: 1) ; stack:  0 ->  0 (0)
/* 0005495a */ RETURN                                   ; stack:  0 ->  0 (0)
/* 0005495c */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00054962 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿マルチテキストボックス＿選択色緑取得

; FUNC Ｐ＿マルチテキストボックス＿選択色青取得 (0x54970-0x5498a)
/* 00054970 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00054976 */ CALLHLL GUIEngine.GetMultiTextBoxSelectB (args: 1) ; stack:  0 ->  0 (0)
/* 00054980 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00054982 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00054988 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿マルチテキストボックス＿選択色青取得

; FUNC Ｐ＿マルチテキストボックス＿ＣＧ名設定 (0x54996-0x549ae)
/* 00054996 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 0005499c */ (SH_LOCAL_S_REF 1)                       ; stack:  0 ->  0 (0)
/* 000549a2 */ CALLHLL GUIEngine.SetMultiTextBoxCGName (args: 2) ; stack:  0 ->  0 (0)
/* 000549ac */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿マルチテキストボックス＿ＣＧ名設定

; FUNC Ｐ＿マルチテキストボックス＿ＣＧ名取得 (0x549ba-0x549ec)
/* 000549ba */ SH_LOCALREF Name                         ; stack:  0 ->  0 (0)
/* 000549c0 */ (SH_S_ASSIGN_STR0 0)                     ; stack:  0 ->  0 (0)
/* 000549c6 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 000549cc */ SH_LOCALREF Name                         ; stack:  0 ->  0 (0)
/* 000549d2 */ CALLHLL GUIEngine.GetMultiTextBoxCGName (args: 2) ; stack:  0 ->  0 (0)
/* 000549dc */ (SH_LOCAL_S_REF 1)                       ; stack:  0 ->  0 (0)
/* 000549e2 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 000549e4 */ S_PUSH 0 ("")                            ; stack:  0 ->  1 (+1)
/* 000549ea */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿マルチテキストボックス＿ＣＧ名取得

