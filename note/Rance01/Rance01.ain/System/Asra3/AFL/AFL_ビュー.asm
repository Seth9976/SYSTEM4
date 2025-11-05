; FUNC AFL_KeepPreviousView_SetMode (0x57b60-0x57b74)
/* 00057b60 */ SH_LOCALREF KeepPreviousViewMode         ; stack:  0 ->  0 (0)
/* 00057b66 */ CALLHLL ChipmunkSpriteEngine.KeepPreviousView_SetMode (args: 1) ; stack:  0 ->  0 (0)
/* 00057b70 */ POP                                      ; stack:  0 -> -1 (-1)
/* 00057b72 */ RETURN                                   ; stack: -1 -> -1 (0)
; ENDFUNC AFL_KeepPreviousView_SetMode

; FUNC AFL_KeepPreviousView_GetMode (0x57b80-0x57b94)
/* 00057b80 */ CALLHLL ChipmunkSpriteEngine.KeepPreviousView_GetMode (args: 0) ; stack:  0 ->  0 (0)
/* 00057b8a */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00057b8c */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00057b92 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC AFL_KeepPreviousView_GetMode

; FUNC AFL_View_Update (0x57ba0-0x57bba)
/* 00057ba0 */ SH_LOCALREF 未読既読スキップ     ; stack:  0 ->  0 (0)
/* 00057ba6 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00057bac */ F_PUSH 0.000000                          ; stack:  1 ->  2 (+1)
/* 00057bb2 */ CALLFUNC SYS_View_Update (args: 3)       ; stack:  2 -> -1 (-3)
/* 00057bb8 */ RETURN                                   ; stack: -1 -> -1 (0)
; ENDFUNC AFL_View_Update

; FUNC AFL_View_GetWidth (0x57bc6-0x57bda)
/* 00057bc6 */ CALLHLL SystemService.GetViewWidth (args: 0) ; stack:  0 ->  0 (0)
/* 00057bd0 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00057bd2 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00057bd8 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC AFL_View_GetWidth

; FUNC AFL_View_GetHeight (0x57be6-0x57bfa)
/* 00057be6 */ CALLHLL SystemService.GetViewHeight (args: 0) ; stack:  0 ->  0 (0)
/* 00057bf0 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00057bf2 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00057bf8 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC AFL_View_GetHeight

; FUNC AFL_View_SetMode (0x57c06-0x57c6e)
/* 00057c06 */ SH_LOCALREF Mode                         ; stack:  0 ->  0 (0)
/* 00057c0c */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00057c12 */ NOTE                                     ; stack:  1 ->  0 (-1)
/* 00057c14 */ IFZ 0x57c3a                              ; stack:  0 -> -1 (-1)
/* 00057c1a */ SH_LOCALREF Mode                         ; stack: -1 -> -1 (0)
/* 00057c20 */ PUSH 1                                   ; stack: -1 ->  0 (+1)
/* 00057c26 */ NOTE                                     ; stack:  0 -> -1 (-1)
/* 00057c28 */ IFZ 0x57c3a                              ; stack: -1 -> -2 (-1)
/* 00057c2e */ PUSH 1                                   ; stack: -2 -> -1 (+1)
/* 00057c34 */ JUMP 0x57c40                             ; stack: -1 -> -1 (0)
/* 00057c3a */ PUSH 0                                   ; stack: -1 ->  0 (+1)
/* 00057c40 */ IFZ 0x57c54                              ; stack:  0 -> -1 (-1)
/* 00057c46 */ PUSH 0                                   ; stack: -1 ->  0 (+1)
/* 00057c4c */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00057c4e */ JUMP 0x57c54                             ; stack:  0 ->  0 (0)
/* 00057c54 */ SH_LOCALREF Mode                         ; stack:  0 ->  0 (0)
/* 00057c5a */ CALLHLL ChipmunkSpriteEngine.VIEW_SetMode (args: 1) ; stack:  0 ->  0 (0)
/* 00057c64 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00057c66 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00057c6c */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC AFL_View_SetMode

; FUNC AFL_View_GetMode (0x57c7a-0x57c8e)
/* 00057c7a */ CALLHLL ChipmunkSpriteEngine.VIEW_GetMode (args: 0) ; stack:  0 ->  0 (0)
/* 00057c84 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00057c86 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00057c8c */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC AFL_View_GetMode

