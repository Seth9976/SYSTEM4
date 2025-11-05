; FUNC LocalTimer@0 (0x6116e-0x61180)
/* 0006116e */ PUSHSTRUCTPAGE                           ; stack:  0 ->  1 (+1)
/* 00061170 */ CALLMETHOD 7182                          ; stack:  1 -> -1 (-2)
/* 00061176 */ PUSHSTRUCTPAGE                           ; stack: -1 ->  0 (+1)
/* 00061178 */ CALLMETHOD 3581                          ; stack:  0 -> -2 (-2)
/* 0006117e */ RETURN                                   ; stack: -2 -> -2 (0)
; ENDFUNC LocalTimer@0

; FUNC LocalTimer@reset (0x61186-0x611a0)
/* 00061186 */ PUSHSTRUCTPAGE                           ; stack:  0 ->  1 (+1)
/* 00061188 */ PUSH 0                                   ; stack:  1 ->  2 (+1)
/* 0006118e */ SH_GLOBALREF g_globalTimer               ; stack:  2 ->  2 (0)
/* 00061194 */ CALLMETHOD 3575                          ; stack:  2 ->  0 (-2)
/* 0006119a */ ASSIGN                                   ; stack:  0 -> -2 (-2)
/* 0006119c */ POP                                      ; stack: -2 -> -3 (-1)
/* 0006119e */ RETURN                                   ; stack: -3 -> -3 (0)
; ENDFUNC LocalTimer@reset

; FUNC LocalTimer@getTime (0x611a6-0x611c4)
/* 000611a6 */ SH_GLOBALREF g_globalTimer               ; stack:  0 ->  0 (0)
/* 000611ac */ CALLMETHOD 3575                          ; stack:  0 -> -2 (-2)
/* 000611b2 */ SH_STRUCTREF LocalTimer.start_           ; stack: -2 -> -2 (0)
/* 000611b8 */ SUB                                      ; stack: -2 -> -3 (-1)
/* 000611ba */ RETURN                                   ; stack: -3 -> -3 (0)
/* 000611bc */ PUSH 0                                   ; stack: -3 -> -2 (+1)
/* 000611c2 */ RETURN                                   ; stack: -2 -> -2 (0)
; ENDFUNC LocalTimer@getTime

