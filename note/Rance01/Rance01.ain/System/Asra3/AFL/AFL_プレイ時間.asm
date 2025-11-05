; FUNC AFL_PlayTime_GetMinuteTime (0x58188-0x58198)
/* 00058188 */ SH_GLOBALREF g_PlayMinuteTime            ; stack:  0 ->  0 (0)
/* 0005818e */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00058190 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00058196 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC AFL_PlayTime_GetMinuteTime

; FUNC AFL_PlayTime_SetMinuteTime (0x581a4-0x581b0)
/* 000581a4 */ (SH_GLOBAL_ASSIGN_LOCAL (89, 0))         ; stack:  0 ->  0 (0)
/* 000581ae */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC AFL_PlayTime_SetMinuteTime

; FUNC AFL_PlayTime_PauseCounter (0x581bc-0x581c8)
/* 000581bc */ (SH_GLOBAL_ASSIGN_IMM (90, 1l))          ; stack:  0 ->  0 (0)
/* 000581c6 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC AFL_PlayTime_PauseCounter

; FUNC AFL_PlayTime_RestartCounter (0x581d4-0x581e0)
/* 000581d4 */ (SH_GLOBAL_ASSIGN_IMM (90, 0l))          ; stack:  0 ->  0 (0)
/* 000581de */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC AFL_PlayTime_RestartCounter

; FUNC AFL_PlayTime_IsPauseCounter (0x581ec-0x581fc)
/* 000581ec */ SH_GLOBALREF g_PausePlayTimeCounter      ; stack:  0 ->  0 (0)
/* 000581f2 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 000581f4 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 000581fa */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC AFL_PlayTime_IsPauseCounter

; FUNC AFL_TotalPlayTime_GetMinuteTime (0x58208-0x58218)
/* 00058208 */ CALLFUNC SYS_TotalPlayTime_GetMinuteTime (args: 0) ; stack:  0 ->  1 (+1)
/* 0005820e */ RETURN                                   ; stack:  1 ->  1 (0)
/* 00058210 */ PUSH 0                                   ; stack:  1 ->  2 (+1)
/* 00058216 */ RETURN                                   ; stack:  2 ->  2 (0)
; ENDFUNC AFL_TotalPlayTime_GetMinuteTime

