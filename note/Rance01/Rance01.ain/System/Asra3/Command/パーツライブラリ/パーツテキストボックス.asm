; FUNC Ｐ＿テキストボックス＿座標設定 (0x5392c-0x5394a)
/* 0005392c */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00053932 */ SH_LOCALREF _Ｘ座標                   ; stack:  0 ->  0 (0)
/* 00053938 */ SH_LOCALREF _Ｙ座標                   ; stack:  0 ->  0 (0)
/* 0005393e */ CALLHLL GUIEngine.SetTextBoxPos (args: 3) ; stack:  0 ->  0 (0)
/* 00053948 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿テキストボックス＿座標設定

; FUNC Ｐ＿テキストボックス＿Ｚ座標設定 (0x53956-0x5396e)
/* 00053956 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 0005395c */ SH_LOCALREF _Ｚ座標                   ; stack:  0 ->  0 (0)
/* 00053962 */ CALLHLL GUIEngine.SetTextBoxZ (args: 2)  ; stack:  0 ->  0 (0)
/* 0005396c */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿テキストボックス＿Ｚ座標設定

; FUNC Ｐ＿テキストボックス＿Ｘ座標取得 (0x5397a-0x53994)
/* 0005397a */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00053980 */ CALLHLL GUIEngine.GetTextBoxX (args: 1)  ; stack:  0 ->  0 (0)
/* 0005398a */ RETURN                                   ; stack:  0 ->  0 (0)
/* 0005398c */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00053992 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿テキストボックス＿Ｘ座標取得

; FUNC Ｐ＿テキストボックス＿Ｙ座標取得 (0x539a0-0x539ba)
/* 000539a0 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 000539a6 */ CALLHLL GUIEngine.GetTextBoxY (args: 1)  ; stack:  0 ->  0 (0)
/* 000539b0 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 000539b2 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 000539b8 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿テキストボックス＿Ｙ座標取得

; FUNC Ｐ＿テキストボックス＿Ｚ座標取得 (0x539c6-0x539e0)
/* 000539c6 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 000539cc */ CALLHLL GUIEngine.GetTextBoxZ (args: 1)  ; stack:  0 ->  0 (0)
/* 000539d6 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 000539d8 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 000539de */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿テキストボックス＿Ｚ座標取得

; FUNC Ｐ＿テキストボックス＿サイズ設定 (0x539ec-0x53a1a)
/* 000539ec */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 000539f2 */ SH_LOCALREF 幅                          ; stack:  0 ->  0 (0)
/* 000539f8 */ CALLHLL GUIEngine.SetTextBoxWidth (args: 2) ; stack:  0 ->  0 (0)
/* 00053a02 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00053a08 */ SH_LOCALREF 高さ                       ; stack:  0 ->  0 (0)
/* 00053a0e */ CALLHLL GUIEngine.SetTextBoxHeight (args: 2) ; stack:  0 ->  0 (0)
/* 00053a18 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿テキストボックス＿サイズ設定

; FUNC Ｐ＿テキストボックス＿幅取得 (0x53a26-0x53a40)
/* 00053a26 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00053a2c */ CALLHLL GUIEngine.GetTextBoxWidth (args: 1) ; stack:  0 ->  0 (0)
/* 00053a36 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00053a38 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00053a3e */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿テキストボックス＿幅取得

; FUNC Ｐ＿テキストボックス＿高さ取得 (0x53a4c-0x53a66)
/* 00053a4c */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00053a52 */ CALLHLL GUIEngine.GetTextBoxHeight (args: 1) ; stack:  0 ->  0 (0)
/* 00053a5c */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00053a5e */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00053a64 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿テキストボックス＿高さ取得

; FUNC Ｐ＿テキストボックス＿表示設定 (0x53a72-0x53a8a)
/* 00053a72 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00053a78 */ SH_LOCALREF 表示                       ; stack:  0 ->  0 (0)
/* 00053a7e */ CALLHLL GUIEngine.SetTextBoxShow (args: 2) ; stack:  0 ->  0 (0)
/* 00053a88 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿テキストボックス＿表示設定

; FUNC Ｐ＿テキストボックス＿表示設定取得 (0x53a96-0x53ab0)
/* 00053a96 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00053a9c */ CALLHLL GUIEngine.IsTextBoxShow (args: 1) ; stack:  0 ->  0 (0)
/* 00053aa6 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00053aa8 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00053aae */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿テキストボックス＿表示設定取得

; FUNC Ｐ＿テキストボックス＿フォント設定 (0x53abc-0x53b0a)
/* 00053abc */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00053ac2 */ SH_LOCALREF 種類                       ; stack:  0 ->  0 (0)
/* 00053ac8 */ SH_LOCALREF サイズ                    ; stack:  0 ->  0 (0)
/* 00053ace */ SH_LOCALREF 赤                          ; stack:  0 ->  0 (0)
/* 00053ad4 */ SH_LOCALREF 緑                          ; stack:  0 ->  0 (0)
/* 00053ada */ SH_LOCALREF 青                          ; stack:  0 ->  0 (0)
/* 00053ae0 */ SH_LOCALREF 太字幅                    ; stack:  0 ->  0 (0)
/* 00053ae6 */ SH_LOCALREF 縁取り赤                 ; stack:  0 ->  0 (0)
/* 00053aec */ SH_LOCALREF 縁取り緑                 ; stack:  0 ->  0 (0)
/* 00053af2 */ SH_LOCALREF 縁取り青                 ; stack:  0 ->  0 (0)
/* 00053af8 */ SH_LOCALREF 縁取り幅                 ; stack:  0 ->  0 (0)
/* 00053afe */ CALLHLL GUIEngine.SetTextBoxFontProperty (args: 11) ; stack:  0 ->  0 (0)
/* 00053b08 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿テキストボックス＿フォント設定

; FUNC Ｐ＿テキストボックス＿フォント取得 (0x53b16-0x53b64)
/* 00053b16 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00053b1c */ (SH_LOCALREFREF 1)                       ; stack:  0 ->  0 (0)
/* 00053b22 */ (SH_LOCALREFREF 3)                       ; stack:  0 ->  0 (0)
/* 00053b28 */ (SH_LOCALREFREF 5)                       ; stack:  0 ->  0 (0)
/* 00053b2e */ (SH_LOCALREFREF 7)                       ; stack:  0 ->  0 (0)
/* 00053b34 */ (SH_LOCALREFREF 9)                       ; stack:  0 ->  0 (0)
/* 00053b3a */ (SH_LOCALREFREF 11)                      ; stack:  0 ->  0 (0)
/* 00053b40 */ (SH_LOCALREFREF 15)                      ; stack:  0 ->  0 (0)
/* 00053b46 */ (SH_LOCALREFREF 17)                      ; stack:  0 ->  0 (0)
/* 00053b4c */ (SH_LOCALREFREF 19)                      ; stack:  0 ->  0 (0)
/* 00053b52 */ (SH_LOCALREFREF 13)                      ; stack:  0 ->  0 (0)
/* 00053b58 */ CALLHLL GUIEngine.GetTextBoxFontProperty (args: 11) ; stack:  0 ->  0 (0)
/* 00053b62 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿テキストボックス＿フォント取得

; FUNC Ｐ＿テキストボックス＿テキスト設定 (0x53b70-0x53b88)
/* 00053b70 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00053b76 */ (SH_LOCAL_S_REF 1)                       ; stack:  0 ->  0 (0)
/* 00053b7c */ CALLHLL GUIEngine.SetTextBoxText (args: 2) ; stack:  0 ->  0 (0)
/* 00053b86 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿テキストボックス＿テキスト設定

; FUNC Ｐ＿テキストボックス＿テキスト取得 (0x53b94-0x53bc6)
/* 00053b94 */ SH_LOCALREF Text                         ; stack:  0 ->  0 (0)
/* 00053b9a */ (SH_S_ASSIGN_STR0 0)                     ; stack:  0 ->  0 (0)
/* 00053ba0 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00053ba6 */ SH_LOCALREF Text                         ; stack:  0 ->  0 (0)
/* 00053bac */ CALLHLL GUIEngine.GetTextBoxText (args: 2) ; stack:  0 ->  0 (0)
/* 00053bb6 */ (SH_LOCAL_S_REF 1)                       ; stack:  0 ->  0 (0)
/* 00053bbc */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00053bbe */ S_PUSH 0 ("")                            ; stack:  0 ->  1 (+1)
/* 00053bc4 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿テキストボックス＿テキスト取得

; FUNC Ｐ＿テキストボックス＿最大文字数設定 (0x53bd2-0x53bea)
/* 00053bd2 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00053bd8 */ SH_LOCALREF 最大文字数              ; stack:  0 ->  0 (0)
/* 00053bde */ CALLHLL GUIEngine.SetTextBoxMaxTextLength (args: 2) ; stack:  0 ->  0 (0)
/* 00053be8 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿テキストボックス＿最大文字数設定

; FUNC Ｐ＿テキストボックス＿最大文字数取得 (0x53bf6-0x53c10)
/* 00053bf6 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00053bfc */ CALLHLL GUIEngine.GetTextBoxMaxTextLength (args: 1) ; stack:  0 ->  0 (0)
/* 00053c06 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00053c08 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00053c0e */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿テキストボックス＿最大文字数取得

; FUNC Ｐ＿テキストボックス＿選択色設定 (0x53c1c-0x53c60)
/* 00053c1c */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00053c22 */ SH_LOCALREF 赤                          ; stack:  0 ->  0 (0)
/* 00053c28 */ CALLHLL GUIEngine.SetTextBoxSelectR (args: 2) ; stack:  0 ->  0 (0)
/* 00053c32 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00053c38 */ SH_LOCALREF 緑                          ; stack:  0 ->  0 (0)
/* 00053c3e */ CALLHLL GUIEngine.SetTextBoxSelectG (args: 2) ; stack:  0 ->  0 (0)
/* 00053c48 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00053c4e */ SH_LOCALREF 青                          ; stack:  0 ->  0 (0)
/* 00053c54 */ CALLHLL GUIEngine.SetTextBoxSelectB (args: 2) ; stack:  0 ->  0 (0)
/* 00053c5e */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿テキストボックス＿選択色設定

; FUNC Ｐ＿テキストボックス＿選択色赤取得 (0x53c6c-0x53c86)
/* 00053c6c */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00053c72 */ CALLHLL GUIEngine.GetTextBoxSelectR (args: 1) ; stack:  0 ->  0 (0)
/* 00053c7c */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00053c7e */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00053c84 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿テキストボックス＿選択色赤取得

; FUNC Ｐ＿テキストボックス＿選択色緑取得 (0x53c92-0x53cac)
/* 00053c92 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00053c98 */ CALLHLL GUIEngine.GetTextBoxSelectG (args: 1) ; stack:  0 ->  0 (0)
/* 00053ca2 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00053ca4 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00053caa */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿テキストボックス＿選択色緑取得

; FUNC Ｐ＿テキストボックス＿選択色青取得 (0x53cb8-0x53cd2)
/* 00053cb8 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00053cbe */ CALLHLL GUIEngine.GetTextBoxSelectB (args: 1) ; stack:  0 ->  0 (0)
/* 00053cc8 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00053cca */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00053cd0 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿テキストボックス＿選択色青取得

; FUNC Ｐ＿テキストボックス＿背景ＣＧ設定 (0x53cde-0x53cf6)
/* 00053cde */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00053ce4 */ (SH_LOCAL_S_REF 1)                       ; stack:  0 ->  0 (0)
/* 00053cea */ CALLHLL GUIEngine.SetTextBoxCGName (args: 2) ; stack:  0 ->  0 (0)
/* 00053cf4 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿テキストボックス＿背景ＣＧ設定

; FUNC Ｐ＿テキストボックス＿背景ＣＧ取得 (0x53d02-0x53d34)
/* 00053d02 */ SH_LOCALREF Name                         ; stack:  0 ->  0 (0)
/* 00053d08 */ (SH_S_ASSIGN_STR0 0)                     ; stack:  0 ->  0 (0)
/* 00053d0e */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00053d14 */ SH_LOCALREF Name                         ; stack:  0 ->  0 (0)
/* 00053d1a */ CALLHLL GUIEngine.GetTextBoxCGName (args: 2) ; stack:  0 ->  0 (0)
/* 00053d24 */ (SH_LOCAL_S_REF 1)                       ; stack:  0 ->  0 (0)
/* 00053d2a */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00053d2c */ S_PUSH 0 ("")                            ; stack:  0 ->  1 (+1)
/* 00053d32 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿テキストボックス＿背景ＣＧ取得

