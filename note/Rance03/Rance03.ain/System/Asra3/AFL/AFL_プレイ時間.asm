; FUNC AFL_PlayTime_GetMinuteTime (0x16c168-0x16c17c)
/* 0016c168 */ PUSHGLOBALPAGE                           ; stack:  0 ->  1 (+1)
/* 0016c16a */ PUSH 83                                  ; stack:  1 ->  2 (+1)
/* 0016c170 */ REF                                      ; stack:  2 ->  1 (-1)
/* 0016c172 */ RETURN                                   ; stack:  1 ->  1 (0)
/* 0016c174 */ PUSH 0                                   ; stack:  1 ->  2 (+1)
/* 0016c17a */ RETURN                                   ; stack:  2 ->  2 (0)
; ENDFUNC AFL_PlayTime_GetMinuteTime

; FUNC AFL_PlayTime_SetMinuteTime (0x16c188-0x16c1a0)
/* 0016c188 */ PUSHGLOBALPAGE                           ; stack:  0 ->  1 (+1)
/* 0016c18a */ PUSH 83                                  ; stack:  1 ->  2 (+1)
/* 0016c190 */ PUSHLOCALPAGE                            ; stack:  2 ->  3 (+1)
/* 0016c192 */ PUSH 0                                   ; stack:  3 ->  4 (+1)
/* 0016c198 */ REF                                      ; stack:  4 ->  3 (-1)
/* 0016c19a */ ASSIGN                                   ; stack:  3 ->  1 (-2)
/* 0016c19c */ POP                                      ; stack:  1 ->  0 (-1)
/* 0016c19e */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC AFL_PlayTime_SetMinuteTime

; FUNC AFL_PlayTime_PauseCounter (0x16c1ac-0x16c1c0)
/* 0016c1ac */ PUSHGLOBALPAGE                           ; stack:  0 ->  1 (+1)
/* 0016c1ae */ PUSH 84                                  ; stack:  1 ->  2 (+1)
/* 0016c1b4 */ PUSH 1                                   ; stack:  2 ->  3 (+1)
/* 0016c1ba */ ASSIGN                                   ; stack:  3 ->  1 (-2)
/* 0016c1bc */ POP                                      ; stack:  1 ->  0 (-1)
/* 0016c1be */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC AFL_PlayTime_PauseCounter

; FUNC AFL_PlayTime_RestartCounter (0x16c1cc-0x16c1e0)
/* 0016c1cc */ PUSHGLOBALPAGE                           ; stack:  0 ->  1 (+1)
/* 0016c1ce */ PUSH 84                                  ; stack:  1 ->  2 (+1)
/* 0016c1d4 */ PUSH 0                                   ; stack:  2 ->  3 (+1)
/* 0016c1da */ ASSIGN                                   ; stack:  3 ->  1 (-2)
/* 0016c1dc */ POP                                      ; stack:  1 ->  0 (-1)
/* 0016c1de */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC AFL_PlayTime_RestartCounter

; FUNC AFL_PlayTime_IsPauseCounter (0x16c1ec-0x16c200)
/* 0016c1ec */ PUSHGLOBALPAGE                           ; stack:  0 ->  1 (+1)
/* 0016c1ee */ PUSH 84                                  ; stack:  1 ->  2 (+1)
/* 0016c1f4 */ REF                                      ; stack:  2 ->  1 (-1)
/* 0016c1f6 */ RETURN                                   ; stack:  1 ->  1 (0)
/* 0016c1f8 */ PUSH 0                                   ; stack:  1 ->  2 (+1)
/* 0016c1fe */ RETURN                                   ; stack:  2 ->  2 (0)
; ENDFUNC AFL_PlayTime_IsPauseCounter

; FUNC AFL_TotalPlayTime_GetMinuteTime (0x16c20c-0x16c21c)
/* 0016c20c */ CALLFUNC SYS_TotalPlayTime_GetMinuteTime (args: 0) ; stack:  0 ->  1 (+1)
/* 0016c212 */ RETURN                                   ; stack:  1 ->  1 (0)
/* 0016c214 */ PUSH 0                                   ; stack:  1 ->  2 (+1)
/* 0016c21a */ RETURN                                   ; stack:  2 ->  2 (0)
; ENDFUNC AFL_TotalPlayTime_GetMinuteTime

