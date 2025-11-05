; FUNC Ｐ＿チェックボックス＿座標設定 (0x527fe-0x5281c)
/* 000527fe */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00052804 */ SH_LOCALREF _Ｘ座標                   ; stack:  0 ->  0 (0)
/* 0005280a */ SH_LOCALREF _Ｙ座標                   ; stack:  0 ->  0 (0)
/* 00052810 */ CALLHLL GUIEngine.SetCheckBoxPos (args: 3) ; stack:  0 ->  0 (0)
/* 0005281a */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿チェックボックス＿座標設定

; FUNC Ｐ＿チェックボックス＿Ｚ座標設定 (0x52828-0x52840)
/* 00052828 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 0005282e */ SH_LOCALREF _Ｚ座標                   ; stack:  0 ->  0 (0)
/* 00052834 */ CALLHLL GUIEngine.SetCheckBoxZ (args: 2) ; stack:  0 ->  0 (0)
/* 0005283e */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿チェックボックス＿Ｚ座標設定

; FUNC Ｐ＿チェックボックス＿Ｘ座標取得 (0x5284c-0x52866)
/* 0005284c */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00052852 */ CALLHLL GUIEngine.GetCheckBoxX (args: 1) ; stack:  0 ->  0 (0)
/* 0005285c */ RETURN                                   ; stack:  0 ->  0 (0)
/* 0005285e */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00052864 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿チェックボックス＿Ｘ座標取得

; FUNC Ｐ＿チェックボックス＿Ｙ座標取得 (0x52872-0x5288c)
/* 00052872 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00052878 */ CALLHLL GUIEngine.GetCheckBoxY (args: 1) ; stack:  0 ->  0 (0)
/* 00052882 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00052884 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 0005288a */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿チェックボックス＿Ｙ座標取得

; FUNC Ｐ＿チェックボックス＿Ｚ座標取得 (0x52898-0x528b2)
/* 00052898 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 0005289e */ CALLHLL GUIEngine.GetCheckBoxZ (args: 1) ; stack:  0 ->  0 (0)
/* 000528a8 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 000528aa */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 000528b0 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿チェックボックス＿Ｚ座標取得

; FUNC Ｐ＿チェックボックス＿サイズ設定 (0x528be-0x528ec)
/* 000528be */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 000528c4 */ SH_LOCALREF 幅                          ; stack:  0 ->  0 (0)
/* 000528ca */ CALLHLL GUIEngine.SetCheckBoxWidth (args: 2) ; stack:  0 ->  0 (0)
/* 000528d4 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 000528da */ SH_LOCALREF 高さ                       ; stack:  0 ->  0 (0)
/* 000528e0 */ CALLHLL GUIEngine.SetCheckBoxHeight (args: 2) ; stack:  0 ->  0 (0)
/* 000528ea */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿チェックボックス＿サイズ設定

; FUNC Ｐ＿チェックボックス＿幅取得 (0x528f8-0x52912)
/* 000528f8 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 000528fe */ CALLHLL GUIEngine.GetCheckBoxWidth (args: 1) ; stack:  0 ->  0 (0)
/* 00052908 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 0005290a */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00052910 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿チェックボックス＿幅取得

; FUNC Ｐ＿チェックボックス＿高さ取得 (0x5291e-0x52938)
/* 0005291e */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00052924 */ CALLHLL GUIEngine.GetCheckBoxHeight (args: 1) ; stack:  0 ->  0 (0)
/* 0005292e */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00052930 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00052936 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿チェックボックス＿高さ取得

; FUNC Ｐ＿チェックボックス＿表示設定 (0x52944-0x5295c)
/* 00052944 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 0005294a */ SH_LOCALREF 表示                       ; stack:  0 ->  0 (0)
/* 00052950 */ CALLHLL GUIEngine.SetCheckBoxShow (args: 2) ; stack:  0 ->  0 (0)
/* 0005295a */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿チェックボックス＿表示設定

; FUNC Ｐ＿チェックボックス＿表示設定取得 (0x52968-0x52982)
/* 00052968 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 0005296e */ CALLHLL GUIEngine.IsCheckBoxShow (args: 1) ; stack:  0 ->  0 (0)
/* 00052978 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 0005297a */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00052980 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿チェックボックス＿表示設定取得

; FUNC Ｐ＿チェックボックス＿ドラッグ設定 (0x5298e-0x529a6)
/* 0005298e */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00052994 */ SH_LOCALREF ドラッグ                 ; stack:  0 ->  0 (0)
/* 0005299a */ CALLHLL GUIEngine.SetCheckBoxDrag (args: 2) ; stack:  0 ->  0 (0)
/* 000529a4 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿チェックボックス＿ドラッグ設定

; FUNC Ｐ＿チェックボックス＿ドラッグ設定取得 (0x529b2-0x529cc)
/* 000529b2 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 000529b8 */ CALLHLL GUIEngine.IsCheckBoxDrag (args: 1) ; stack:  0 ->  0 (0)
/* 000529c2 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 000529c4 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 000529ca */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿チェックボックス＿ドラッグ設定取得

; FUNC Ｐ＿チェックボックス＿チェック状態設定 (0x529d8-0x529f0)
/* 000529d8 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 000529de */ SH_LOCALREF チェック                 ; stack:  0 ->  0 (0)
/* 000529e4 */ CALLHLL GUIEngine.CheckBoxChecked (args: 2) ; stack:  0 ->  0 (0)
/* 000529ee */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿チェックボックス＿チェック状態設定

; FUNC Ｐ＿チェックボックス＿チェック状態取得 (0x529fc-0x52a16)
/* 000529fc */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00052a02 */ CALLHLL GUIEngine.IsCheckBoxChecked (args: 1) ; stack:  0 ->  0 (0)
/* 00052a0c */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00052a0e */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00052a14 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿チェックボックス＿チェック状態取得

; FUNC Ｐ＿チェックボックス＿色設定 (0x52a22-0x52a66)
/* 00052a22 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00052a28 */ SH_LOCALREF 赤                          ; stack:  0 ->  0 (0)
/* 00052a2e */ CALLHLL GUIEngine.SetCheckBoxR (args: 2) ; stack:  0 ->  0 (0)
/* 00052a38 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00052a3e */ SH_LOCALREF 緑                          ; stack:  0 ->  0 (0)
/* 00052a44 */ CALLHLL GUIEngine.SetCheckBoxG (args: 2) ; stack:  0 ->  0 (0)
/* 00052a4e */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00052a54 */ SH_LOCALREF 青                          ; stack:  0 ->  0 (0)
/* 00052a5a */ CALLHLL GUIEngine.SetCheckBoxB (args: 2) ; stack:  0 ->  0 (0)
/* 00052a64 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿チェックボックス＿色設定

; FUNC Ｐ＿チェックボックス＿赤色取得 (0x52a72-0x52a8c)
/* 00052a72 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00052a78 */ CALLHLL GUIEngine.GetCheckBoxR (args: 1) ; stack:  0 ->  0 (0)
/* 00052a82 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00052a84 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00052a8a */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿チェックボックス＿赤色取得

; FUNC Ｐ＿チェックボックス＿緑色取得 (0x52a98-0x52ab2)
/* 00052a98 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00052a9e */ CALLHLL GUIEngine.GetCheckBoxG (args: 1) ; stack:  0 ->  0 (0)
/* 00052aa8 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00052aaa */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00052ab0 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿チェックボックス＿緑色取得

; FUNC Ｐ＿チェックボックス＿青色取得 (0x52abe-0x52ad8)
/* 00052abe */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00052ac4 */ CALLHLL GUIEngine.GetCheckBoxB (args: 1) ; stack:  0 ->  0 (0)
/* 00052ace */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00052ad0 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00052ad6 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿チェックボックス＿青色取得

; FUNC Ｐ＿チェックボックス＿フォント設定 (0x52ae4-0x52b32)
/* 00052ae4 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00052aea */ SH_LOCALREF 種類                       ; stack:  0 ->  0 (0)
/* 00052af0 */ SH_LOCALREF サイズ                    ; stack:  0 ->  0 (0)
/* 00052af6 */ SH_LOCALREF 赤                          ; stack:  0 ->  0 (0)
/* 00052afc */ SH_LOCALREF 緑                          ; stack:  0 ->  0 (0)
/* 00052b02 */ SH_LOCALREF 青                          ; stack:  0 ->  0 (0)
/* 00052b08 */ SH_LOCALREF 太字幅                    ; stack:  0 ->  0 (0)
/* 00052b0e */ SH_LOCALREF 縁取り赤                 ; stack:  0 ->  0 (0)
/* 00052b14 */ SH_LOCALREF 縁取り緑                 ; stack:  0 ->  0 (0)
/* 00052b1a */ SH_LOCALREF 縁取り青                 ; stack:  0 ->  0 (0)
/* 00052b20 */ SH_LOCALREF 縁取り幅                 ; stack:  0 ->  0 (0)
/* 00052b26 */ CALLHLL GUIEngine.SetCheckBoxFontProperty (args: 11) ; stack:  0 ->  0 (0)
/* 00052b30 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿チェックボックス＿フォント設定

; FUNC Ｐ＿チェックボックス＿フォント取得 (0x52b3e-0x52b8c)
/* 00052b3e */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00052b44 */ (SH_LOCALREFREF 1)                       ; stack:  0 ->  0 (0)
/* 00052b4a */ (SH_LOCALREFREF 3)                       ; stack:  0 ->  0 (0)
/* 00052b50 */ (SH_LOCALREFREF 5)                       ; stack:  0 ->  0 (0)
/* 00052b56 */ (SH_LOCALREFREF 7)                       ; stack:  0 ->  0 (0)
/* 00052b5c */ (SH_LOCALREFREF 9)                       ; stack:  0 ->  0 (0)
/* 00052b62 */ (SH_LOCALREFREF 11)                      ; stack:  0 ->  0 (0)
/* 00052b68 */ (SH_LOCALREFREF 15)                      ; stack:  0 ->  0 (0)
/* 00052b6e */ (SH_LOCALREFREF 17)                      ; stack:  0 ->  0 (0)
/* 00052b74 */ (SH_LOCALREFREF 19)                      ; stack:  0 ->  0 (0)
/* 00052b7a */ (SH_LOCALREFREF 13)                      ; stack:  0 ->  0 (0)
/* 00052b80 */ CALLHLL GUIEngine.GetCheckBoxFontProperty (args: 11) ; stack:  0 ->  0 (0)
/* 00052b8a */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿チェックボックス＿フォント取得

; FUNC Ｐ＿チェックボックス＿オンカーソル効果音番号設定 (0x52b98-0x52bb0)
/* 00052b98 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00052b9e */ SH_LOCALREF サウンド番号           ; stack:  0 ->  0 (0)
/* 00052ba4 */ CALLHLL GUIEngine.SetCheckBoxOnCursorSoundNumber (args: 2) ; stack:  0 ->  0 (0)
/* 00052bae */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿チェックボックス＿オンカーソル効果音番号設定

; FUNC Ｐ＿チェックボックス＿クリック効果音番号設定 (0x52bbc-0x52bd4)
/* 00052bbc */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00052bc2 */ SH_LOCALREF サウンド番号           ; stack:  0 ->  0 (0)
/* 00052bc8 */ CALLHLL GUIEngine.SetCheckBoxClickSoundNumber (args: 2) ; stack:  0 ->  0 (0)
/* 00052bd2 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿チェックボックス＿クリック効果音番号設定

; FUNC Ｐ＿チェックボックス＿オンカーソル効果音番号取得 (0x52be0-0x52bfa)
/* 00052be0 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00052be6 */ CALLHLL GUIEngine.GetCheckBoxOnCursorSoundNumber (args: 1) ; stack:  0 ->  0 (0)
/* 00052bf0 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00052bf2 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00052bf8 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿チェックボックス＿オンカーソル効果音番号取得

; FUNC Ｐ＿チェックボックス＿クリック効果音番号取得 (0x52c06-0x52c20)
/* 00052c06 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00052c0c */ CALLHLL GUIEngine.GetCheckBoxClickSoundNumber (args: 1) ; stack:  0 ->  0 (0)
/* 00052c16 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00052c18 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00052c1e */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿チェックボックス＿クリック効果音番号取得

; FUNC Ｐ＿チェックボックス＿ＣＧ名設定 (0x52c2c-0x52c44)
/* 00052c2c */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00052c32 */ (SH_LOCAL_S_REF 1)                       ; stack:  0 ->  0 (0)
/* 00052c38 */ CALLHLL GUIEngine.SetCheckBoxCGName (args: 2) ; stack:  0 ->  0 (0)
/* 00052c42 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿チェックボックス＿ＣＧ名設定

; FUNC Ｐ＿チェックボックス＿ＣＧ名取得 (0x52c50-0x52c82)
/* 00052c50 */ SH_LOCALREF Name                         ; stack:  0 ->  0 (0)
/* 00052c56 */ (SH_S_ASSIGN_STR0 0)                     ; stack:  0 ->  0 (0)
/* 00052c5c */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00052c62 */ SH_LOCALREF Name                         ; stack:  0 ->  0 (0)
/* 00052c68 */ CALLHLL GUIEngine.GetCheckBoxCGName (args: 2) ; stack:  0 ->  0 (0)
/* 00052c72 */ (SH_LOCAL_S_REF 1)                       ; stack:  0 ->  0 (0)
/* 00052c78 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00052c7a */ S_PUSH 0 ("")                            ; stack:  0 ->  1 (+1)
/* 00052c80 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿チェックボックス＿ＣＧ名取得

; FUNC Ｐ＿チェックボックス＿テキスト設定 (0x52c8e-0x52ca6)
/* 00052c8e */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00052c94 */ (SH_LOCAL_S_REF 1)                       ; stack:  0 ->  0 (0)
/* 00052c9a */ CALLHLL GUIEngine.SetCheckBoxText (args: 2) ; stack:  0 ->  0 (0)
/* 00052ca4 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿チェックボックス＿テキスト設定

; FUNC Ｐ＿チェックボックス＿テキスト取得 (0x52cb2-0x52ce4)
/* 00052cb2 */ SH_LOCALREF Text                         ; stack:  0 ->  0 (0)
/* 00052cb8 */ (SH_S_ASSIGN_STR0 0)                     ; stack:  0 ->  0 (0)
/* 00052cbe */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00052cc4 */ SH_LOCALREF Text                         ; stack:  0 ->  0 (0)
/* 00052cca */ CALLHLL GUIEngine.GetCheckBoxText (args: 2) ; stack:  0 ->  0 (0)
/* 00052cd4 */ (SH_LOCAL_S_REF 1)                       ; stack:  0 ->  0 (0)
/* 00052cda */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00052cdc */ S_PUSH 0 ("")                            ; stack:  0 ->  1 (+1)
/* 00052ce2 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿チェックボックス＿テキスト取得

