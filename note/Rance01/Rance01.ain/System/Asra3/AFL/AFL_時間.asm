; FUNC AFL_GetTime (0x5b03c-0x5b07c)
/* 0005b03c */ (SH_LOCALREFREF 0)                       ; stack:  0 ->  0 (0)
/* 0005b042 */ (SH_LOCALREFREF 2)                       ; stack:  0 ->  0 (0)
/* 0005b048 */ (SH_LOCALREFREF 4)                       ; stack:  0 ->  0 (0)
/* 0005b04e */ (SH_LOCALREFREF 6)                       ; stack:  0 ->  0 (0)
/* 0005b054 */ CALLHLL SystemService.GetDate (args: 4)  ; stack:  0 ->  0 (0)
/* 0005b05e */ (SH_LOCALREFREF 8)                       ; stack:  0 ->  0 (0)
/* 0005b064 */ (SH_LOCALREFREF 10)                      ; stack:  0 ->  0 (0)
/* 0005b06a */ (SH_LOCALREFREF 12)                      ; stack:  0 ->  0 (0)
/* 0005b070 */ CALLHLL SystemService.GetTime (args: 3)  ; stack:  0 ->  0 (0)
/* 0005b07a */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC AFL_GetTime

