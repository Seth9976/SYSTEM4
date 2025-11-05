; FUNC AFL_DebugFPS_SetShow (0x5b86c-0x5b880)
/* 0005b86c */ SH_GLOBALREF g_DebugFPS                  ; stack:  0 ->  0 (0)
/* 0005b872 */ SH_LOCALREF Show                         ; stack:  0 ->  0 (0)
/* 0005b878 */ CALLMETHOD 1965                          ; stack:  0 -> -2 (-2)
/* 0005b87e */ RETURN                                   ; stack: -2 -> -2 (0)
; ENDFUNC AFL_DebugFPS_SetShow

; FUNC AFL_DebugFPS_GetShow (0x5b88c-0x5b8a2)
/* 0005b88c */ SH_GLOBALREF g_DebugFPS                  ; stack:  0 ->  0 (0)
/* 0005b892 */ CALLMETHOD 1966                          ; stack:  0 -> -2 (-2)
/* 0005b898 */ RETURN                                   ; stack: -2 -> -2 (0)
/* 0005b89a */ PUSH 0                                   ; stack: -2 -> -1 (+1)
/* 0005b8a0 */ RETURN                                   ; stack: -1 -> -1 (0)
; ENDFUNC AFL_DebugFPS_GetShow

