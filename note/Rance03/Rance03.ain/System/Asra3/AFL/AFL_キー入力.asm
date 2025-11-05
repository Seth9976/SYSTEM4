; FUNC AFL_IsKeyDown (0x169a88-0x169aa6)
/* 00169a88 */ PUSHLOCALPAGE                            ; stack:  0 ->  1 (+1)
/* 00169a8a */ PUSH 0                                   ; stack:  1 ->  2 (+1)
/* 00169a90 */ REF                                      ; stack:  2 ->  1 (-1)
/* 00169a92 */ CALLHLL IbisInputEngine.Key_IsDown (args: 1) ; stack:  1 ->  1 (0)
/* 00169a9c */ RETURN                                   ; stack:  1 ->  1 (0)
/* 00169a9e */ PUSH 0                                   ; stack:  1 ->  2 (+1)
/* 00169aa4 */ RETURN                                   ; stack:  2 ->  2 (0)
; ENDFUNC AFL_IsKeyDown

