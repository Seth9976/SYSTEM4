; FUNC CModeCGModel@0 (0x1f676-0x1f688)
/* 0001f676 */ PUSHSTRUCTPAGE                           ; stack:  0 ->  1 (+1)
/* 0001f678 */ CALLMETHOD 7132                          ; stack:  1 -> -1 (-2)
/* 0001f67e */ PUSHSTRUCTPAGE                           ; stack: -1 ->  0 (+1)
/* 0001f680 */ CALLMETHOD 1295                          ; stack:  0 -> -2 (-2)
/* 0001f686 */ RETURN                                   ; stack: -2 -> -2 (0)
; ENDFUNC CModeCGModel@0

; FUNC CModeCGModel@Clear (0x1f68e-0x1f6f8)
/* 0001f68e */ SH_STRUCTREF CModeCGModel.m_CGName       ; stack:  0 ->  0 (0)
/* 0001f694 */ (SH_S_ASSIGN_STR0 0)                     ; stack:  0 ->  0 (0)
/* 0001f69a */ SH_STRUCTREF CModeCGModel.m_AutoModeFlatName ; stack:  0 ->  0 (0)
/* 0001f6a0 */ (SH_S_ASSIGN_STR0 0)                     ; stack:  0 ->  0 (0)
/* 0001f6a6 */ (SH_MEM_ASSIGN_IMM (2, 0l))              ; stack:  0 ->  0 (0)
/* 0001f6b0 */ (SH_MEM_ASSIGN_IMM (3, 0l))              ; stack:  0 ->  0 (0)
/* 0001f6ba */ (SH_MEM_ASSIGN_IMM (4, 0l))              ; stack:  0 ->  0 (0)
/* 0001f6c4 */ PUSHSTRUCTPAGE                           ; stack:  0 ->  1 (+1)
/* 0001f6c6 */ PUSH 5                                   ; stack:  1 ->  2 (+1)
/* 0001f6cc */ PUSH 0                                   ; stack:  2 ->  3 (+1)
/* 0001f6d2 */ ITOB                                     ; stack:  3 ->  3 (0)
/* 0001f6d4 */ ASSIGN                                   ; stack:  3 ->  1 (-2)
/* 0001f6d6 */ POP                                      ; stack:  1 ->  0 (-1)
/* 0001f6d8 */ (SH_MEM_ASSIGN_IMM (6, 0l))              ; stack:  0 ->  0 (0)
/* 0001f6e2 */ (SH_MEM_ASSIGN_IMM (7, 0l))              ; stack:  0 ->  0 (0)
/* 0001f6ec */ (SH_MEM_ASSIGN_IMM (8, 0l))              ; stack:  0 ->  0 (0)
/* 0001f6f6 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC CModeCGModel@Clear

; FUNC CModeCGModel@GetCG (0x1f6fe-0x1f70e)
/* 0001f6fe */ (SH_STRUCT_S_REF 0)                      ; stack:  0 ->  0 (0)
/* 0001f704 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 0001f706 */ S_PUSH 0 ("")                            ; stack:  0 ->  1 (+1)
/* 0001f70c */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC CModeCGModel@GetCG

; FUNC CModeCGModel@GetFlatName (0x1f714-0x1f724)
/* 0001f714 */ (SH_STRUCT_S_REF 1)                      ; stack:  0 ->  0 (0)
/* 0001f71a */ RETURN                                   ; stack:  0 ->  0 (0)
/* 0001f71c */ S_PUSH 0 ("")                            ; stack:  0 ->  1 (+1)
/* 0001f722 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC CModeCGModel@GetFlatName

; FUNC CModeCGModel@GetX (0x1f72a-0x1f73a)
/* 0001f72a */ SH_STRUCTREF CModeCGModel.m_nX           ; stack:  0 ->  0 (0)
/* 0001f730 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 0001f732 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 0001f738 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC CModeCGModel@GetX

; FUNC CModeCGModel@GetY (0x1f740-0x1f750)
/* 0001f740 */ SH_STRUCTREF CModeCGModel.m_nY           ; stack:  0 ->  0 (0)
/* 0001f746 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 0001f748 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 0001f74e */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC CModeCGModel@GetY

; FUNC CModeCGModel@GetZ (0x1f756-0x1f766)
/* 0001f756 */ SH_STRUCTREF CModeCGModel.m_nZ           ; stack:  0 ->  0 (0)
/* 0001f75c */ RETURN                                   ; stack:  0 ->  0 (0)
/* 0001f75e */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 0001f764 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC CModeCGModel@GetZ

; FUNC CModeCGModel@GetShow (0x1f76c-0x1f77c)
/* 0001f76c */ SH_STRUCTREF CModeCGModel.m_bShow        ; stack:  0 ->  0 (0)
/* 0001f772 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 0001f774 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 0001f77a */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC CModeCGModel@GetShow

; FUNC CModeCGModel@GetCGBeginNumber (0x1f782-0x1f792)
/* 0001f782 */ SH_STRUCTREF CModeCGModel.m_CGBeginNumber ; stack:  0 ->  0 (0)
/* 0001f788 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 0001f78a */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 0001f790 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC CModeCGModel@GetCGBeginNumber

; FUNC CModeCGModel@GetCGCount (0x1f798-0x1f7a8)
/* 0001f798 */ SH_STRUCTREF CModeCGModel.m_CGCount      ; stack:  0 ->  0 (0)
/* 0001f79e */ RETURN                                   ; stack:  0 ->  0 (0)
/* 0001f7a0 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 0001f7a6 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC CModeCGModel@GetCGCount

; FUNC CModeCGModel@GetCGSwitchTime (0x1f7ae-0x1f7be)
/* 0001f7ae */ SH_STRUCTREF CModeCGModel.m_CGSwitchTime ; stack:  0 ->  0 (0)
/* 0001f7b4 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 0001f7b6 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 0001f7bc */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC CModeCGModel@GetCGSwitchTime

; FUNC CModeCGModel@SetCG (0x1f7c4-0x1f7d0)
/* 0001f7c4 */ (SH_STRUCTREF_SASSIGN_LOCALSREF (0, 0))  ; stack:  0 ->  0 (0)
/* 0001f7ce */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC CModeCGModel@SetCG

; FUNC CModeCGModel@SetFlatName (0x1f7d6-0x1f7e2)
/* 0001f7d6 */ (SH_STRUCTREF_SASSIGN_LOCALSREF (1, 0))  ; stack:  0 ->  0 (0)
/* 0001f7e0 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC CModeCGModel@SetFlatName

; FUNC CModeCGModel@SetX (0x1f7e8-0x1f7f4)
/* 0001f7e8 */ (SH_MEM_ASSIGN_LOCAL (2, 0))             ; stack:  0 ->  0 (0)
/* 0001f7f2 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC CModeCGModel@SetX

; FUNC CModeCGModel@SetY (0x1f7fa-0x1f806)
/* 0001f7fa */ (SH_MEM_ASSIGN_LOCAL (3, 0))             ; stack:  0 ->  0 (0)
/* 0001f804 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC CModeCGModel@SetY

; FUNC CModeCGModel@SetZ (0x1f80c-0x1f818)
/* 0001f80c */ (SH_MEM_ASSIGN_LOCAL (4, 0))             ; stack:  0 ->  0 (0)
/* 0001f816 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC CModeCGModel@SetZ

; FUNC CModeCGModel@SetShow (0x1f81e-0x1f82a)
/* 0001f81e */ (SH_MEM_ASSIGN_LOCAL (5, 0))             ; stack:  0 ->  0 (0)
/* 0001f828 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC CModeCGModel@SetShow

; FUNC CModeCGModel@SetCGBeginNumber (0x1f830-0x1f83c)
/* 0001f830 */ (SH_MEM_ASSIGN_LOCAL (6, 0))             ; stack:  0 ->  0 (0)
/* 0001f83a */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC CModeCGModel@SetCGBeginNumber

; FUNC CModeCGModel@SetCGCount (0x1f842-0x1f84e)
/* 0001f842 */ (SH_MEM_ASSIGN_LOCAL (7, 0))             ; stack:  0 ->  0 (0)
/* 0001f84c */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC CModeCGModel@SetCGCount

; FUNC CModeCGModel@SetCGSwitchTime (0x1f854-0x1f860)
/* 0001f854 */ (SH_MEM_ASSIGN_LOCAL (8, 0))             ; stack:  0 ->  0 (0)
/* 0001f85e */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC CModeCGModel@SetCGSwitchTime

