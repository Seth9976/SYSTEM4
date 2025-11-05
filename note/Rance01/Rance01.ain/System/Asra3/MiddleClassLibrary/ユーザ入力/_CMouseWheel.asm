; FUNC _CMouseWheel@_IsFore (0x38d32-0x38d4c)
/* 00038d32 */ SH_STRUCTREF _CMouseWheel._m_fore        ; stack:  0 ->  0 (0)
/* 00038d38 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00038d3e */ NOTE                                     ; stack:  1 ->  0 (-1)
/* 00038d40 */ ITOB                                     ; stack:  0 ->  0 (0)
/* 00038d42 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00038d44 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00038d4a */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC _CMouseWheel@_IsFore

; FUNC _CMouseWheel@_IsBack (0x38d52-0x38d6c)
/* 00038d52 */ SH_STRUCTREF _CMouseWheel._m_back        ; stack:  0 ->  0 (0)
/* 00038d58 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00038d5e */ NOTE                                     ; stack:  1 ->  0 (-1)
/* 00038d60 */ ITOB                                     ; stack:  0 ->  0 (0)
/* 00038d62 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00038d64 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00038d6a */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC _CMouseWheel@_IsBack

; FUNC _CMouseWheel@GetForeCount (0x38d72-0x38d82)
/* 00038d72 */ SH_STRUCTREF _CMouseWheel._m_fore        ; stack:  0 ->  0 (0)
/* 00038d78 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00038d7a */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00038d80 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC _CMouseWheel@GetForeCount

; FUNC _CMouseWheel@GetBackCount (0x38d88-0x38d98)
/* 00038d88 */ SH_STRUCTREF _CMouseWheel._m_back        ; stack:  0 ->  0 (0)
/* 00038d8e */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00038d90 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00038d96 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC _CMouseWheel@GetBackCount

; FUNC _CMouseWheel@_GetDelta (0x38d9e-0x38db6)
/* 00038d9e */ SH_STRUCTREF _CMouseWheel._m_back        ; stack:  0 ->  0 (0)
/* 00038da4 */ SH_STRUCTREF _CMouseWheel._m_fore        ; stack:  0 ->  0 (0)
/* 00038daa */ SUB                                      ; stack:  0 -> -1 (-1)
/* 00038dac */ RETURN                                   ; stack: -1 -> -1 (0)
/* 00038dae */ PUSH 0                                   ; stack: -1 ->  0 (+1)
/* 00038db4 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC _CMouseWheel@_GetDelta

; FUNC _CMouseWheel@0 (0x38dbc-0x38dda)
/* 00038dbc */ PUSHSTRUCTPAGE                           ; stack:  0 ->  1 (+1)
/* 00038dbe */ CALLMETHOD 7159                          ; stack:  1 -> -1 (-2)
/* 00038dc4 */ (SH_MEM_ASSIGN_IMM (0, 0l))              ; stack: -1 -> -1 (0)
/* 00038dce */ (SH_MEM_ASSIGN_IMM (1, 0l))              ; stack: -1 -> -1 (0)
/* 00038dd8 */ RETURN                                   ; stack: -1 -> -1 (0)
; ENDFUNC _CMouseWheel@0

; FUNC _CMouseWheel@_Update (0x38de0-0x38e10)
/* 00038de0 */ PUSHSTRUCTPAGE                           ; stack:  0 ->  1 (+1)
/* 00038de2 */ PUSH 0                                   ; stack:  1 ->  2 (+1)
/* 00038de8 */ PUSHSTRUCTPAGE                           ; stack:  2 ->  3 (+1)
/* 00038dea */ PUSH 1                                   ; stack:  3 ->  4 (+1)
/* 00038df0 */ CALLFUNC AFL_MouseWheel_GetCount (args: 2) ; stack:  4 ->  2 (-2)
/* 00038df6 */ SH_LOCALREF _bClear                      ; stack:  2 ->  2 (0)
/* 00038dfc */ IFZ 0x38e0e                              ; stack:  2 ->  1 (-1)
/* 00038e02 */ CALLFUNC AFL_MouseWheel_ClearCount (args: 0) ; stack:  1 ->  1 (0)
/* 00038e08 */ JUMP 0x38e0e                             ; stack:  1 ->  1 (0)
/* 00038e0e */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC _CMouseWheel@_Update

; FUNC _CMouseWheel@_Clear (0x38e16-0x38e32)
/* 00038e16 */ CALLFUNC AFL_MouseWheel_ClearCount (args: 0) ; stack:  0 ->  0 (0)
/* 00038e1c */ (SH_MEM_ASSIGN_IMM (0, 0l))              ; stack:  0 ->  0 (0)
/* 00038e26 */ (SH_MEM_ASSIGN_IMM (1, 0l))              ; stack:  0 ->  0 (0)
/* 00038e30 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC _CMouseWheel@_Clear

