; FUNC CReplacePair@0 (0x1c366-0x1c370)
/* 0001c366 */ PUSHSTRUCTPAGE                           ; stack:  0 ->  1 (+1)
/* 0001c368 */ CALLMETHOD 10295                         ; stack:  1 -> -1 (-2)
/* 0001c36e */ RETURN                                   ; stack: -1 -> -1 (0)
; ENDFUNC CReplacePair@0

; FUNC CReplacePair@SetPair (0x1c376-0x1c3a8)
/* 0001c376 */ PUSHSTRUCTPAGE                           ; stack:  0 ->  1 (+1)
/* 0001c378 */ PUSH 0                                   ; stack:  1 ->  2 (+1)
/* 0001c37e */ REF                                      ; stack:  2 ->  1 (-1)
/* 0001c380 */ PUSHLOCALPAGE                            ; stack:  1 ->  2 (+1)
/* 0001c382 */ PUSH 0                                   ; stack:  2 ->  3 (+1)
/* 0001c388 */ S_REF                                    ; stack:  3 ->  3 (0)
/* 0001c38a */ S_ASSIGN                                 ; stack:  3 ->  1 (-2)
/* 0001c38c */ S_POP                                    ; stack:  1 ->  0 (-1)
/* 0001c38e */ PUSHSTRUCTPAGE                           ; stack:  0 ->  1 (+1)
/* 0001c390 */ PUSH 1                                   ; stack:  1 ->  2 (+1)
/* 0001c396 */ REF                                      ; stack:  2 ->  1 (-1)
/* 0001c398 */ PUSHLOCALPAGE                            ; stack:  1 ->  2 (+1)
/* 0001c39a */ PUSH 1                                   ; stack:  2 ->  3 (+1)
/* 0001c3a0 */ S_REF                                    ; stack:  3 ->  3 (0)
/* 0001c3a2 */ S_ASSIGN                                 ; stack:  3 ->  1 (-2)
/* 0001c3a4 */ S_POP                                    ; stack:  1 ->  0 (-1)
/* 0001c3a6 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC CReplacePair@SetPair

; FUNC CReplacePair@GetSrc (0x1c3ae-0x1c3c2)
/* 0001c3ae */ PUSHSTRUCTPAGE                           ; stack:  0 ->  1 (+1)
/* 0001c3b0 */ PUSH 0                                   ; stack:  1 ->  2 (+1)
/* 0001c3b6 */ S_REF                                    ; stack:  2 ->  2 (0)
/* 0001c3b8 */ RETURN                                   ; stack:  2 ->  2 (0)
/* 0001c3ba */ S_PUSH 0 ("")                            ; stack:  2 ->  3 (+1)
/* 0001c3c0 */ RETURN                                   ; stack:  3 ->  3 (0)
; ENDFUNC CReplacePair@GetSrc

; FUNC CReplacePair@GetDest (0x1c3c8-0x1c3dc)
/* 0001c3c8 */ PUSHSTRUCTPAGE                           ; stack:  0 ->  1 (+1)
/* 0001c3ca */ PUSH 1                                   ; stack:  1 ->  2 (+1)
/* 0001c3d0 */ S_REF                                    ; stack:  2 ->  2 (0)
/* 0001c3d2 */ RETURN                                   ; stack:  2 ->  2 (0)
/* 0001c3d4 */ S_PUSH 0 ("")                            ; stack:  2 ->  3 (+1)
/* 0001c3da */ RETURN                                   ; stack:  3 ->  3 (0)
; ENDFUNC CReplacePair@GetDest

