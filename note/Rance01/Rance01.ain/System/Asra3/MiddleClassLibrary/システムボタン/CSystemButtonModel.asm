; FUNC CSystemButtonModel@0 (0x1cf84-0x1cfee)
/* 0001cf84 */ PUSHSTRUCTPAGE                           ; stack:  0 ->  1 (+1)
/* 0001cf86 */ CALLMETHOD 7124                          ; stack:  1 -> -1 (-2)
/* 0001cf8c */ (SH_MEM_ASSIGN_IMM (1, -2147483648l))    ; stack: -1 -> -1 (0)
/* 0001cf96 */ (SH_MEM_ASSIGN_IMM (2, -2147483648l))    ; stack: -1 -> -1 (0)
/* 0001cfa0 */ (SH_MEM_ASSIGN_IMM (3, 1l))              ; stack: -1 -> -1 (0)
/* 0001cfaa */ (SH_MEM_ASSIGN_IMM (0, 0l))              ; stack: -1 -> -1 (0)
/* 0001cfb4 */ (SH_MEM_ASSIGN_IMM (9, 0l))              ; stack: -1 -> -1 (0)
/* 0001cfbe */ (SH_MEM_ASSIGN_IMM (11, 1l))             ; stack: -1 -> -1 (0)
/* 0001cfc8 */ SH_STRUCTREF CSystemButtonModel.m_VisibleRect ; stack: -1 -> -1 (0)
/* 0001cfce */ PUSH -2147483648                         ; stack: -1 ->  0 (+1)
/* 0001cfd4 */ PUSH -2147483648                         ; stack:  0 ->  1 (+1)
/* 0001cfda */ PUSH -2147483648                         ; stack:  1 ->  2 (+1)
/* 0001cfe0 */ PUSH -2147483648                         ; stack:  2 ->  3 (+1)
/* 0001cfe6 */ CALLMETHOD 62                            ; stack:  3 ->  1 (-2)
/* 0001cfec */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC CSystemButtonModel@0

; FUNC CSystemButtonModel@SetButtonModel (0x1cff4-0x1d046)
/* 0001cff4 */ (SH_MEM_ASSIGN_LOCAL (1, 0))             ; stack:  0 ->  0 (0)
/* 0001cffe */ (SH_MEM_ASSIGN_LOCAL (2, 1))             ; stack:  0 ->  0 (0)
/* 0001d008 */ (SH_MEM_ASSIGN_LOCAL (3, 2))             ; stack:  0 ->  0 (0)
/* 0001d012 */ (SH_STRUCTREF_SASSIGN_LOCALSREF (4, 3))  ; stack:  0 ->  0 (0)
/* 0001d01c */ (SH_STRUCTREF_SASSIGN_LOCALSREF (5, 4))  ; stack:  0 ->  0 (0)
/* 0001d026 */ (SH_STRUCTREF_SASSIGN_LOCALSREF (6, 5))  ; stack:  0 ->  0 (0)
/* 0001d030 */ (SH_MEM_ASSIGN_LOCAL (0, 6))             ; stack:  0 ->  0 (0)
/* 0001d03a */ (SH_MEM_ASSIGN_LOCAL (11, 7))            ; stack:  0 ->  0 (0)
/* 0001d044 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC CSystemButtonModel@SetButtonModel

; FUNC CSystemButtonModel@SetButtonModelForReminisceMode (0x1d04c-0x1d062)
/* 0001d04c */ (SH_STRUCTREF_SASSIGN_LOCALSREF (8, 0))  ; stack:  0 ->  0 (0)
/* 0001d056 */ (SH_MEM_ASSIGN_IMM (9, 1l))              ; stack:  0 ->  0 (0)
/* 0001d060 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC CSystemButtonModel@SetButtonModelForReminisceMode

; FUNC CSystemButtonModel@SetDisableCG (0x1d068-0x1d074)
/* 0001d068 */ (SH_STRUCTREF_SASSIGN_LOCALSREF (7, 0))  ; stack:  0 ->  0 (0)
/* 0001d072 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC CSystemButtonModel@SetDisableCG

; FUNC CSystemButtonModel@SetIsEnableSystemButtonFunc (0x1d07a-0x1d086)
/* 0001d07a */ (SH_MEM_ASSIGN_LOCAL (10, 0))            ; stack:  0 ->  0 (0)
/* 0001d084 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC CSystemButtonModel@SetIsEnableSystemButtonFunc

; FUNC CSystemButtonModel@IsEnable (0x1d08c-0x1d110)
/* 0001d08c */ (SH_IF_STRUCTREF_EQ_IMM (10, 0l, 118980)) ; stack:  0 ->  0 (0)
/* 0001d09a */ SH_STRUCTREF CSystemButtonModel.m_IsEnableSystemButtonFunc ; stack:  0 ->  0 (0)
/* 0001d0a0 */ PUSH 1                                   ; stack:  0 ->  1 (+1)
/* 0001d0a6 */ CALLFUNC2                                ; stack:  1 ->  1 (0)
/* 0001d0a8 */ NOT                                      ; stack:  1 ->  1 (0)
/* 0001d0aa */ IFZ 0x1d0be                              ; stack:  1 ->  0 (-1)
/* 0001d0b0 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 0001d0b6 */ RETURN                                   ; stack:  1 ->  1 (0)
/* 0001d0b8 */ JUMP 0x1d0be                             ; stack:  1 ->  1 (0)
/* 0001d0be */ JUMP 0x1d0c4                             ; stack:  1 ->  1 (0)
/* 0001d0c4 */ SH_GLOBALREF _g_回想中                ; stack:  1 ->  1 (0)
/* 0001d0ca */ IFZ 0x1d0e6                              ; stack:  1 ->  0 (-1)
/* 0001d0d0 */ (SH_IF_STRUCTREF_Z (9, 119014))          ; stack:  0 ->  0 (0)
/* 0001d0da */ PUSH 1                                   ; stack:  0 ->  1 (+1)
/* 0001d0e0 */ JUMP 0x1d0ec                             ; stack:  1 ->  1 (0)
/* 0001d0e6 */ PUSH 0                                   ; stack:  1 ->  2 (+1)
/* 0001d0ec */ IFZ 0x1d100                              ; stack:  2 ->  1 (-1)
/* 0001d0f2 */ PUSH 0                                   ; stack:  1 ->  2 (+1)
/* 0001d0f8 */ RETURN                                   ; stack:  2 ->  2 (0)
/* 0001d0fa */ JUMP 0x1d100                             ; stack:  2 ->  2 (0)
/* 0001d100 */ PUSH 1                                   ; stack:  2 ->  3 (+1)
/* 0001d106 */ RETURN                                   ; stack:  3 ->  3 (0)
/* 0001d108 */ PUSH 0                                   ; stack:  3 ->  4 (+1)
/* 0001d10e */ RETURN                                   ; stack:  4 ->  4 (0)
; ENDFUNC CSystemButtonModel@IsEnable

; FUNC CSystemButtonModel@GetFunction (0x1d116-0x1d126)
/* 0001d116 */ SH_STRUCTREF CSystemButtonModel.m_FunctionObject ; stack:  0 ->  0 (0)
/* 0001d11c */ RETURN                                   ; stack:  0 ->  0 (0)
/* 0001d11e */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 0001d124 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC CSystemButtonModel@GetFunction

; FUNC CSystemButtonModel@GetX (0x1d12c-0x1d13c)
/* 0001d12c */ SH_STRUCTREF CSystemButtonModel.m_X      ; stack:  0 ->  0 (0)
/* 0001d132 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 0001d134 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 0001d13a */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC CSystemButtonModel@GetX

; FUNC CSystemButtonModel@GetY (0x1d142-0x1d152)
/* 0001d142 */ SH_STRUCTREF CSystemButtonModel.m_Y      ; stack:  0 ->  0 (0)
/* 0001d148 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 0001d14a */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 0001d150 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC CSystemButtonModel@GetY

; FUNC CSystemButtonModel@GetZ (0x1d158-0x1d168)
/* 0001d158 */ SH_STRUCTREF CSystemButtonModel.m_Z      ; stack:  0 ->  0 (0)
/* 0001d15e */ RETURN                                   ; stack:  0 ->  0 (0)
/* 0001d160 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 0001d166 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC CSystemButtonModel@GetZ

; FUNC CSystemButtonModel@GetPlainCGName (0x1d16e-0x1d17e)
/* 0001d16e */ (SH_STRUCT_S_REF 4)                      ; stack:  0 ->  0 (0)
/* 0001d174 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 0001d176 */ S_PUSH 0 ("")                            ; stack:  0 ->  1 (+1)
/* 0001d17c */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC CSystemButtonModel@GetPlainCGName

; FUNC CSystemButtonModel@GetOnCursorCGName (0x1d184-0x1d194)
/* 0001d184 */ (SH_STRUCT_S_REF 5)                      ; stack:  0 ->  0 (0)
/* 0001d18a */ RETURN                                   ; stack:  0 ->  0 (0)
/* 0001d18c */ S_PUSH 0 ("")                            ; stack:  0 ->  1 (+1)
/* 0001d192 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC CSystemButtonModel@GetOnCursorCGName

; FUNC CSystemButtonModel@GetKeyDownCGName (0x1d19a-0x1d1aa)
/* 0001d19a */ (SH_STRUCT_S_REF 6)                      ; stack:  0 ->  0 (0)
/* 0001d1a0 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 0001d1a2 */ S_PUSH 0 ("")                            ; stack:  0 ->  1 (+1)
/* 0001d1a8 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC CSystemButtonModel@GetKeyDownCGName

; FUNC CSystemButtonModel@GetDisableCGName (0x1d1b0-0x1d1c0)
/* 0001d1b0 */ (SH_STRUCT_S_REF 7)                      ; stack:  0 ->  0 (0)
/* 0001d1b6 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 0001d1b8 */ S_PUSH 0 ("")                            ; stack:  0 ->  1 (+1)
/* 0001d1be */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC CSystemButtonModel@GetDisableCGName

; FUNC CSystemButtonModel@GetCoverCGName (0x1d1c6-0x1d1d6)
/* 0001d1c6 */ (SH_STRUCT_S_REF 8)                      ; stack:  0 ->  0 (0)
/* 0001d1cc */ RETURN                                   ; stack:  0 ->  0 (0)
/* 0001d1ce */ S_PUSH 0 ("")                            ; stack:  0 ->  1 (+1)
/* 0001d1d4 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC CSystemButtonModel@GetCoverCGName

; FUNC CSystemButtonModel@IsInvalidByReminisceMode (0x1d1dc-0x1d1ec)
/* 0001d1dc */ SH_STRUCTREF CSystemButtonModel.m_InvalidByReminisceMode ; stack:  0 ->  0 (0)
/* 0001d1e2 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 0001d1e4 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 0001d1ea */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC CSystemButtonModel@IsInvalidByReminisceMode

; FUNC CSystemButtonModel@GetVisibleRect (0x1d1f2-0x1d206)
/* 0001d1f2 */ SH_STRUCTREF CSystemButtonModel.m_VisibleRect ; stack:  0 ->  0 (0)
/* 0001d1f8 */ DUP                                      ; stack:  0 ->  1 (+1)
/* 0001d1fa */ SP_INC                                   ; stack:  1 ->  1 (0)
/* 0001d1fc */ RETURN                                   ; stack:  1 ->  1 (0)
/* 0001d1fe */ PUSH -1                                  ; stack:  1 ->  2 (+1)
/* 0001d204 */ RETURN                                   ; stack:  2 ->  2 (0)
; ENDFUNC CSystemButtonModel@GetVisibleRect

; FUNC CSystemButtonModel@IsPixelDecide (0x1d20c-0x1d21c)
/* 0001d20c */ SH_STRUCTREF CSystemButtonModel.m_PixelDecide ; stack:  0 ->  0 (0)
/* 0001d212 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 0001d214 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 0001d21a */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC CSystemButtonModel@IsPixelDecide

