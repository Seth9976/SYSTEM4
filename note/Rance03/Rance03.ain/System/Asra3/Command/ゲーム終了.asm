; FUNC ゲーム終了 (0x15f204-0x15f246)
/* 0015f204 */ CALLFUNC AFL_Config_GetCloseGameConfirm (args: 0) ; stack:  0 ->  1 (+1)
/* 0015f20a */ IFZ 0x15f22c                             ; stack:  1 ->  0 (-1)
/* 0015f210 */ S_PUSH 910 ("ゲームを終了します...") ; stack:  0 ->  1 (+1)
/* 0015f216 */ CALLSYS system.MsgBoxOkCancel (args: 1)  ; stack:  1 ->  1 (0)
/* 0015f21c */ NOT                                      ; stack:  1 ->  1 (0)
/* 0015f21e */ IFZ 0x15f22c                             ; stack:  1 ->  0 (-1)
/* 0015f224 */ CALLFUNC SYS_WaitToKeyUpFromMessageBox (args: 0) ; stack:  0 ->  0 (0)
/* 0015f22a */ RETURN                                   ; stack:  0 ->  0 (0)
/* 0015f22c */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 0015f232 */ CALLSYS system.Exit (args: 1)            ; stack:  1 ->  0 (-1)
/* 0015f238 */ CALLSYS system.Peek (args: 0)            ; stack:  0 ->  0 (0)
/* 0015f23e */ JUMP 0x15f238                            ; stack:  0 ->  0 (0)
/* 0015f244 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC ゲーム終了

; FUNC タイトルに戻る (0x15f252-0x15f282)
/* 0015f252 */ CALLFUNC AFL_Config_GetBackToTitleConfirm (args: 0) ; stack:  0 ->  1 (+1)
/* 0015f258 */ IFZ 0x15f27a                             ; stack:  1 ->  0 (-1)
/* 0015f25e */ S_PUSH 911 ("タイトル画面に戻り...") ; stack:  0 ->  1 (+1)
/* 0015f264 */ CALLSYS system.MsgBoxOkCancel (args: 1)  ; stack:  1 ->  1 (0)
/* 0015f26a */ NOT                                      ; stack:  1 ->  1 (0)
/* 0015f26c */ IFZ 0x15f27a                             ; stack:  1 ->  0 (-1)
/* 0015f272 */ CALLFUNC SYS_WaitToKeyUpFromMessageBox (args: 0) ; stack:  0 ->  0 (0)
/* 0015f278 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 0015f27a */ CALLFUNC Ａ＿タイトルに戻る＿確認なし (args: 0) ; stack:  0 ->  0 (0)
/* 0015f280 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC タイトルに戻る

; FUNC Ａ＿タイトルに戻る＿確認なし (0x15f28e-0x15f2a8)
/* 0015f28e */ CALLFUNC SYS_コンフィグセーブ (args: 0) ; stack:  0 ->  0 (0)
/* 0015f294 */ CALLSYS system.Reset (args: 0)           ; stack:  0 ->  0 (0)
/* 0015f29a */ CALLSYS system.Peek (args: 0)            ; stack:  0 ->  0 (0)
/* 0015f2a0 */ JUMP 0x15f29a                            ; stack:  0 ->  0 (0)
/* 0015f2a6 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ａ＿タイトルに戻る＿確認なし

; FUNC 再起動後確認 (0x15f2b4-0x15f2c8)
/* 0015f2b4 */ CALLHLL SystemService.IsResetOnce (args: 0) ; stack:  0 ->  0 (0)
/* 0015f2be */ RETURN                                   ; stack:  0 ->  0 (0)
/* 0015f2c0 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 0015f2c6 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC 再起動後確認

