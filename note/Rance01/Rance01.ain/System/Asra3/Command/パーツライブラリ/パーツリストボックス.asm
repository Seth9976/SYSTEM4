; FUNC Ｐ＿リストボックス＿座標設定 (0x53d46-0x53d64)
/* 00053d46 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00053d4c */ SH_LOCALREF _Ｘ座標                   ; stack:  0 ->  0 (0)
/* 00053d52 */ SH_LOCALREF _Ｙ座標                   ; stack:  0 ->  0 (0)
/* 00053d58 */ CALLHLL GUIEngine.SetListBoxPos (args: 3) ; stack:  0 ->  0 (0)
/* 00053d62 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿リストボックス＿座標設定

; FUNC Ｐ＿リストボックス＿Ｚ座標設定 (0x53d70-0x53d88)
/* 00053d70 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00053d76 */ SH_LOCALREF _Ｚ座標                   ; stack:  0 ->  0 (0)
/* 00053d7c */ CALLHLL GUIEngine.SetListBoxZ (args: 2)  ; stack:  0 ->  0 (0)
/* 00053d86 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿リストボックス＿Ｚ座標設定

; FUNC Ｐ＿リストボックス＿Ｘ座標取得 (0x53d94-0x53dae)
/* 00053d94 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00053d9a */ CALLHLL GUIEngine.GetListBoxX (args: 1)  ; stack:  0 ->  0 (0)
/* 00053da4 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00053da6 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00053dac */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿リストボックス＿Ｘ座標取得

; FUNC Ｐ＿リストボックス＿Ｙ座標取得 (0x53dba-0x53dd4)
/* 00053dba */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00053dc0 */ CALLHLL GUIEngine.GetListBoxY (args: 1)  ; stack:  0 ->  0 (0)
/* 00053dca */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00053dcc */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00053dd2 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿リストボックス＿Ｙ座標取得

; FUNC Ｐ＿リストボックス＿Ｚ座標取得 (0x53de0-0x53dfa)
/* 00053de0 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00053de6 */ CALLHLL GUIEngine.GetListBoxZ (args: 1)  ; stack:  0 ->  0 (0)
/* 00053df0 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00053df2 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00053df8 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿リストボックス＿Ｚ座標取得

; FUNC Ｐ＿リストボックス＿サイズ設定 (0x53e06-0x53e34)
/* 00053e06 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00053e0c */ SH_LOCALREF 幅                          ; stack:  0 ->  0 (0)
/* 00053e12 */ CALLHLL GUIEngine.SetListBoxWidth (args: 2) ; stack:  0 ->  0 (0)
/* 00053e1c */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00053e22 */ SH_LOCALREF 高さ                       ; stack:  0 ->  0 (0)
/* 00053e28 */ CALLHLL GUIEngine.SetListBoxHeight (args: 2) ; stack:  0 ->  0 (0)
/* 00053e32 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿リストボックス＿サイズ設定

; FUNC Ｐ＿リストボックス＿行サイズ設定 (0x53e40-0x53e58)
/* 00053e40 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00053e46 */ SH_LOCALREF 高さ                       ; stack:  0 ->  0 (0)
/* 00053e4c */ CALLHLL GUIEngine.SetListBoxLineHeight (args: 2) ; stack:  0 ->  0 (0)
/* 00053e56 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿リストボックス＿行サイズ設定

; FUNC Ｐ＿リストボックス＿幅取得 (0x53e64-0x53e7e)
/* 00053e64 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00053e6a */ CALLHLL GUIEngine.GetListBoxWidth (args: 1) ; stack:  0 ->  0 (0)
/* 00053e74 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00053e76 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00053e7c */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿リストボックス＿幅取得

; FUNC Ｐ＿リストボックス＿高さ取得 (0x53e8a-0x53ea4)
/* 00053e8a */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00053e90 */ CALLHLL GUIEngine.GetListBoxHeight (args: 1) ; stack:  0 ->  0 (0)
/* 00053e9a */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00053e9c */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00053ea2 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿リストボックス＿高さ取得

; FUNC Ｐ＿リストボックス＿行サイズ取得 (0x53eb0-0x53eca)
/* 00053eb0 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00053eb6 */ CALLHLL GUIEngine.GetListBoxLineHeight (args: 1) ; stack:  0 ->  0 (0)
/* 00053ec0 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00053ec2 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00053ec8 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿リストボックス＿行サイズ取得

; FUNC Ｐ＿リストボックス＿マージン設定 (0x53ed6-0x53f04)
/* 00053ed6 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00053edc */ SH_LOCALREF 幅                          ; stack:  0 ->  0 (0)
/* 00053ee2 */ CALLHLL GUIEngine.SetListBoxWidthMargin (args: 2) ; stack:  0 ->  0 (0)
/* 00053eec */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00053ef2 */ SH_LOCALREF 高さ                       ; stack:  0 ->  0 (0)
/* 00053ef8 */ CALLHLL GUIEngine.SetListBoxHeightMargin (args: 2) ; stack:  0 ->  0 (0)
/* 00053f02 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿リストボックス＿マージン設定

; FUNC Ｐ＿リストボックス＿マージン幅取得 (0x53f10-0x53f2a)
/* 00053f10 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00053f16 */ CALLHLL GUIEngine.GetListBoxWidthMargin (args: 1) ; stack:  0 ->  0 (0)
/* 00053f20 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00053f22 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00053f28 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿リストボックス＿マージン幅取得

; FUNC Ｐ＿リストボックス＿マージン高さ取得 (0x53f36-0x53f50)
/* 00053f36 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00053f3c */ CALLHLL GUIEngine.GetListBoxHeightMargin (args: 1) ; stack:  0 ->  0 (0)
/* 00053f46 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00053f48 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00053f4e */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿リストボックス＿マージン高さ取得

; FUNC Ｐ＿リストボックス＿表示設定 (0x53f5c-0x53f74)
/* 00053f5c */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00053f62 */ SH_LOCALREF 表示                       ; stack:  0 ->  0 (0)
/* 00053f68 */ CALLHLL GUIEngine.SetListBoxShow (args: 2) ; stack:  0 ->  0 (0)
/* 00053f72 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿リストボックス＿表示設定

; FUNC Ｐ＿リストボックス＿表示設定取得 (0x53f80-0x53f9a)
/* 00053f80 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00053f86 */ CALLHLL GUIEngine.IsListBoxShow (args: 1) ; stack:  0 ->  0 (0)
/* 00053f90 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00053f92 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00053f98 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿リストボックス＿表示設定取得

; FUNC Ｐ＿リストボックス＿ＣＧ名設定 (0x53fa6-0x53fbe)
/* 00053fa6 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00053fac */ (SH_LOCAL_S_REF 1)                       ; stack:  0 ->  0 (0)
/* 00053fb2 */ CALLHLL GUIEngine.SetListBoxCGName (args: 2) ; stack:  0 ->  0 (0)
/* 00053fbc */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿リストボックス＿ＣＧ名設定

; FUNC Ｐ＿リストボックス＿ＣＧ名取得 (0x53fca-0x53ffc)
/* 00053fca */ SH_LOCALREF Name                         ; stack:  0 ->  0 (0)
/* 00053fd0 */ (SH_S_ASSIGN_STR0 0)                     ; stack:  0 ->  0 (0)
/* 00053fd6 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00053fdc */ SH_LOCALREF Name                         ; stack:  0 ->  0 (0)
/* 00053fe2 */ CALLHLL GUIEngine.GetListBoxCGName (args: 2) ; stack:  0 ->  0 (0)
/* 00053fec */ (SH_LOCAL_S_REF 1)                       ; stack:  0 ->  0 (0)
/* 00053ff2 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00053ff4 */ S_PUSH 0 ("")                            ; stack:  0 ->  1 (+1)
/* 00053ffa */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿リストボックス＿ＣＧ名取得

; FUNC Ｐ＿リストボックス＿スクロール位置設定 (0x54008-0x54020)
/* 00054008 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 0005400e */ SH_LOCALREF 位置                       ; stack:  0 ->  0 (0)
/* 00054014 */ CALLHLL GUIEngine.SetListBoxScrollPos (args: 2) ; stack:  0 ->  0 (0)
/* 0005401e */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿リストボックス＿スクロール位置設定

; FUNC Ｐ＿リストボックス＿スクロール位置取得 (0x5402c-0x54046)
/* 0005402c */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00054032 */ CALLHLL GUIEngine.GetListBoxScrollPos (args: 1) ; stack:  0 ->  0 (0)
/* 0005403c */ RETURN                                   ; stack:  0 ->  0 (0)
/* 0005403e */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00054044 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿リストボックス＿スクロール位置取得

; FUNC Ｐ＿リストボックス＿アイテム追加 (0x54052-0x5406a)
/* 00054052 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00054058 */ (SH_LOCAL_S_REF 1)                       ; stack:  0 ->  0 (0)
/* 0005405e */ CALLHLL GUIEngine.AddListBoxItem (args: 2) ; stack:  0 ->  0 (0)
/* 00054068 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿リストボックス＿アイテム追加

; FUNC Ｐ＿リストボックス＿アイテム設定 (0x54076-0x54094)
/* 00054076 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 0005407c */ SH_LOCALREF インデックス           ; stack:  0 ->  0 (0)
/* 00054082 */ (SH_LOCAL_S_REF 2)                       ; stack:  0 ->  0 (0)
/* 00054088 */ CALLHLL GUIEngine.SetListBoxItem (args: 3) ; stack:  0 ->  0 (0)
/* 00054092 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿リストボックス＿アイテム設定

; FUNC Ｐ＿リストボックス＿アイテム数取得 (0x540a0-0x540ba)
/* 000540a0 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 000540a6 */ CALLHLL GUIEngine.GetListBoxItemCount (args: 1) ; stack:  0 ->  0 (0)
/* 000540b0 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 000540b2 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 000540b8 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿リストボックス＿アイテム数取得

; FUNC Ｐ＿リストボックス＿アイテム取得 (0x540c6-0x540fe)
/* 000540c6 */ SH_LOCALREF Text                         ; stack:  0 ->  0 (0)
/* 000540cc */ (SH_S_ASSIGN_STR0 0)                     ; stack:  0 ->  0 (0)
/* 000540d2 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 000540d8 */ SH_LOCALREF インデックス           ; stack:  0 ->  0 (0)
/* 000540de */ SH_LOCALREF Text                         ; stack:  0 ->  0 (0)
/* 000540e4 */ CALLHLL GUIEngine.GetListBoxItem (args: 3) ; stack:  0 ->  0 (0)
/* 000540ee */ (SH_LOCAL_S_REF 2)                       ; stack:  0 ->  0 (0)
/* 000540f4 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 000540f6 */ S_PUSH 0 ("")                            ; stack:  0 ->  1 (+1)
/* 000540fc */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿リストボックス＿アイテム取得

; FUNC Ｐ＿リストボックス＿アイテム削除 (0x5410a-0x54122)
/* 0005410a */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00054110 */ SH_LOCALREF インデックス           ; stack:  0 ->  0 (0)
/* 00054116 */ CALLHLL GUIEngine.EraseListBoxItem (args: 2) ; stack:  0 ->  0 (0)
/* 00054120 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿リストボックス＿アイテム削除

; FUNC Ｐ＿リストボックス＿アイテム全削除 (0x5412e-0x54140)
/* 0005412e */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00054134 */ CALLHLL GUIEngine.ClearListBoxItem (args: 1) ; stack:  0 ->  0 (0)
/* 0005413e */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿リストボックス＿アイテム全削除

; FUNC Ｐ＿リストボックス＿フォント設定 (0x5414c-0x5419a)
/* 0005414c */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00054152 */ SH_LOCALREF 種類                       ; stack:  0 ->  0 (0)
/* 00054158 */ SH_LOCALREF サイズ                    ; stack:  0 ->  0 (0)
/* 0005415e */ SH_LOCALREF 赤                          ; stack:  0 ->  0 (0)
/* 00054164 */ SH_LOCALREF 緑                          ; stack:  0 ->  0 (0)
/* 0005416a */ SH_LOCALREF 青                          ; stack:  0 ->  0 (0)
/* 00054170 */ SH_LOCALREF 太字幅                    ; stack:  0 ->  0 (0)
/* 00054176 */ SH_LOCALREF 縁取り赤                 ; stack:  0 ->  0 (0)
/* 0005417c */ SH_LOCALREF 縁取り緑                 ; stack:  0 ->  0 (0)
/* 00054182 */ SH_LOCALREF 縁取り青                 ; stack:  0 ->  0 (0)
/* 00054188 */ SH_LOCALREF 縁取り幅                 ; stack:  0 ->  0 (0)
/* 0005418e */ CALLHLL GUIEngine.SetListBoxFontProperty (args: 11) ; stack:  0 ->  0 (0)
/* 00054198 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿リストボックス＿フォント設定

; FUNC Ｐ＿リストボックス＿フォント取得 (0x541a6-0x541f4)
/* 000541a6 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 000541ac */ (SH_LOCALREFREF 1)                       ; stack:  0 ->  0 (0)
/* 000541b2 */ (SH_LOCALREFREF 3)                       ; stack:  0 ->  0 (0)
/* 000541b8 */ (SH_LOCALREFREF 5)                       ; stack:  0 ->  0 (0)
/* 000541be */ (SH_LOCALREFREF 7)                       ; stack:  0 ->  0 (0)
/* 000541c4 */ (SH_LOCALREFREF 9)                       ; stack:  0 ->  0 (0)
/* 000541ca */ (SH_LOCALREFREF 11)                      ; stack:  0 ->  0 (0)
/* 000541d0 */ (SH_LOCALREFREF 15)                      ; stack:  0 ->  0 (0)
/* 000541d6 */ (SH_LOCALREFREF 17)                      ; stack:  0 ->  0 (0)
/* 000541dc */ (SH_LOCALREFREF 19)                      ; stack:  0 ->  0 (0)
/* 000541e2 */ (SH_LOCALREFREF 13)                      ; stack:  0 ->  0 (0)
/* 000541e8 */ CALLHLL GUIEngine.GetListBoxFontProperty (args: 11) ; stack:  0 ->  0 (0)
/* 000541f2 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿リストボックス＿フォント取得

; FUNC Ｐ＿リストボックス＿選択位置設定 (0x54200-0x54218)
/* 00054200 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00054206 */ SH_LOCALREF 位置                       ; stack:  0 ->  0 (0)
/* 0005420c */ CALLHLL GUIEngine.SetListBoxSelectIndex (args: 2) ; stack:  0 ->  0 (0)
/* 00054216 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿リストボックス＿選択位置設定

; FUNC Ｐ＿リストボックス＿選択位置取得 (0x54224-0x5423e)
/* 00054224 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 0005422a */ CALLHLL GUIEngine.GetListBoxSelectIndex (args: 1) ; stack:  0 ->  0 (0)
/* 00054234 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00054236 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 0005423c */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿リストボックス＿選択位置取得

