; FUNC 回想登録 (0x15d6a0-0x15d6be)
/* 0015d6a0 */ PUSH 1                                   ; stack:  0 ->  1 (+1)
/* 0015d6a6 */ PUSHLOCALPAGE                            ; stack:  1 ->  2 (+1)
/* 0015d6a8 */ PUSH 0                                   ; stack:  2 ->  3 (+1)
/* 0015d6ae */ REF                                      ; stack:  3 ->  2 (-1)
/* 0015d6b0 */ CALLHLL PassRegister.RegistNumber (args: 2) ; stack:  2 ->  2 (0)
/* 0015d6ba */ POP                                      ; stack:  2 ->  1 (-1)
/* 0015d6bc */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC 回想登録

; FUNC 回想確認 (0x15d6ca-0x15d6ee)
/* 0015d6ca */ PUSH 1                                   ; stack:  0 ->  1 (+1)
/* 0015d6d0 */ PUSHLOCALPAGE                            ; stack:  1 ->  2 (+1)
/* 0015d6d2 */ PUSH 0                                   ; stack:  2 ->  3 (+1)
/* 0015d6d8 */ REF                                      ; stack:  3 ->  2 (-1)
/* 0015d6da */ CALLHLL PassRegister.ExistNumber (args: 2) ; stack:  2 ->  2 (0)
/* 0015d6e4 */ RETURN                                   ; stack:  2 ->  2 (0)
/* 0015d6e6 */ PUSH 0                                   ; stack:  2 ->  3 (+1)
/* 0015d6ec */ RETURN                                   ; stack:  3 ->  3 (0)
; ENDFUNC 回想確認

; FUNC 回想モード実行中確認 (0x15d6fa-0x15d70e)
/* 0015d6fa */ PUSHGLOBALPAGE                           ; stack:  0 ->  1 (+1)
/* 0015d6fc */ PUSH 114                                 ; stack:  1 ->  2 (+1)
/* 0015d702 */ REF                                      ; stack:  2 ->  1 (-1)
/* 0015d704 */ RETURN                                   ; stack:  1 ->  1 (0)
/* 0015d706 */ PUSH 0                                   ; stack:  1 ->  2 (+1)
/* 0015d70c */ RETURN                                   ; stack:  2 ->  2 (0)
; ENDFUNC 回想モード実行中確認

