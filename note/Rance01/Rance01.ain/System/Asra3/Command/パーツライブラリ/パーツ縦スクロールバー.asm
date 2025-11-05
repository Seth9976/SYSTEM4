; FUNC Ｐ＿縦スクロールバー＿座標設定 (0x53080-0x5309e)
/* 00053080 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00053086 */ SH_LOCALREF _Ｘ座標                   ; stack:  0 ->  0 (0)
/* 0005308c */ SH_LOCALREF _Ｙ座標                   ; stack:  0 ->  0 (0)
/* 00053092 */ CALLHLL GUIEngine.SetVScrollbarPos (args: 3) ; stack:  0 ->  0 (0)
/* 0005309c */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿縦スクロールバー＿座標設定

; FUNC Ｐ＿縦スクロールバー＿Ｚ座標設定 (0x530aa-0x530c2)
/* 000530aa */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 000530b0 */ SH_LOCALREF _Ｚ座標                   ; stack:  0 ->  0 (0)
/* 000530b6 */ CALLHLL GUIEngine.SetVScrollbarZ (args: 2) ; stack:  0 ->  0 (0)
/* 000530c0 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿縦スクロールバー＿Ｚ座標設定

; FUNC Ｐ＿縦スクロールバー＿Ｘ座標取得 (0x530ce-0x530e8)
/* 000530ce */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 000530d4 */ CALLHLL GUIEngine.GetVScrollbarX (args: 1) ; stack:  0 ->  0 (0)
/* 000530de */ RETURN                                   ; stack:  0 ->  0 (0)
/* 000530e0 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 000530e6 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿縦スクロールバー＿Ｘ座標取得

; FUNC Ｐ＿縦スクロールバー＿Ｙ座標取得 (0x530f4-0x5310e)
/* 000530f4 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 000530fa */ CALLHLL GUIEngine.GetVScrollbarY (args: 1) ; stack:  0 ->  0 (0)
/* 00053104 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00053106 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 0005310c */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿縦スクロールバー＿Ｙ座標取得

; FUNC Ｐ＿縦スクロールバー＿Ｚ座標取得 (0x5311a-0x53134)
/* 0005311a */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00053120 */ CALLHLL GUIEngine.GetVScrollbarZ (args: 1) ; stack:  0 ->  0 (0)
/* 0005312a */ RETURN                                   ; stack:  0 ->  0 (0)
/* 0005312c */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00053132 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿縦スクロールバー＿Ｚ座標取得

; FUNC Ｐ＿縦スクロールバー＿表示設定 (0x53140-0x53158)
/* 00053140 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00053146 */ SH_LOCALREF 表示                       ; stack:  0 ->  0 (0)
/* 0005314c */ CALLHLL GUIEngine.SetVScrollbarShow (args: 2) ; stack:  0 ->  0 (0)
/* 00053156 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿縦スクロールバー＿表示設定

; FUNC Ｐ＿縦スクロールバー＿表示設定取得 (0x53164-0x5317e)
/* 00053164 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 0005316a */ CALLHLL GUIEngine.IsVScrollbarShow (args: 1) ; stack:  0 ->  0 (0)
/* 00053174 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00053176 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 0005317c */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿縦スクロールバー＿表示設定取得

; FUNC Ｐ＿縦スクロールバー＿オンカーソル効果音番号設定 (0x5318a-0x531a2)
/* 0005318a */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00053190 */ SH_LOCALREF サウンド番号           ; stack:  0 ->  0 (0)
/* 00053196 */ CALLHLL GUIEngine.SetVScrollbarOnCursorSoundNumber (args: 2) ; stack:  0 ->  0 (0)
/* 000531a0 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿縦スクロールバー＿オンカーソル効果音番号設定

; FUNC Ｐ＿縦スクロールバー＿クリック効果音番号設定 (0x531ae-0x531c6)
/* 000531ae */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 000531b4 */ SH_LOCALREF サウンド番号           ; stack:  0 ->  0 (0)
/* 000531ba */ CALLHLL GUIEngine.SetVScrollbarClickSoundNumber (args: 2) ; stack:  0 ->  0 (0)
/* 000531c4 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿縦スクロールバー＿クリック効果音番号設定

; FUNC Ｐ＿縦スクロールバー＿オンカーソル効果音番号取得 (0x531d2-0x531ec)
/* 000531d2 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 000531d8 */ CALLHLL GUIEngine.GetVScrollbarOnCursorSoundNumber (args: 1) ; stack:  0 ->  0 (0)
/* 000531e2 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 000531e4 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 000531ea */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿縦スクロールバー＿オンカーソル効果音番号取得

; FUNC Ｐ＿縦スクロールバー＿クリック効果音番号取得 (0x531f8-0x53212)
/* 000531f8 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 000531fe */ CALLHLL GUIEngine.GetVScrollbarClickSoundNumber (args: 1) ; stack:  0 ->  0 (0)
/* 00053208 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 0005320a */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00053210 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿縦スクロールバー＿クリック効果音番号取得

; FUNC Ｐ＿縦スクロールバー＿幅設定 (0x5321e-0x53236)
/* 0005321e */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00053224 */ SH_LOCALREF 幅                          ; stack:  0 ->  0 (0)
/* 0005322a */ CALLHLL GUIEngine.SetVScrollbarWidth (args: 2) ; stack:  0 ->  0 (0)
/* 00053234 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿縦スクロールバー＿幅設定

; FUNC Ｐ＿縦スクロールバー＿高さ設定 (0x53242-0x5325a)
/* 00053242 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00053248 */ SH_LOCALREF 高さ                       ; stack:  0 ->  0 (0)
/* 0005324e */ CALLHLL GUIEngine.SetVScrollbarHeight (args: 2) ; stack:  0 ->  0 (0)
/* 00053258 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿縦スクロールバー＿高さ設定

; FUNC Ｐ＿縦スクロールバー＿上ボタン高さ設定 (0x53266-0x5327e)
/* 00053266 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 0005326c */ SH_LOCALREF 高さ                       ; stack:  0 ->  0 (0)
/* 00053272 */ CALLHLL GUIEngine.SetVScrollbarUpHeight (args: 2) ; stack:  0 ->  0 (0)
/* 0005327c */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿縦スクロールバー＿上ボタン高さ設定

; FUNC Ｐ＿縦スクロールバー＿下ボタン高さ設定 (0x5328a-0x532a2)
/* 0005328a */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00053290 */ SH_LOCALREF 高さ                       ; stack:  0 ->  0 (0)
/* 00053296 */ CALLHLL GUIEngine.SetVScrollbarDownHeight (args: 2) ; stack:  0 ->  0 (0)
/* 000532a0 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿縦スクロールバー＿下ボタン高さ設定

; FUNC Ｐ＿縦スクロールバー＿幅取得 (0x532ae-0x532c8)
/* 000532ae */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 000532b4 */ CALLHLL GUIEngine.GetVScrollbarWidth (args: 1) ; stack:  0 ->  0 (0)
/* 000532be */ RETURN                                   ; stack:  0 ->  0 (0)
/* 000532c0 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 000532c6 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿縦スクロールバー＿幅取得

; FUNC Ｐ＿縦スクロールバー＿高さ取得 (0x532d4-0x532ee)
/* 000532d4 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 000532da */ CALLHLL GUIEngine.GetVScrollbarHeight (args: 1) ; stack:  0 ->  0 (0)
/* 000532e4 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 000532e6 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 000532ec */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿縦スクロールバー＿高さ取得

; FUNC Ｐ＿縦スクロールバー＿上ボタン高さ取得 (0x532fa-0x53314)
/* 000532fa */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00053300 */ CALLHLL GUIEngine.GetVScrollbarUpHeight (args: 1) ; stack:  0 ->  0 (0)
/* 0005330a */ RETURN                                   ; stack:  0 ->  0 (0)
/* 0005330c */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00053312 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿縦スクロールバー＿上ボタン高さ取得

; FUNC Ｐ＿縦スクロールバー＿下ボタン高さ取得 (0x53320-0x5333a)
/* 00053320 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00053326 */ CALLHLL GUIEngine.GetVScrollbarDownHeight (args: 1) ; stack:  0 ->  0 (0)
/* 00053330 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00053332 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00053338 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿縦スクロールバー＿下ボタン高さ取得

; FUNC Ｐ＿縦スクロールバー＿全体量設定 (0x53346-0x5335e)
/* 00053346 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 0005334c */ SH_LOCALREF 全体量                    ; stack:  0 ->  0 (0)
/* 00053352 */ CALLHLL GUIEngine.SetVScrollbarTotalSize (args: 2) ; stack:  0 ->  0 (0)
/* 0005335c */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿縦スクロールバー＿全体量設定

; FUNC Ｐ＿縦スクロールバー＿表示量設定 (0x5336a-0x53382)
/* 0005336a */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00053370 */ SH_LOCALREF 表示量                    ; stack:  0 ->  0 (0)
/* 00053376 */ CALLHLL GUIEngine.SetVScrollbarViewSize (args: 2) ; stack:  0 ->  0 (0)
/* 00053380 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿縦スクロールバー＿表示量設定

; FUNC Ｐ＿縦スクロールバー＿スクロール位置設定 (0x5338e-0x533a6)
/* 0005338e */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00053394 */ SH_LOCALREF 表示位置                 ; stack:  0 ->  0 (0)
/* 0005339a */ CALLHLL GUIEngine.SetVScrollbarScrollPos (args: 2) ; stack:  0 ->  0 (0)
/* 000533a4 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿縦スクロールバー＿スクロール位置設定

; FUNC Ｐ＿縦スクロールバー＿ボタンクリック移動量設定 (0x533b2-0x533ca)
/* 000533b2 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 000533b8 */ SH_LOCALREF 移動量                    ; stack:  0 ->  0 (0)
/* 000533be */ CALLHLL GUIEngine.SetVScrollbarMoveSizeByButton (args: 2) ; stack:  0 ->  0 (0)
/* 000533c8 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿縦スクロールバー＿ボタンクリック移動量設定

; FUNC Ｐ＿縦スクロールバー＿全体量取得 (0x533d6-0x533f0)
/* 000533d6 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 000533dc */ CALLHLL GUIEngine.GetVScrollbarTotalSize (args: 1) ; stack:  0 ->  0 (0)
/* 000533e6 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 000533e8 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 000533ee */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿縦スクロールバー＿全体量取得

; FUNC Ｐ＿縦スクロールバー＿表示量取得 (0x533fc-0x53416)
/* 000533fc */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00053402 */ CALLHLL GUIEngine.GetVScrollbarViewSize (args: 1) ; stack:  0 ->  0 (0)
/* 0005340c */ RETURN                                   ; stack:  0 ->  0 (0)
/* 0005340e */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00053414 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿縦スクロールバー＿表示量取得

; FUNC Ｐ＿縦スクロールバー＿スクロール位置取得 (0x53422-0x5343c)
/* 00053422 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00053428 */ CALLHLL GUIEngine.GetVScrollbarScrollPos (args: 1) ; stack:  0 ->  0 (0)
/* 00053432 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00053434 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 0005343a */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿縦スクロールバー＿スクロール位置取得

; FUNC Ｐ＿縦スクロールバー＿ボタンクリック移動量取得 (0x53448-0x53462)
/* 00053448 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 0005344e */ CALLHLL GUIEngine.GetVScrollbarMoveSizeByButton (args: 1) ; stack:  0 ->  0 (0)
/* 00053458 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 0005345a */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00053460 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿縦スクロールバー＿ボタンクリック移動量取得

; FUNC Ｐ＿縦スクロールバー＿ＣＧ名設定 (0x5346e-0x53486)
/* 0005346e */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00053474 */ (SH_LOCAL_S_REF 1)                       ; stack:  0 ->  0 (0)
/* 0005347a */ CALLHLL GUIEngine.SetVScrollbarCGName (args: 2) ; stack:  0 ->  0 (0)
/* 00053484 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿縦スクロールバー＿ＣＧ名設定

; FUNC Ｐ＿縦スクロールバー＿ＣＧ名取得 (0x53492-0x534c4)
/* 00053492 */ SH_LOCALREF Name                         ; stack:  0 ->  0 (0)
/* 00053498 */ (SH_S_ASSIGN_STR0 0)                     ; stack:  0 ->  0 (0)
/* 0005349e */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 000534a4 */ SH_LOCALREF Name                         ; stack:  0 ->  0 (0)
/* 000534aa */ CALLHLL GUIEngine.GetVScrollbarCGName (args: 2) ; stack:  0 ->  0 (0)
/* 000534b4 */ (SH_LOCAL_S_REF 1)                       ; stack:  0 ->  0 (0)
/* 000534ba */ RETURN                                   ; stack:  0 ->  0 (0)
/* 000534bc */ S_PUSH 0 ("")                            ; stack:  0 ->  1 (+1)
/* 000534c2 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿縦スクロールバー＿ＣＧ名取得

