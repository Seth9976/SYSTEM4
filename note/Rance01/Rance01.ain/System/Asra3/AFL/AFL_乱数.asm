; FUNC AFL_SetRandSeed (0x578bc-0x578ce)
/* 000578bc */ SH_LOCALREF Seed                         ; stack:  0 ->  0 (0)
/* 000578c2 */ CALLHLL Math.SetSeed (args: 1)           ; stack:  0 ->  0 (0)
/* 000578cc */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC AFL_SetRandSeed

; FUNC AFL_SetRandSeedByCurrentTime (0x578da-0x578e6)
/* 000578da */ CALLHLL Math.SetSeedByCurrentTime (args: 0) ; stack:  0 ->  0 (0)
/* 000578e4 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC AFL_SetRandSeedByCurrentTime

; FUNC AFL_Rand (0x578f2-0x57906)
/* 000578f2 */ CALLHLL Math.Rand (args: 0)              ; stack:  0 ->  0 (0)
/* 000578fc */ RETURN                                   ; stack:  0 ->  0 (0)
/* 000578fe */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00057904 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC AFL_Rand

; FUNC AFL_RandF (0x57912-0x57926)
/* 00057912 */ CALLHLL Math.RandF (args: 0)             ; stack:  0 ->  0 (0)
/* 0005791c */ RETURN                                   ; stack:  0 ->  0 (0)
/* 0005791e */ F_PUSH 0.000000                          ; stack:  0 ->  1 (+1)
/* 00057924 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC AFL_RandF

