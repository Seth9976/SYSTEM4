; FUNC ＣＧモード登録 (0x4ba4a-0x4ba64)
/* 0004ba4a */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 0004ba50 */ (SH_LOCAL_S_REF 0)                       ; stack:  1 ->  1 (0)
/* 0004ba56 */ CALLHLL PassRegister.RegistText (args: 2) ; stack:  1 ->  1 (0)
/* 0004ba60 */ POP                                      ; stack:  1 ->  0 (-1)
/* 0004ba62 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC ＣＧモード登録

; FUNC ＣＧモード確認 (0x4ba70-0x4ba90)
/* 0004ba70 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 0004ba76 */ (SH_LOCAL_S_REF 0)                       ; stack:  1 ->  1 (0)
/* 0004ba7c */ CALLHLL PassRegister.ExistText (args: 2) ; stack:  1 ->  1 (0)
/* 0004ba86 */ RETURN                                   ; stack:  1 ->  1 (0)
/* 0004ba88 */ PUSH 0                                   ; stack:  1 ->  2 (+1)
/* 0004ba8e */ RETURN                                   ; stack:  2 ->  2 (0)
; ENDFUNC ＣＧモード確認

