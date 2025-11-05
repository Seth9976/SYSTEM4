; FUNC ＣＧモード登録 (0x15d640-0x15d65e)
/* 0015d640 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 0015d646 */ PUSHLOCALPAGE                            ; stack:  1 ->  2 (+1)
/* 0015d648 */ PUSH 0                                   ; stack:  2 ->  3 (+1)
/* 0015d64e */ S_REF                                    ; stack:  3 ->  3 (0)
/* 0015d650 */ CALLHLL PassRegister.RegistText (args: 2) ; stack:  3 ->  3 (0)
/* 0015d65a */ POP                                      ; stack:  3 ->  2 (-1)
/* 0015d65c */ RETURN                                   ; stack:  2 ->  2 (0)
; ENDFUNC ＣＧモード登録

; FUNC ＣＧモード確認 (0x15d66a-0x15d68e)
/* 0015d66a */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 0015d670 */ PUSHLOCALPAGE                            ; stack:  1 ->  2 (+1)
/* 0015d672 */ PUSH 0                                   ; stack:  2 ->  3 (+1)
/* 0015d678 */ S_REF                                    ; stack:  3 ->  3 (0)
/* 0015d67a */ CALLHLL PassRegister.ExistText (args: 2) ; stack:  3 ->  3 (0)
/* 0015d684 */ RETURN                                   ; stack:  3 ->  3 (0)
/* 0015d686 */ PUSH 0                                   ; stack:  3 ->  4 (+1)
/* 0015d68c */ RETURN                                   ; stack:  4 ->  4 (0)
; ENDFUNC ＣＧモード確認

