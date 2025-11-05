; FUNC CF_CASPos (0x147c-0x14bc)
/* 0000147c */ (SH_LOCALDELETE 2)                       ; stack:  0 ->  0 (0)
/* 00001482 */ (SH_LOCALCREATE (2, 17))                 ; stack:  0 ->  0 (0)
/* 0000148c */ SH_LOCALREF Pos                          ; stack:  0 ->  0 (0)
/* 00001492 */ SH_LOCALREF nX                           ; stack:  0 ->  0 (0)
/* 00001498 */ SH_LOCALREF nY                           ; stack:  0 ->  0 (0)
/* 0000149e */ CALLMETHOD 58                            ; stack:  0 -> -2 (-2)
/* 000014a4 */ PUSHLOCALPAGE                            ; stack: -2 -> -1 (+1)
/* 000014a6 */ PUSH 2                                   ; stack: -1 ->  0 (+1)
/* 000014ac */ SR_REF CASPos                            ; stack:  0 ->  0 (0)
/* 000014b2 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 000014b4 */ PUSH -1                                  ; stack:  0 ->  1 (+1)
/* 000014ba */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC CF_CASPos

; FUNC CASPos@Set (0x14c8-0x14de)
/* 000014c8 */ (SH_MEM_ASSIGN_LOCAL (0, 0))             ; stack:  0 ->  0 (0)
/* 000014d2 */ (SH_MEM_ASSIGN_LOCAL (1, 1))             ; stack:  0 ->  0 (0)
/* 000014dc */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC CASPos@Set

; FUNC CASPos@GetX (0x14e4-0x14f4)
/* 000014e4 */ SH_STRUCTREF CASPos.m_nX                 ; stack:  0 ->  0 (0)
/* 000014ea */ RETURN                                   ; stack:  0 ->  0 (0)
/* 000014ec */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 000014f2 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC CASPos@GetX

; FUNC CASPos@GetY (0x14fa-0x150a)
/* 000014fa */ SH_STRUCTREF CASPos.m_nY                 ; stack:  0 ->  0 (0)
/* 00001500 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00001502 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00001508 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC CASPos@GetY

