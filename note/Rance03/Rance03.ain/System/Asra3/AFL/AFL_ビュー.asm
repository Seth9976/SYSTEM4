; FUNC AFL_KeepPreviousView_SetMode (0x16a76c-0x16a784)
/* 0016a76c */ PUSHLOCALPAGE                            ; stack:  0 ->  1 (+1)
/* 0016a76e */ PUSH 0                                   ; stack:  1 ->  2 (+1)
/* 0016a774 */ REF                                      ; stack:  2 ->  1 (-1)
/* 0016a776 */ CALLHLL ChipmunkSpriteEngine.KeepPreviousView_SetMode (args: 1) ; stack:  1 ->  1 (0)
/* 0016a780 */ POP                                      ; stack:  1 ->  0 (-1)
/* 0016a782 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC AFL_KeepPreviousView_SetMode

; FUNC AFL_KeepPreviousView_GetMode (0x16a790-0x16a7a4)
/* 0016a790 */ CALLHLL ChipmunkSpriteEngine.KeepPreviousView_GetMode (args: 0) ; stack:  0 ->  0 (0)
/* 0016a79a */ RETURN                                   ; stack:  0 ->  0 (0)
/* 0016a79c */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 0016a7a2 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC AFL_KeepPreviousView_GetMode

; FUNC AFL_View_Update (0x16a7b0-0x16a7ce)
/* 0016a7b0 */ PUSHLOCALPAGE                            ; stack:  0 ->  1 (+1)
/* 0016a7b2 */ PUSH 0                                   ; stack:  1 ->  2 (+1)
/* 0016a7b8 */ REF                                      ; stack:  2 ->  1 (-1)
/* 0016a7ba */ PUSH 0                                   ; stack:  1 ->  2 (+1)
/* 0016a7c0 */ F_PUSH 0.000000                          ; stack:  2 ->  3 (+1)
/* 0016a7c6 */ CALLFUNC SYS_View_Update (args: 3)       ; stack:  3 ->  0 (-3)
/* 0016a7cc */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC AFL_View_Update

; FUNC AFL_View_GetDefaultWidth (0x16a7da-0x16a7ee)
/* 0016a7da */ CALLHLL SystemService.GetDefaultViewWidth (args: 0) ; stack:  0 ->  0 (0)
/* 0016a7e4 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 0016a7e6 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 0016a7ec */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC AFL_View_GetDefaultWidth

; FUNC AFL_View_GetDefaultHeight (0x16a7fa-0x16a80e)
/* 0016a7fa */ CALLHLL SystemService.GetDefaultViewHeight (args: 0) ; stack:  0 ->  0 (0)
/* 0016a804 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 0016a806 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 0016a80c */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC AFL_View_GetDefaultHeight

; FUNC AFL_View_GetWidth (0x16a81a-0x16a82e)
/* 0016a81a */ CALLHLL SystemService.GetViewWidth (args: 0) ; stack:  0 ->  0 (0)
/* 0016a824 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 0016a826 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 0016a82c */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC AFL_View_GetWidth

; FUNC AFL_View_GetHeight (0x16a83a-0x16a84e)
/* 0016a83a */ CALLHLL SystemService.GetViewHeight (args: 0) ; stack:  0 ->  0 (0)
/* 0016a844 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 0016a846 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 0016a84c */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC AFL_View_GetHeight

; FUNC AFL_View_SetResizableMode (0x16a85a-0x16a870)
/* 0016a85a */ PUSHLOCALPAGE                            ; stack:  0 ->  1 (+1)
/* 0016a85c */ PUSH 0                                   ; stack:  1 ->  2 (+1)
/* 0016a862 */ REF                                      ; stack:  2 ->  1 (-1)
/* 0016a864 */ CALLHLL SystemService.SetViewResizableMode (args: 1) ; stack:  1 ->  1 (0)
/* 0016a86e */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC AFL_View_SetResizableMode

; FUNC AFL_View_IsResizableMode (0x16a87c-0x16a890)
/* 0016a87c */ CALLHLL SystemService.IsViewResizableMode (args: 0) ; stack:  0 ->  0 (0)
/* 0016a886 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 0016a888 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 0016a88e */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC AFL_View_IsResizableMode

