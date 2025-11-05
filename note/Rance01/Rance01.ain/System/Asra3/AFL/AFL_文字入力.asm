; FUNC AFL_InputText_Begin (0x5b774-0x5b794)
/* 0005b774 */ SH_GLOBALREF g_InputText                 ; stack:  0 ->  0 (0)
/* 0005b77a */ SH_LOCALREF InputTextAreaNumber          ; stack:  0 ->  0 (0)
/* 0005b780 */ (SH_LOCAL_S_REF 1)                       ; stack:  0 ->  0 (0)
/* 0005b786 */ PUSH 1                                   ; stack:  0 ->  1 (+1)
/* 0005b78c */ CALLMETHOD 1009                          ; stack:  1 -> -1 (-2)
/* 0005b792 */ RETURN                                   ; stack: -1 -> -1 (0)
; ENDFUNC AFL_InputText_Begin

; FUNC AFL_InputHalfText_Begin (0x5b7a0-0x5b7c0)
/* 0005b7a0 */ SH_GLOBALREF g_InputText                 ; stack:  0 ->  0 (0)
/* 0005b7a6 */ SH_LOCALREF InputTextAreaNumber          ; stack:  0 ->  0 (0)
/* 0005b7ac */ (SH_LOCAL_S_REF 1)                       ; stack:  0 ->  0 (0)
/* 0005b7b2 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 0005b7b8 */ CALLMETHOD 1009                          ; stack:  1 -> -1 (-2)
/* 0005b7be */ RETURN                                   ; stack: -1 -> -1 (0)
; ENDFUNC AFL_InputHalfText_Begin

; FUNC AFL_InputText_Update (0x5b7cc-0x5b7da)
/* 0005b7cc */ SH_GLOBALREF g_InputText                 ; stack:  0 ->  0 (0)
/* 0005b7d2 */ CALLMETHOD 1010                          ; stack:  0 -> -2 (-2)
/* 0005b7d8 */ RETURN                                   ; stack: -2 -> -2 (0)
; ENDFUNC AFL_InputText_Update

; FUNC AFL_InputText_End (0x5b7e6-0x5b7f4)
/* 0005b7e6 */ SH_GLOBALREF g_InputText                 ; stack:  0 ->  0 (0)
/* 0005b7ec */ CALLMETHOD 1011                          ; stack:  0 -> -2 (-2)
/* 0005b7f2 */ RETURN                                   ; stack: -2 -> -2 (0)
; ENDFUNC AFL_InputText_End

; FUNC AFL_InputText_IsEnd (0x5b800-0x5b816)
/* 0005b800 */ SH_GLOBALREF g_InputText                 ; stack:  0 ->  0 (0)
/* 0005b806 */ CALLMETHOD 1012                          ; stack:  0 -> -2 (-2)
/* 0005b80c */ RETURN                                   ; stack: -2 -> -2 (0)
/* 0005b80e */ PUSH 0                                   ; stack: -2 -> -1 (+1)
/* 0005b814 */ RETURN                                   ; stack: -1 -> -1 (0)
; ENDFUNC AFL_InputText_IsEnd

; FUNC AFL_InputText_GetText (0x5b822-0x5b838)
/* 0005b822 */ SH_GLOBALREF g_InputText                 ; stack:  0 ->  0 (0)
/* 0005b828 */ CALLMETHOD 1013                          ; stack:  0 -> -2 (-2)
/* 0005b82e */ RETURN                                   ; stack: -2 -> -2 (0)
/* 0005b830 */ S_PUSH 0 ("")                            ; stack: -2 -> -1 (+1)
/* 0005b836 */ RETURN                                   ; stack: -1 -> -1 (0)
; ENDFUNC AFL_InputText_GetText

; FUNC AFL_InputText_IsConverting (0x5b844-0x5b85a)
/* 0005b844 */ SH_GLOBALREF g_InputText                 ; stack:  0 ->  0 (0)
/* 0005b84a */ CALLMETHOD 1018                          ; stack:  0 -> -2 (-2)
/* 0005b850 */ RETURN                                   ; stack: -2 -> -2 (0)
/* 0005b852 */ PUSH 0                                   ; stack: -2 -> -1 (+1)
/* 0005b858 */ RETURN                                   ; stack: -1 -> -1 (0)
; ENDFUNC AFL_InputText_IsConverting

