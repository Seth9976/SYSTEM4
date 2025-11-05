; FUNC Ｐ＿コンボボックス＿座標設定 (0x54250-0x5426e)
/* 00054250 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00054256 */ SH_LOCALREF _Ｘ座標                   ; stack:  0 ->  0 (0)
/* 0005425c */ SH_LOCALREF _Ｙ座標                   ; stack:  0 ->  0 (0)
/* 00054262 */ CALLHLL GUIEngine.SetComboBoxPos (args: 3) ; stack:  0 ->  0 (0)
/* 0005426c */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿コンボボックス＿座標設定

; FUNC Ｐ＿コンボボックス＿Ｚ座標設定 (0x5427a-0x54292)
/* 0005427a */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00054280 */ SH_LOCALREF _Ｚ座標                   ; stack:  0 ->  0 (0)
/* 00054286 */ CALLHLL GUIEngine.SetComboBoxZ (args: 2) ; stack:  0 ->  0 (0)
/* 00054290 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿コンボボックス＿Ｚ座標設定

; FUNC Ｐ＿コンボボックス＿Ｘ座標取得 (0x5429e-0x542b8)
/* 0005429e */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 000542a4 */ CALLHLL GUIEngine.GetComboBoxX (args: 1) ; stack:  0 ->  0 (0)
/* 000542ae */ RETURN                                   ; stack:  0 ->  0 (0)
/* 000542b0 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 000542b6 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿コンボボックス＿Ｘ座標取得

; FUNC Ｐ＿コンボボックス＿Ｙ座標取得 (0x542c4-0x542de)
/* 000542c4 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 000542ca */ CALLHLL GUIEngine.GetComboBoxY (args: 1) ; stack:  0 ->  0 (0)
/* 000542d4 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 000542d6 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 000542dc */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿コンボボックス＿Ｙ座標取得

; FUNC Ｐ＿コンボボックス＿Ｚ座標取得 (0x542ea-0x54304)
/* 000542ea */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 000542f0 */ CALLHLL GUIEngine.GetComboBoxZ (args: 1) ; stack:  0 ->  0 (0)
/* 000542fa */ RETURN                                   ; stack:  0 ->  0 (0)
/* 000542fc */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00054302 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿コンボボックス＿Ｚ座標取得

; FUNC Ｐ＿コンボボックス＿サイズ設定 (0x54310-0x5433e)
/* 00054310 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00054316 */ SH_LOCALREF 幅                          ; stack:  0 ->  0 (0)
/* 0005431c */ CALLHLL GUIEngine.SetComboBoxWidth (args: 2) ; stack:  0 ->  0 (0)
/* 00054326 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 0005432c */ SH_LOCALREF 高さ                       ; stack:  0 ->  0 (0)
/* 00054332 */ CALLHLL GUIEngine.SetComboBoxHeight (args: 2) ; stack:  0 ->  0 (0)
/* 0005433c */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿コンボボックス＿サイズ設定

; FUNC Ｐ＿コンボボックス＿幅取得 (0x5434a-0x54364)
/* 0005434a */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00054350 */ CALLHLL GUIEngine.GetComboBoxWidth (args: 1) ; stack:  0 ->  0 (0)
/* 0005435a */ RETURN                                   ; stack:  0 ->  0 (0)
/* 0005435c */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00054362 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿コンボボックス＿幅取得

; FUNC Ｐ＿コンボボックス＿高さ取得 (0x54370-0x5438a)
/* 00054370 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00054376 */ CALLHLL GUIEngine.GetComboBoxHeight (args: 1) ; stack:  0 ->  0 (0)
/* 00054380 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00054382 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00054388 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿コンボボックス＿高さ取得

; FUNC Ｐ＿コンボボックス＿ボックスマージン設定 (0x54396-0x543c4)
/* 00054396 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 0005439c */ SH_LOCALREF 幅                          ; stack:  0 ->  0 (0)
/* 000543a2 */ CALLHLL GUIEngine.SetComboBoxTextWidthMargin (args: 2) ; stack:  0 ->  0 (0)
/* 000543ac */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 000543b2 */ SH_LOCALREF 高さ                       ; stack:  0 ->  0 (0)
/* 000543b8 */ CALLHLL GUIEngine.SetComboBoxTextHeightMargin (args: 2) ; stack:  0 ->  0 (0)
/* 000543c2 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿コンボボックス＿ボックスマージン設定

; FUNC Ｐ＿コンボボックス＿ボックスマージン幅取得 (0x543d0-0x543ea)
/* 000543d0 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 000543d6 */ CALLHLL GUIEngine.GetComboBoxTextWidthMargin (args: 1) ; stack:  0 ->  0 (0)
/* 000543e0 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 000543e2 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 000543e8 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿コンボボックス＿ボックスマージン幅取得

; FUNC Ｐ＿コンボボックス＿ボックスマージン高さ取得 (0x543f6-0x54410)
/* 000543f6 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 000543fc */ CALLHLL GUIEngine.GetComboBoxTextHeightMargin (args: 1) ; stack:  0 ->  0 (0)
/* 00054406 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00054408 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 0005440e */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿コンボボックス＿ボックスマージン高さ取得

; FUNC Ｐ＿コンボボックス＿表示設定 (0x5441c-0x54434)
/* 0005441c */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00054422 */ SH_LOCALREF 表示                       ; stack:  0 ->  0 (0)
/* 00054428 */ CALLHLL GUIEngine.SetComboBoxShow (args: 2) ; stack:  0 ->  0 (0)
/* 00054432 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿コンボボックス＿表示設定

; FUNC Ｐ＿コンボボックス＿表示設定取得 (0x54440-0x5445a)
/* 00054440 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00054446 */ CALLHLL GUIEngine.IsComboBoxShow (args: 1) ; stack:  0 ->  0 (0)
/* 00054450 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00054452 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00054458 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿コンボボックス＿表示設定取得

; FUNC Ｐ＿コンボボックス＿背景ＣＧ名設定 (0x54466-0x5447e)
/* 00054466 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 0005446c */ (SH_LOCAL_S_REF 1)                       ; stack:  0 ->  0 (0)
/* 00054472 */ CALLHLL GUIEngine.SetComboBoxCGName (args: 2) ; stack:  0 ->  0 (0)
/* 0005447c */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿コンボボックス＿背景ＣＧ名設定

; FUNC Ｐ＿コンボボックス＿背景ＣＧ名取得 (0x5448a-0x544bc)
/* 0005448a */ SH_LOCALREF Name                         ; stack:  0 ->  0 (0)
/* 00054490 */ (SH_S_ASSIGN_STR0 0)                     ; stack:  0 ->  0 (0)
/* 00054496 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 0005449c */ SH_LOCALREF Name                         ; stack:  0 ->  0 (0)
/* 000544a2 */ CALLHLL GUIEngine.GetComboBoxCGName (args: 2) ; stack:  0 ->  0 (0)
/* 000544ac */ (SH_LOCAL_S_REF 1)                       ; stack:  0 ->  0 (0)
/* 000544b2 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 000544b4 */ S_PUSH 0 ("")                            ; stack:  0 ->  1 (+1)
/* 000544ba */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿コンボボックス＿背景ＣＧ名取得

; FUNC Ｐ＿コンボボックス＿テキスト設定 (0x544c8-0x544e0)
/* 000544c8 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 000544ce */ (SH_LOCAL_S_REF 1)                       ; stack:  0 ->  0 (0)
/* 000544d4 */ CALLHLL GUIEngine.SetComboBoxText (args: 2) ; stack:  0 ->  0 (0)
/* 000544de */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿コンボボックス＿テキスト設定

; FUNC Ｐ＿コンボボックス＿テキスト取得 (0x544ec-0x5451e)
/* 000544ec */ SH_LOCALREF Text                         ; stack:  0 ->  0 (0)
/* 000544f2 */ (SH_S_ASSIGN_STR0 0)                     ; stack:  0 ->  0 (0)
/* 000544f8 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 000544fe */ SH_LOCALREF Text                         ; stack:  0 ->  0 (0)
/* 00054504 */ CALLHLL GUIEngine.GetComboBoxText (args: 2) ; stack:  0 ->  0 (0)
/* 0005450e */ (SH_LOCAL_S_REF 1)                       ; stack:  0 ->  0 (0)
/* 00054514 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00054516 */ S_PUSH 0 ("")                            ; stack:  0 ->  1 (+1)
/* 0005451c */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿コンボボックス＿テキスト取得

; FUNC Ｐ＿コンボボックス＿フォント設定 (0x5452a-0x54578)
/* 0005452a */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00054530 */ SH_LOCALREF 種類                       ; stack:  0 ->  0 (0)
/* 00054536 */ SH_LOCALREF サイズ                    ; stack:  0 ->  0 (0)
/* 0005453c */ SH_LOCALREF 赤                          ; stack:  0 ->  0 (0)
/* 00054542 */ SH_LOCALREF 緑                          ; stack:  0 ->  0 (0)
/* 00054548 */ SH_LOCALREF 青                          ; stack:  0 ->  0 (0)
/* 0005454e */ SH_LOCALREF 太字幅                    ; stack:  0 ->  0 (0)
/* 00054554 */ SH_LOCALREF 縁取り赤                 ; stack:  0 ->  0 (0)
/* 0005455a */ SH_LOCALREF 縁取り緑                 ; stack:  0 ->  0 (0)
/* 00054560 */ SH_LOCALREF 縁取り青                 ; stack:  0 ->  0 (0)
/* 00054566 */ SH_LOCALREF 縁取り幅                 ; stack:  0 ->  0 (0)
/* 0005456c */ CALLHLL GUIEngine.SetComboBoxFontProperty (args: 11) ; stack:  0 ->  0 (0)
/* 00054576 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿コンボボックス＿フォント設定

; FUNC Ｐ＿コンボボックス＿フォント取得 (0x54584-0x545d2)
/* 00054584 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 0005458a */ (SH_LOCALREFREF 1)                       ; stack:  0 ->  0 (0)
/* 00054590 */ (SH_LOCALREFREF 3)                       ; stack:  0 ->  0 (0)
/* 00054596 */ (SH_LOCALREFREF 5)                       ; stack:  0 ->  0 (0)
/* 0005459c */ (SH_LOCALREFREF 7)                       ; stack:  0 ->  0 (0)
/* 000545a2 */ (SH_LOCALREFREF 9)                       ; stack:  0 ->  0 (0)
/* 000545a8 */ (SH_LOCALREFREF 11)                      ; stack:  0 ->  0 (0)
/* 000545ae */ (SH_LOCALREFREF 15)                      ; stack:  0 ->  0 (0)
/* 000545b4 */ (SH_LOCALREFREF 17)                      ; stack:  0 ->  0 (0)
/* 000545ba */ (SH_LOCALREFREF 19)                      ; stack:  0 ->  0 (0)
/* 000545c0 */ (SH_LOCALREFREF 13)                      ; stack:  0 ->  0 (0)
/* 000545c6 */ CALLHLL GUIEngine.GetComboBoxFontProperty (args: 11) ; stack:  0 ->  0 (0)
/* 000545d0 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿コンボボックス＿フォント取得

