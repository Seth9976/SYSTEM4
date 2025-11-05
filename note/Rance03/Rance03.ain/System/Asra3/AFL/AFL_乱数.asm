; FUNC AFL_SetRandSeed (0x16a436-0x16a44c)
/* 0016a436 */ PUSHLOCALPAGE                            ; stack:  0 ->  1 (+1)
/* 0016a438 */ PUSH 0                                   ; stack:  1 ->  2 (+1)
/* 0016a43e */ REF                                      ; stack:  2 ->  1 (-1)
/* 0016a440 */ CALLHLL Math.SetSeed (args: 1)           ; stack:  1 ->  1 (0)
/* 0016a44a */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC AFL_SetRandSeed

; FUNC AFL_SetRandSeedByCurrentTime (0x16a458-0x16a464)
/* 0016a458 */ CALLHLL Math.SetSeedByCurrentTime (args: 0) ; stack:  0 ->  0 (0)
/* 0016a462 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC AFL_SetRandSeedByCurrentTime

; FUNC AFL_Rand (0x16a470-0x16a484)
/* 0016a470 */ CALLHLL Math.Rand (args: 0)              ; stack:  0 ->  0 (0)
/* 0016a47a */ RETURN                                   ; stack:  0 ->  0 (0)
/* 0016a47c */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 0016a482 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC AFL_Rand

; FUNC AFL_RandF (0x16a490-0x16a4a4)
/* 0016a490 */ CALLHLL Math.RandF (args: 0)             ; stack:  0 ->  0 (0)
/* 0016a49a */ RETURN                                   ; stack:  0 ->  0 (0)
/* 0016a49c */ F_PUSH 0.000000                          ; stack:  0 ->  1 (+1)
/* 0016a4a2 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC AFL_RandF

