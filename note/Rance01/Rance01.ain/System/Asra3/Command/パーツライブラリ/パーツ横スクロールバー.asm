; FUNC Ｐ＿横スクロールバー＿座標設定 (0x534d6-0x534f4)
/* 000534d6 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 000534dc */ SH_LOCALREF _Ｘ座標                   ; stack:  0 ->  0 (0)
/* 000534e2 */ SH_LOCALREF _Ｙ座標                   ; stack:  0 ->  0 (0)
/* 000534e8 */ CALLHLL GUIEngine.SetHScrollbarPos (args: 3) ; stack:  0 ->  0 (0)
/* 000534f2 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿横スクロールバー＿座標設定

; FUNC Ｐ＿横スクロールバー＿Ｚ座標設定 (0x53500-0x53518)
/* 00053500 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00053506 */ SH_LOCALREF _Ｚ座標                   ; stack:  0 ->  0 (0)
/* 0005350c */ CALLHLL GUIEngine.SetHScrollbarZ (args: 2) ; stack:  0 ->  0 (0)
/* 00053516 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿横スクロールバー＿Ｚ座標設定

; FUNC Ｐ＿横スクロールバー＿Ｘ座標取得 (0x53524-0x5353e)
/* 00053524 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 0005352a */ CALLHLL GUIEngine.GetHScrollbarX (args: 1) ; stack:  0 ->  0 (0)
/* 00053534 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00053536 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 0005353c */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿横スクロールバー＿Ｘ座標取得

; FUNC Ｐ＿横スクロールバー＿Ｙ座標取得 (0x5354a-0x53564)
/* 0005354a */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00053550 */ CALLHLL GUIEngine.GetHScrollbarY (args: 1) ; stack:  0 ->  0 (0)
/* 0005355a */ RETURN                                   ; stack:  0 ->  0 (0)
/* 0005355c */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00053562 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿横スクロールバー＿Ｙ座標取得

; FUNC Ｐ＿横スクロールバー＿Ｚ座標取得 (0x53570-0x5358a)
/* 00053570 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00053576 */ CALLHLL GUIEngine.GetHScrollbarZ (args: 1) ; stack:  0 ->  0 (0)
/* 00053580 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00053582 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00053588 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿横スクロールバー＿Ｚ座標取得

; FUNC Ｐ＿横スクロールバー＿表示設定 (0x53596-0x535ae)
/* 00053596 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 0005359c */ SH_LOCALREF 表示                       ; stack:  0 ->  0 (0)
/* 000535a2 */ CALLHLL GUIEngine.SetHScrollbarShow (args: 2) ; stack:  0 ->  0 (0)
/* 000535ac */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿横スクロールバー＿表示設定

; FUNC Ｐ＿横スクロールバー＿表示設定取得 (0x535ba-0x535d4)
/* 000535ba */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 000535c0 */ CALLHLL GUIEngine.IsHScrollbarShow (args: 1) ; stack:  0 ->  0 (0)
/* 000535ca */ RETURN                                   ; stack:  0 ->  0 (0)
/* 000535cc */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 000535d2 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿横スクロールバー＿表示設定取得

; FUNC Ｐ＿横スクロールバー＿オンカーソル効果音番号設定 (0x535e0-0x535f8)
/* 000535e0 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 000535e6 */ SH_LOCALREF サウンド番号           ; stack:  0 ->  0 (0)
/* 000535ec */ CALLHLL GUIEngine.SetHScrollbarOnCursorSoundNumber (args: 2) ; stack:  0 ->  0 (0)
/* 000535f6 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿横スクロールバー＿オンカーソル効果音番号設定

; FUNC Ｐ＿横スクロールバー＿クリック効果音番号設定 (0x53604-0x5361c)
/* 00053604 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 0005360a */ SH_LOCALREF サウンド番号           ; stack:  0 ->  0 (0)
/* 00053610 */ CALLHLL GUIEngine.SetHScrollbarClickSoundNumber (args: 2) ; stack:  0 ->  0 (0)
/* 0005361a */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿横スクロールバー＿クリック効果音番号設定

; FUNC Ｐ＿横スクロールバー＿オンカーソル効果音番号取得 (0x53628-0x53642)
/* 00053628 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 0005362e */ CALLHLL GUIEngine.GetHScrollbarOnCursorSoundNumber (args: 1) ; stack:  0 ->  0 (0)
/* 00053638 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 0005363a */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00053640 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿横スクロールバー＿オンカーソル効果音番号取得

; FUNC Ｐ＿横スクロールバー＿クリック効果音番号取得 (0x5364e-0x53668)
/* 0005364e */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00053654 */ CALLHLL GUIEngine.GetHScrollbarClickSoundNumber (args: 1) ; stack:  0 ->  0 (0)
/* 0005365e */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00053660 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00053666 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿横スクロールバー＿クリック効果音番号取得

; FUNC Ｐ＿横スクロールバー＿幅設定 (0x53674-0x5368c)
/* 00053674 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 0005367a */ SH_LOCALREF 幅                          ; stack:  0 ->  0 (0)
/* 00053680 */ CALLHLL GUIEngine.SetHScrollbarWidth (args: 2) ; stack:  0 ->  0 (0)
/* 0005368a */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿横スクロールバー＿幅設定

; FUNC Ｐ＿横スクロールバー＿高さ設定 (0x53698-0x536b0)
/* 00053698 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 0005369e */ SH_LOCALREF 高さ                       ; stack:  0 ->  0 (0)
/* 000536a4 */ CALLHLL GUIEngine.SetHScrollbarHeight (args: 2) ; stack:  0 ->  0 (0)
/* 000536ae */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿横スクロールバー＿高さ設定

; FUNC Ｐ＿横スクロールバー＿左ボタン幅設定 (0x536bc-0x536d4)
/* 000536bc */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 000536c2 */ SH_LOCALREF 幅                          ; stack:  0 ->  0 (0)
/* 000536c8 */ CALLHLL GUIEngine.SetHScrollbarLeftWidth (args: 2) ; stack:  0 ->  0 (0)
/* 000536d2 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿横スクロールバー＿左ボタン幅設定

; FUNC Ｐ＿横スクロールバー＿右ボタン幅設定 (0x536e0-0x536f8)
/* 000536e0 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 000536e6 */ SH_LOCALREF 幅                          ; stack:  0 ->  0 (0)
/* 000536ec */ CALLHLL GUIEngine.SetHScrollbarRightWidth (args: 2) ; stack:  0 ->  0 (0)
/* 000536f6 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿横スクロールバー＿右ボタン幅設定

; FUNC Ｐ＿横スクロールバー＿幅取得 (0x53704-0x5371e)
/* 00053704 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 0005370a */ CALLHLL GUIEngine.GetHScrollbarWidth (args: 1) ; stack:  0 ->  0 (0)
/* 00053714 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00053716 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 0005371c */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿横スクロールバー＿幅取得

; FUNC Ｐ＿横スクロールバー＿高さ取得 (0x5372a-0x53744)
/* 0005372a */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00053730 */ CALLHLL GUIEngine.GetHScrollbarHeight (args: 1) ; stack:  0 ->  0 (0)
/* 0005373a */ RETURN                                   ; stack:  0 ->  0 (0)
/* 0005373c */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00053742 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿横スクロールバー＿高さ取得

; FUNC Ｐ＿横スクロールバー＿左ボタン幅取得 (0x53750-0x5376a)
/* 00053750 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00053756 */ CALLHLL GUIEngine.GetHScrollbarLeftWidth (args: 1) ; stack:  0 ->  0 (0)
/* 00053760 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00053762 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00053768 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿横スクロールバー＿左ボタン幅取得

; FUNC Ｐ＿横スクロールバー＿右ボタン幅取得 (0x53776-0x53790)
/* 00053776 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 0005377c */ CALLHLL GUIEngine.GetHScrollbarRightWidth (args: 1) ; stack:  0 ->  0 (0)
/* 00053786 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00053788 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 0005378e */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿横スクロールバー＿右ボタン幅取得

; FUNC Ｐ＿横スクロールバー＿全体量設定 (0x5379c-0x537b4)
/* 0005379c */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 000537a2 */ SH_LOCALREF 全体量                    ; stack:  0 ->  0 (0)
/* 000537a8 */ CALLHLL GUIEngine.SetHScrollbarTotalSize (args: 2) ; stack:  0 ->  0 (0)
/* 000537b2 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿横スクロールバー＿全体量設定

; FUNC Ｐ＿横スクロールバー＿表示量設定 (0x537c0-0x537d8)
/* 000537c0 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 000537c6 */ SH_LOCALREF 表示量                    ; stack:  0 ->  0 (0)
/* 000537cc */ CALLHLL GUIEngine.SetHScrollbarViewSize (args: 2) ; stack:  0 ->  0 (0)
/* 000537d6 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿横スクロールバー＿表示量設定

; FUNC Ｐ＿横スクロールバー＿スクロール位置設定 (0x537e4-0x537fc)
/* 000537e4 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 000537ea */ SH_LOCALREF 表示位置                 ; stack:  0 ->  0 (0)
/* 000537f0 */ CALLHLL GUIEngine.SetHScrollbarScrollPos (args: 2) ; stack:  0 ->  0 (0)
/* 000537fa */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿横スクロールバー＿スクロール位置設定

; FUNC Ｐ＿横スクロールバー＿ボタンクリック移動量設定 (0x53808-0x53820)
/* 00053808 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 0005380e */ SH_LOCALREF 移動量                    ; stack:  0 ->  0 (0)
/* 00053814 */ CALLHLL GUIEngine.SetHScrollbarMoveSizeByButton (args: 2) ; stack:  0 ->  0 (0)
/* 0005381e */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿横スクロールバー＿ボタンクリック移動量設定

; FUNC Ｐ＿横スクロールバー＿全体量取得 (0x5382c-0x53846)
/* 0005382c */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00053832 */ CALLHLL GUIEngine.GetHScrollbarTotalSize (args: 1) ; stack:  0 ->  0 (0)
/* 0005383c */ RETURN                                   ; stack:  0 ->  0 (0)
/* 0005383e */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00053844 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿横スクロールバー＿全体量取得

; FUNC Ｐ＿横スクロールバー＿表示量取得 (0x53852-0x5386c)
/* 00053852 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00053858 */ CALLHLL GUIEngine.GetHScrollbarViewSize (args: 1) ; stack:  0 ->  0 (0)
/* 00053862 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00053864 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 0005386a */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿横スクロールバー＿表示量取得

; FUNC Ｐ＿横スクロールバー＿スクロール位置取得 (0x53878-0x53892)
/* 00053878 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 0005387e */ CALLHLL GUIEngine.GetHScrollbarScrollPos (args: 1) ; stack:  0 ->  0 (0)
/* 00053888 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 0005388a */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00053890 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿横スクロールバー＿スクロール位置取得

; FUNC Ｐ＿横スクロールバー＿ボタンクリック移動量取得 (0x5389e-0x538b8)
/* 0005389e */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 000538a4 */ CALLHLL GUIEngine.GetHScrollbarMoveSizeByButton (args: 1) ; stack:  0 ->  0 (0)
/* 000538ae */ RETURN                                   ; stack:  0 ->  0 (0)
/* 000538b0 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 000538b6 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿横スクロールバー＿ボタンクリック移動量取得

; FUNC Ｐ＿横スクロールバー＿ＣＧ名設定 (0x538c4-0x538dc)
/* 000538c4 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 000538ca */ (SH_LOCAL_S_REF 1)                       ; stack:  0 ->  0 (0)
/* 000538d0 */ CALLHLL GUIEngine.SetHScrollbarCGName (args: 2) ; stack:  0 ->  0 (0)
/* 000538da */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿横スクロールバー＿ＣＧ名設定

; FUNC Ｐ＿横スクロールバー＿ＣＧ名取得 (0x538e8-0x5391a)
/* 000538e8 */ SH_LOCALREF Name                         ; stack:  0 ->  0 (0)
/* 000538ee */ (SH_S_ASSIGN_STR0 0)                     ; stack:  0 ->  0 (0)
/* 000538f4 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 000538fa */ SH_LOCALREF Name                         ; stack:  0 ->  0 (0)
/* 00053900 */ CALLHLL GUIEngine.GetHScrollbarCGName (args: 2) ; stack:  0 ->  0 (0)
/* 0005390a */ (SH_LOCAL_S_REF 1)                       ; stack:  0 ->  0 (0)
/* 00053910 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00053912 */ S_PUSH 0 ("")                            ; stack:  0 ->  1 (+1)
/* 00053918 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿横スクロールバー＿ＣＧ名取得

