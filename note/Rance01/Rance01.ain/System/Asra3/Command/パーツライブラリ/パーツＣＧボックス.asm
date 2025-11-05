; FUNC Ｐ＿ＣＧボックス＿座標設定 (0x523a4-0x523c2)
/* 000523a4 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 000523aa */ SH_LOCALREF _Ｘ座標                   ; stack:  0 ->  0 (0)
/* 000523b0 */ SH_LOCALREF _Ｙ座標                   ; stack:  0 ->  0 (0)
/* 000523b6 */ CALLHLL GUIEngine.SetCGBoxPos (args: 3)  ; stack:  0 ->  0 (0)
/* 000523c0 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿ＣＧボックス＿座標設定

; FUNC Ｐ＿ＣＧボックス＿Ｚ座標設定 (0x523ce-0x523e6)
/* 000523ce */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 000523d4 */ SH_LOCALREF _Ｚ座標                   ; stack:  0 ->  0 (0)
/* 000523da */ CALLHLL GUIEngine.SetCGBoxZ (args: 2)    ; stack:  0 ->  0 (0)
/* 000523e4 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿ＣＧボックス＿Ｚ座標設定

; FUNC Ｐ＿ＣＧボックス＿Ｘ座標取得 (0x523f2-0x5240c)
/* 000523f2 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 000523f8 */ CALLHLL GUIEngine.GetCGBoxX (args: 1)    ; stack:  0 ->  0 (0)
/* 00052402 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00052404 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 0005240a */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿ＣＧボックス＿Ｘ座標取得

; FUNC Ｐ＿ＣＧボックス＿Ｙ座標取得 (0x52418-0x52432)
/* 00052418 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 0005241e */ CALLHLL GUIEngine.GetCGBoxY (args: 1)    ; stack:  0 ->  0 (0)
/* 00052428 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 0005242a */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00052430 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿ＣＧボックス＿Ｙ座標取得

; FUNC Ｐ＿ＣＧボックス＿Ｚ座標取得 (0x5243e-0x52458)
/* 0005243e */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00052444 */ CALLHLL GUIEngine.GetCGBoxZ (args: 1)    ; stack:  0 ->  0 (0)
/* 0005244e */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00052450 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00052456 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿ＣＧボックス＿Ｚ座標取得

; FUNC Ｐ＿ＣＧボックス＿サイズ設定 (0x52464-0x52492)
/* 00052464 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 0005246a */ SH_LOCALREF 幅                          ; stack:  0 ->  0 (0)
/* 00052470 */ CALLHLL GUIEngine.SetCGBoxWidth (args: 2) ; stack:  0 ->  0 (0)
/* 0005247a */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00052480 */ SH_LOCALREF 高さ                       ; stack:  0 ->  0 (0)
/* 00052486 */ CALLHLL GUIEngine.SetCGBoxHeight (args: 2) ; stack:  0 ->  0 (0)
/* 00052490 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿ＣＧボックス＿サイズ設定

; FUNC Ｐ＿ＣＧボックス＿幅取得 (0x5249e-0x524b8)
/* 0005249e */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 000524a4 */ CALLHLL GUIEngine.GetCGBoxWidth (args: 1) ; stack:  0 ->  0 (0)
/* 000524ae */ RETURN                                   ; stack:  0 ->  0 (0)
/* 000524b0 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 000524b6 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿ＣＧボックス＿幅取得

; FUNC Ｐ＿ＣＧボックス＿高さ取得 (0x524c4-0x524de)
/* 000524c4 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 000524ca */ CALLHLL GUIEngine.GetCGBoxHeight (args: 1) ; stack:  0 ->  0 (0)
/* 000524d4 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 000524d6 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 000524dc */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿ＣＧボックス＿高さ取得

; FUNC Ｐ＿ＣＧボックス＿アルファ値設定 (0x524ea-0x52502)
/* 000524ea */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 000524f0 */ SH_LOCALREF アルファ値              ; stack:  0 ->  0 (0)
/* 000524f6 */ CALLHLL GUIEngine.SetCGBoxAlpha (args: 2) ; stack:  0 ->  0 (0)
/* 00052500 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿ＣＧボックス＿アルファ値設定

; FUNC Ｐ＿ＣＧボックス＿アルファ値取得 (0x5250e-0x52528)
/* 0005250e */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00052514 */ CALLHLL GUIEngine.GetCGBoxAlpha (args: 1) ; stack:  0 ->  0 (0)
/* 0005251e */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00052520 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00052526 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿ＣＧボックス＿アルファ値取得

; FUNC Ｐ＿ＣＧボックス＿ズーム方法設定 (0x52534-0x5254c)
/* 00052534 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 0005253a */ SH_LOCALREF ズーム方法              ; stack:  0 ->  0 (0)
/* 00052540 */ CALLHLL GUIEngine.SetCGBoxViewMode (args: 2) ; stack:  0 ->  0 (0)
/* 0005254a */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿ＣＧボックス＿ズーム方法設定

; FUNC Ｐ＿ＣＧボックス＿ズーム方法取得 (0x52558-0x52572)
/* 00052558 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 0005255e */ CALLHLL GUIEngine.GetCGBoxViewMode (args: 1) ; stack:  0 ->  0 (0)
/* 00052568 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 0005256a */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00052570 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿ＣＧボックス＿ズーム方法取得

; FUNC Ｐ＿ＣＧボックス＿表示設定 (0x5257e-0x52596)
/* 0005257e */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00052584 */ SH_LOCALREF 表示                       ; stack:  0 ->  0 (0)
/* 0005258a */ CALLHLL GUIEngine.SetCGBoxShow (args: 2) ; stack:  0 ->  0 (0)
/* 00052594 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿ＣＧボックス＿表示設定

; FUNC Ｐ＿ＣＧボックス＿表示設定取得 (0x525a2-0x525bc)
/* 000525a2 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 000525a8 */ CALLHLL GUIEngine.IsCGBoxShow (args: 1)  ; stack:  0 ->  0 (0)
/* 000525b2 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 000525b4 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 000525ba */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿ＣＧボックス＿表示設定取得

; FUNC Ｐ＿ＣＧボックス＿ドラッグ設定 (0x525c8-0x525e0)
/* 000525c8 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 000525ce */ SH_LOCALREF ドラッグ                 ; stack:  0 ->  0 (0)
/* 000525d4 */ CALLHLL GUIEngine.SetCGBoxDrag (args: 2) ; stack:  0 ->  0 (0)
/* 000525de */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿ＣＧボックス＿ドラッグ設定

; FUNC Ｐ＿ＣＧボックス＿ドラッグ設定取得 (0x525ec-0x52606)
/* 000525ec */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 000525f2 */ CALLHLL GUIEngine.IsCGBoxDrag (args: 1)  ; stack:  0 ->  0 (0)
/* 000525fc */ RETURN                                   ; stack:  0 ->  0 (0)
/* 000525fe */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00052604 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿ＣＧボックス＿ドラッグ設定取得

; FUNC Ｐ＿ＣＧボックス＿ＣＧ名設定 (0x52612-0x5262a)
/* 00052612 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00052618 */ (SH_LOCAL_S_REF 1)                       ; stack:  0 ->  0 (0)
/* 0005261e */ CALLHLL GUIEngine.SetCGBoxCGName (args: 2) ; stack:  0 ->  0 (0)
/* 00052628 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿ＣＧボックス＿ＣＧ名設定

; FUNC Ｐ＿ＣＧボックス＿ＣＧ名取得 (0x52636-0x52668)
/* 00052636 */ SH_LOCALREF Name                         ; stack:  0 ->  0 (0)
/* 0005263c */ (SH_S_ASSIGN_STR0 0)                     ; stack:  0 ->  0 (0)
/* 00052642 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00052648 */ SH_LOCALREF Name                         ; stack:  0 ->  0 (0)
/* 0005264e */ CALLHLL GUIEngine.GetCGBoxCGName (args: 2) ; stack:  0 ->  0 (0)
/* 00052658 */ (SH_LOCAL_S_REF 1)                       ; stack:  0 ->  0 (0)
/* 0005265e */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00052660 */ S_PUSH 0 ("")                            ; stack:  0 ->  1 (+1)
/* 00052666 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿ＣＧボックス＿ＣＧ名取得

; FUNC Ｐ＿ＣＧボックス＿加算色設定 (0x52674-0x526b8)
/* 00052674 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 0005267a */ SH_LOCALREF 赤                          ; stack:  0 ->  0 (0)
/* 00052680 */ CALLHLL GUIEngine.SetCGBoxAddR (args: 2) ; stack:  0 ->  0 (0)
/* 0005268a */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00052690 */ SH_LOCALREF 緑                          ; stack:  0 ->  0 (0)
/* 00052696 */ CALLHLL GUIEngine.SetCGBoxAddG (args: 2) ; stack:  0 ->  0 (0)
/* 000526a0 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 000526a6 */ SH_LOCALREF 青                          ; stack:  0 ->  0 (0)
/* 000526ac */ CALLHLL GUIEngine.SetCGBoxAddB (args: 2) ; stack:  0 ->  0 (0)
/* 000526b6 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿ＣＧボックス＿加算色設定

; FUNC Ｐ＿ＣＧボックス＿加算色赤取得 (0x526c4-0x526de)
/* 000526c4 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 000526ca */ CALLHLL GUIEngine.GetCGBoxAddR (args: 1) ; stack:  0 ->  0 (0)
/* 000526d4 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 000526d6 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 000526dc */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿ＣＧボックス＿加算色赤取得

; FUNC Ｐ＿ＣＧボックス＿加算色緑取得 (0x526ea-0x52704)
/* 000526ea */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 000526f0 */ CALLHLL GUIEngine.GetCGBoxAddG (args: 1) ; stack:  0 ->  0 (0)
/* 000526fa */ RETURN                                   ; stack:  0 ->  0 (0)
/* 000526fc */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00052702 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿ＣＧボックス＿加算色緑取得

; FUNC Ｐ＿ＣＧボックス＿加算色青取得 (0x52710-0x5272a)
/* 00052710 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00052716 */ CALLHLL GUIEngine.GetCGBoxAddB (args: 1) ; stack:  0 ->  0 (0)
/* 00052720 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00052722 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00052728 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿ＣＧボックス＿加算色青取得

; FUNC Ｐ＿ＣＧボックス＿乗算色設定 (0x52736-0x5277a)
/* 00052736 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 0005273c */ SH_LOCALREF 赤                          ; stack:  0 ->  0 (0)
/* 00052742 */ CALLHLL GUIEngine.SetCGBoxMulR (args: 2) ; stack:  0 ->  0 (0)
/* 0005274c */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00052752 */ SH_LOCALREF 緑                          ; stack:  0 ->  0 (0)
/* 00052758 */ CALLHLL GUIEngine.SetCGBoxMulG (args: 2) ; stack:  0 ->  0 (0)
/* 00052762 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00052768 */ SH_LOCALREF 青                          ; stack:  0 ->  0 (0)
/* 0005276e */ CALLHLL GUIEngine.SetCGBoxMulB (args: 2) ; stack:  0 ->  0 (0)
/* 00052778 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿ＣＧボックス＿乗算色設定

; FUNC Ｐ＿ＣＧボックス＿乗算色赤取得 (0x52786-0x527a0)
/* 00052786 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 0005278c */ CALLHLL GUIEngine.GetCGBoxMulR (args: 1) ; stack:  0 ->  0 (0)
/* 00052796 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00052798 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 0005279e */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿ＣＧボックス＿乗算色赤取得

; FUNC Ｐ＿ＣＧボックス＿乗算色緑取得 (0x527ac-0x527c6)
/* 000527ac */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 000527b2 */ CALLHLL GUIEngine.GetCGBoxMulG (args: 1) ; stack:  0 ->  0 (0)
/* 000527bc */ RETURN                                   ; stack:  0 ->  0 (0)
/* 000527be */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 000527c4 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿ＣＧボックス＿乗算色緑取得

; FUNC Ｐ＿ＣＧボックス＿乗算色青取得 (0x527d2-0x527ec)
/* 000527d2 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 000527d8 */ CALLHLL GUIEngine.GetCGBoxMulB (args: 1) ; stack:  0 ->  0 (0)
/* 000527e2 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 000527e4 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 000527ea */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿ＣＧボックス＿乗算色青取得

