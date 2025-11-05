; FUNC CMessageWindowModelManager@0 (0x1e218-0x1e222)
/* 0001e218 */ PUSHSTRUCTPAGE                           ; stack:  0 ->  1 (+1)
/* 0001e21a */ CALLMETHOD 7128                          ; stack:  1 -> -1 (-2)
/* 0001e220 */ RETURN                                   ; stack: -1 -> -1 (0)
; ENDFUNC CMessageWindowModelManager@0

; FUNC CMessageWindowModelManager@Init (0x1e228-0x1e24e)
/* 0001e228 */ PUSHSTRUCTPAGE                           ; stack:  0 ->  1 (+1)
/* 0001e22a */ PUSH 1                                   ; stack:  1 ->  2 (+1)
/* 0001e230 */ PUSH 40                                  ; stack:  2 ->  3 (+1)
/* 0001e236 */ PUSH 1                                   ; stack:  3 ->  4 (+1)
/* 0001e23c */ A_ALLOC                                  ; stack:  4 ->  4 (0)
/* 0001e23e */ PUSH 1                                   ; stack:  4 ->  5 (+1)
/* 0001e244 */ RETURN                                   ; stack:  5 ->  5 (0)
/* 0001e246 */ PUSH 0                                   ; stack:  5 ->  6 (+1)
/* 0001e24c */ RETURN                                   ; stack:  6 ->  6 (0)
; ENDFUNC CMessageWindowModelManager@Init

; FUNC CMessageWindowModelManager@SetZ (0x1e254-0x1e260)
/* 0001e254 */ (SH_MEM_ASSIGN_LOCAL (0, 0))             ; stack:  0 ->  0 (0)
/* 0001e25e */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC CMessageWindowModelManager@SetZ

; FUNC CMessageWindowModelManager@GetZ (0x1e266-0x1e276)
/* 0001e266 */ SH_STRUCTREF CMessageWindowModelManager.m_Z ; stack:  0 ->  0 (0)
/* 0001e26c */ RETURN                                   ; stack:  0 ->  0 (0)
/* 0001e26e */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 0001e274 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC CMessageWindowModelManager@GetZ

; FUNC CMessageWindowModelManager@GetMessageWindow (0x1e27c-0x1e298)
/* 0001e27c */ SH_STRUCTREF CMessageWindowModelManager.m_ModelList ; stack:  0 ->  0 (0)
/* 0001e282 */ SH_LOCALREF MessageWindowNumber          ; stack:  0 ->  0 (0)
/* 0001e288 */ REF                                      ; stack:  0 -> -1 (-1)
/* 0001e28a */ DUP                                      ; stack: -1 ->  0 (+1)
/* 0001e28c */ SP_INC                                   ; stack:  0 ->  0 (0)
/* 0001e28e */ RETURN                                   ; stack:  0 ->  0 (0)
/* 0001e290 */ PUSH -1                                  ; stack:  0 ->  1 (+1)
/* 0001e296 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC CMessageWindowModelManager@GetMessageWindow

