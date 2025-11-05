; FUNC AFL_LogViewer_OpenViewer (0x16c22e-0x16c23c)
/* 0016c22e */ CALLHLL CrayfishLogViewer.OpenViewer (args: 0) ; stack:  0 ->  0 (0)
/* 0016c238 */ POP                                      ; stack:  0 -> -1 (-1)
/* 0016c23a */ RETURN                                   ; stack: -1 -> -1 (0)
; ENDFUNC AFL_LogViewer_OpenViewer

; FUNC AFL_LogViewer_CloseViewer (0x16c248-0x16c256)
/* 0016c248 */ CALLHLL CrayfishLogViewer.CloseViewer (args: 0) ; stack:  0 ->  0 (0)
/* 0016c252 */ POP                                      ; stack:  0 -> -1 (-1)
/* 0016c254 */ RETURN                                   ; stack: -1 -> -1 (0)
; ENDFUNC AFL_LogViewer_CloseViewer

; FUNC AFL_LogViewer_IsOpenedViewer (0x16c262-0x16c276)
/* 0016c262 */ CALLHLL CrayfishLogViewer.IsOpenedViewer (args: 0) ; stack:  0 ->  0 (0)
/* 0016c26c */ RETURN                                   ; stack:  0 ->  0 (0)
/* 0016c26e */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 0016c274 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC AFL_LogViewer_IsOpenedViewer

; FUNC AFL_LogViewer_SetWindowTitleName (0x16c282-0x16c298)
/* 0016c282 */ PUSHLOCALPAGE                            ; stack:  0 ->  1 (+1)
/* 0016c284 */ PUSH 0                                   ; stack:  1 ->  2 (+1)
/* 0016c28a */ S_REF                                    ; stack:  2 ->  2 (0)
/* 0016c28c */ CALLHLL CrayfishLogViewer.SetWindowTitleName (args: 1) ; stack:  2 ->  2 (0)
/* 0016c296 */ RETURN                                   ; stack:  2 ->  2 (0)
; ENDFUNC AFL_LogViewer_SetWindowTitleName

; FUNC AFL_LogViewer_AddText (0x16c2a4-0x16c2bc)
/* 0016c2a4 */ PUSHLOCALPAGE                            ; stack:  0 ->  1 (+1)
/* 0016c2a6 */ PUSH 0                                   ; stack:  1 ->  2 (+1)
/* 0016c2ac */ S_REF                                    ; stack:  2 ->  2 (0)
/* 0016c2ae */ CALLHLL CrayfishLogViewer.AddText (args: 1) ; stack:  2 ->  2 (0)
/* 0016c2b8 */ POP                                      ; stack:  2 ->  1 (-1)
/* 0016c2ba */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC AFL_LogViewer_AddText

; FUNC AFL_LogViewer_ClearText (0x16c2c8-0x16c2d6)
/* 0016c2c8 */ CALLHLL CrayfishLogViewer.ClearText (args: 0) ; stack:  0 ->  0 (0)
/* 0016c2d2 */ POP                                      ; stack:  0 -> -1 (-1)
/* 0016c2d4 */ RETURN                                   ; stack: -1 -> -1 (0)
; ENDFUNC AFL_LogViewer_ClearText

