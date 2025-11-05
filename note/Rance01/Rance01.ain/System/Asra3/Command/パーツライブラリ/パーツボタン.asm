; FUNC Ｐ＿ボタン＿座標設定 (0x51e62-0x51e80)
/* 00051e62 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00051e68 */ SH_LOCALREF _Ｘ座標                   ; stack:  0 ->  0 (0)
/* 00051e6e */ SH_LOCALREF _Ｙ座標                   ; stack:  0 ->  0 (0)
/* 00051e74 */ CALLHLL GUIEngine.SetButtonPos (args: 3) ; stack:  0 ->  0 (0)
/* 00051e7e */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿ボタン＿座標設定

; FUNC Ｐ＿ボタン＿Ｚ座標設定 (0x51e8c-0x51ea4)
/* 00051e8c */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00051e92 */ SH_LOCALREF _Ｚ座標                   ; stack:  0 ->  0 (0)
/* 00051e98 */ CALLHLL GUIEngine.SetButtonZ (args: 2)   ; stack:  0 ->  0 (0)
/* 00051ea2 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿ボタン＿Ｚ座標設定

; FUNC Ｐ＿ボタン＿Ｘ座標取得 (0x51eb0-0x51eca)
/* 00051eb0 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00051eb6 */ CALLHLL GUIEngine.GetButtonX (args: 1)   ; stack:  0 ->  0 (0)
/* 00051ec0 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00051ec2 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00051ec8 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿ボタン＿Ｘ座標取得

; FUNC Ｐ＿ボタン＿Ｙ座標取得 (0x51ed6-0x51ef0)
/* 00051ed6 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00051edc */ CALLHLL GUIEngine.GetButtonY (args: 1)   ; stack:  0 ->  0 (0)
/* 00051ee6 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00051ee8 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00051eee */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿ボタン＿Ｙ座標取得

; FUNC Ｐ＿ボタン＿Ｚ座標取得 (0x51efc-0x51f16)
/* 00051efc */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00051f02 */ CALLHLL GUIEngine.GetButtonZ (args: 1)   ; stack:  0 ->  0 (0)
/* 00051f0c */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00051f0e */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00051f14 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿ボタン＿Ｚ座標取得

; FUNC Ｐ＿ボタン＿サイズ設定 (0x51f22-0x51f50)
/* 00051f22 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00051f28 */ SH_LOCALREF 幅                          ; stack:  0 ->  0 (0)
/* 00051f2e */ CALLHLL GUIEngine.SetButtonWidth (args: 2) ; stack:  0 ->  0 (0)
/* 00051f38 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00051f3e */ SH_LOCALREF 高さ                       ; stack:  0 ->  0 (0)
/* 00051f44 */ CALLHLL GUIEngine.SetButtonHeight (args: 2) ; stack:  0 ->  0 (0)
/* 00051f4e */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿ボタン＿サイズ設定

; FUNC Ｐ＿ボタン＿幅取得 (0x51f5c-0x51f76)
/* 00051f5c */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00051f62 */ CALLHLL GUIEngine.GetButtonWidth (args: 1) ; stack:  0 ->  0 (0)
/* 00051f6c */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00051f6e */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00051f74 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿ボタン＿幅取得

; FUNC Ｐ＿ボタン＿高さ取得 (0x51f82-0x51f9c)
/* 00051f82 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00051f88 */ CALLHLL GUIEngine.GetButtonHeight (args: 1) ; stack:  0 ->  0 (0)
/* 00051f92 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00051f94 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00051f9a */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿ボタン＿高さ取得

; FUNC Ｐ＿ボタン＿表示設定 (0x51fa8-0x51fc0)
/* 00051fa8 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00051fae */ SH_LOCALREF 表示                       ; stack:  0 ->  0 (0)
/* 00051fb4 */ CALLHLL GUIEngine.SetButtonShow (args: 2) ; stack:  0 ->  0 (0)
/* 00051fbe */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿ボタン＿表示設定

; FUNC Ｐ＿ボタン＿表示設定取得 (0x51fcc-0x51fe6)
/* 00051fcc */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00051fd2 */ CALLHLL GUIEngine.IsButtonShow (args: 1) ; stack:  0 ->  0 (0)
/* 00051fdc */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00051fde */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00051fe4 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿ボタン＿表示設定取得

; FUNC Ｐ＿ボタン＿ドラッグ設定 (0x51ff2-0x5200a)
/* 00051ff2 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00051ff8 */ SH_LOCALREF ドラッグ                 ; stack:  0 ->  0 (0)
/* 00051ffe */ CALLHLL GUIEngine.SetButtonDrag (args: 2) ; stack:  0 ->  0 (0)
/* 00052008 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿ボタン＿ドラッグ設定

; FUNC Ｐ＿ボタン＿ドラッグ設定取得 (0x52016-0x52030)
/* 00052016 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 0005201c */ CALLHLL GUIEngine.IsButtonDrag (args: 1) ; stack:  0 ->  0 (0)
/* 00052026 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00052028 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 0005202e */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿ボタン＿ドラッグ設定取得

; FUNC Ｐ＿ボタン＿有効設定 (0x5203c-0x52054)
/* 0005203c */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00052042 */ SH_LOCALREF 有効                       ; stack:  0 ->  0 (0)
/* 00052048 */ CALLHLL GUIEngine.SetButtonEnable (args: 2) ; stack:  0 ->  0 (0)
/* 00052052 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿ボタン＿有効設定

; FUNC Ｐ＿ボタン＿有効設定取得 (0x52060-0x5207a)
/* 00052060 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00052066 */ CALLHLL GUIEngine.IsButtonEnable (args: 1) ; stack:  0 ->  0 (0)
/* 00052070 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00052072 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00052078 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿ボタン＿有効設定取得

; FUNC Ｐ＿ボタン＿ピクセル判定設定 (0x52086-0x5209e)
/* 00052086 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 0005208c */ SH_LOCALREF ピクセル判定           ; stack:  0 ->  0 (0)
/* 00052092 */ CALLHLL GUIEngine.SetButtonPixelDecide (args: 2) ; stack:  0 ->  0 (0)
/* 0005209c */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿ボタン＿ピクセル判定設定

; FUNC Ｐ＿ボタン＿ピクセル判定設定取得 (0x520aa-0x520c4)
/* 000520aa */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 000520b0 */ CALLHLL GUIEngine.IsButtonPixelDecide (args: 1) ; stack:  0 ->  0 (0)
/* 000520ba */ RETURN                                   ; stack:  0 ->  0 (0)
/* 000520bc */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 000520c2 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿ボタン＿ピクセル判定設定取得

; FUNC Ｐ＿ボタン＿色設定 (0x520d0-0x52114)
/* 000520d0 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 000520d6 */ SH_LOCALREF 赤                          ; stack:  0 ->  0 (0)
/* 000520dc */ CALLHLL GUIEngine.SetButtonR (args: 2)   ; stack:  0 ->  0 (0)
/* 000520e6 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 000520ec */ SH_LOCALREF 緑                          ; stack:  0 ->  0 (0)
/* 000520f2 */ CALLHLL GUIEngine.SetButtonG (args: 2)   ; stack:  0 ->  0 (0)
/* 000520fc */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00052102 */ SH_LOCALREF 青                          ; stack:  0 ->  0 (0)
/* 00052108 */ CALLHLL GUIEngine.SetButtonB (args: 2)   ; stack:  0 ->  0 (0)
/* 00052112 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿ボタン＿色設定

; FUNC Ｐ＿ボタン＿赤色取得 (0x52120-0x5213a)
/* 00052120 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00052126 */ CALLHLL GUIEngine.GetButtonR (args: 1)   ; stack:  0 ->  0 (0)
/* 00052130 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00052132 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00052138 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿ボタン＿赤色取得

; FUNC Ｐ＿ボタン＿緑色取得 (0x52146-0x52160)
/* 00052146 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 0005214c */ CALLHLL GUIEngine.GetButtonG (args: 1)   ; stack:  0 ->  0 (0)
/* 00052156 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00052158 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 0005215e */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿ボタン＿緑色取得

; FUNC Ｐ＿ボタン＿青色取得 (0x5216c-0x52186)
/* 0005216c */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00052172 */ CALLHLL GUIEngine.GetButtonB (args: 1)   ; stack:  0 ->  0 (0)
/* 0005217c */ RETURN                                   ; stack:  0 ->  0 (0)
/* 0005217e */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00052184 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿ボタン＿青色取得

; FUNC Ｐ＿ボタン＿フォント設定 (0x52192-0x521e0)
/* 00052192 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00052198 */ SH_LOCALREF 種類                       ; stack:  0 ->  0 (0)
/* 0005219e */ SH_LOCALREF サイズ                    ; stack:  0 ->  0 (0)
/* 000521a4 */ SH_LOCALREF 赤                          ; stack:  0 ->  0 (0)
/* 000521aa */ SH_LOCALREF 緑                          ; stack:  0 ->  0 (0)
/* 000521b0 */ SH_LOCALREF 青                          ; stack:  0 ->  0 (0)
/* 000521b6 */ SH_LOCALREF 太字幅                    ; stack:  0 ->  0 (0)
/* 000521bc */ SH_LOCALREF 縁取り赤                 ; stack:  0 ->  0 (0)
/* 000521c2 */ SH_LOCALREF 縁取り緑                 ; stack:  0 ->  0 (0)
/* 000521c8 */ SH_LOCALREF 縁取り青                 ; stack:  0 ->  0 (0)
/* 000521ce */ SH_LOCALREF 縁取り幅                 ; stack:  0 ->  0 (0)
/* 000521d4 */ CALLHLL GUIEngine.SetButtonFontProperty (args: 11) ; stack:  0 ->  0 (0)
/* 000521de */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿ボタン＿フォント設定

; FUNC Ｐ＿ボタン＿フォント取得 (0x521ec-0x5223a)
/* 000521ec */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 000521f2 */ (SH_LOCALREFREF 1)                       ; stack:  0 ->  0 (0)
/* 000521f8 */ (SH_LOCALREFREF 3)                       ; stack:  0 ->  0 (0)
/* 000521fe */ (SH_LOCALREFREF 5)                       ; stack:  0 ->  0 (0)
/* 00052204 */ (SH_LOCALREFREF 7)                       ; stack:  0 ->  0 (0)
/* 0005220a */ (SH_LOCALREFREF 9)                       ; stack:  0 ->  0 (0)
/* 00052210 */ (SH_LOCALREFREF 11)                      ; stack:  0 ->  0 (0)
/* 00052216 */ (SH_LOCALREFREF 15)                      ; stack:  0 ->  0 (0)
/* 0005221c */ (SH_LOCALREFREF 17)                      ; stack:  0 ->  0 (0)
/* 00052222 */ (SH_LOCALREFREF 19)                      ; stack:  0 ->  0 (0)
/* 00052228 */ (SH_LOCALREFREF 13)                      ; stack:  0 ->  0 (0)
/* 0005222e */ CALLHLL GUIEngine.GetButtonFontProperty (args: 11) ; stack:  0 ->  0 (0)
/* 00052238 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿ボタン＿フォント取得

; FUNC Ｐ＿ボタン＿オンカーソル効果音番号設定 (0x52246-0x5225e)
/* 00052246 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 0005224c */ SH_LOCALREF サウンド番号           ; stack:  0 ->  0 (0)
/* 00052252 */ CALLHLL GUIEngine.SetButtonOnCursorSoundNumber (args: 2) ; stack:  0 ->  0 (0)
/* 0005225c */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿ボタン＿オンカーソル効果音番号設定

; FUNC Ｐ＿ボタン＿クリック効果音番号設定 (0x5226a-0x52282)
/* 0005226a */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00052270 */ SH_LOCALREF サウンド番号           ; stack:  0 ->  0 (0)
/* 00052276 */ CALLHLL GUIEngine.SetButtonClickSoundNumber (args: 2) ; stack:  0 ->  0 (0)
/* 00052280 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿ボタン＿クリック効果音番号設定

; FUNC Ｐ＿ボタン＿オンカーソル効果音番号取得 (0x5228e-0x522a8)
/* 0005228e */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00052294 */ CALLHLL GUIEngine.GetButtonOnCursorSoundNumber (args: 1) ; stack:  0 ->  0 (0)
/* 0005229e */ RETURN                                   ; stack:  0 ->  0 (0)
/* 000522a0 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 000522a6 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿ボタン＿オンカーソル効果音番号取得

; FUNC Ｐ＿ボタン＿クリック効果音番号取得 (0x522b4-0x522ce)
/* 000522b4 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 000522ba */ CALLHLL GUIEngine.GetButtonClickSoundNumber (args: 1) ; stack:  0 ->  0 (0)
/* 000522c4 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 000522c6 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 000522cc */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿ボタン＿クリック効果音番号取得

; FUNC Ｐ＿ボタン＿ＣＧ名設定 (0x522da-0x522f2)
/* 000522da */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 000522e0 */ (SH_LOCAL_S_REF 1)                       ; stack:  0 ->  0 (0)
/* 000522e6 */ CALLHLL GUIEngine.SetButtonCGName (args: 2) ; stack:  0 ->  0 (0)
/* 000522f0 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿ボタン＿ＣＧ名設定

; FUNC Ｐ＿ボタン＿ＣＧ名取得 (0x522fe-0x52330)
/* 000522fe */ SH_LOCALREF Name                         ; stack:  0 ->  0 (0)
/* 00052304 */ (SH_S_ASSIGN_STR0 0)                     ; stack:  0 ->  0 (0)
/* 0005230a */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00052310 */ SH_LOCALREF Name                         ; stack:  0 ->  0 (0)
/* 00052316 */ CALLHLL GUIEngine.GetButtonCGName (args: 2) ; stack:  0 ->  0 (0)
/* 00052320 */ (SH_LOCAL_S_REF 1)                       ; stack:  0 ->  0 (0)
/* 00052326 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00052328 */ S_PUSH 0 ("")                            ; stack:  0 ->  1 (+1)
/* 0005232e */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿ボタン＿ＣＧ名取得

; FUNC Ｐ＿ボタン＿テキスト設定 (0x5233c-0x52354)
/* 0005233c */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00052342 */ (SH_LOCAL_S_REF 1)                       ; stack:  0 ->  0 (0)
/* 00052348 */ CALLHLL GUIEngine.SetButtonText (args: 2) ; stack:  0 ->  0 (0)
/* 00052352 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿ボタン＿テキスト設定

; FUNC Ｐ＿ボタン＿テキスト取得 (0x52360-0x52392)
/* 00052360 */ SH_LOCALREF Text                         ; stack:  0 ->  0 (0)
/* 00052366 */ (SH_S_ASSIGN_STR0 0)                     ; stack:  0 ->  0 (0)
/* 0005236c */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00052372 */ SH_LOCALREF Text                         ; stack:  0 ->  0 (0)
/* 00052378 */ CALLHLL GUIEngine.GetButtonText (args: 2) ; stack:  0 ->  0 (0)
/* 00052382 */ (SH_LOCAL_S_REF 1)                       ; stack:  0 ->  0 (0)
/* 00052388 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 0005238a */ S_PUSH 0 ("")                            ; stack:  0 ->  1 (+1)
/* 00052390 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿ボタン＿テキスト取得

