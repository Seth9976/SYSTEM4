; FUNC LocalTimer@0 (0x1ed54c-0x1ed556)
/* 001ed54c */ PUSHSTRUCTPAGE                           ; stack:  0 ->  1 (+1)
/* 001ed54e */ CALLMETHOD 10528                         ; stack:  1 -> -1 (-2)
/* 001ed554 */ RETURN                                   ; stack: -1 -> -1 (0)
; ENDFUNC LocalTimer@0

; FUNC LocalTimer@reset (0x1ed55c-0x1ed57a)
/* 001ed55c */ PUSHSTRUCTPAGE                           ; stack:  0 ->  1 (+1)
/* 001ed55e */ PUSH 0                                   ; stack:  1 ->  2 (+1)
/* 001ed564 */ PUSHGLOBALPAGE                           ; stack:  2 ->  3 (+1)
/* 001ed566 */ PUSH 242                                 ; stack:  3 ->  4 (+1)
/* 001ed56c */ REF                                      ; stack:  4 ->  3 (-1)
/* 001ed56e */ CALLMETHOD 7916                          ; stack:  3 ->  1 (-2)
/* 001ed574 */ ASSIGN                                   ; stack:  1 -> -1 (-2)
/* 001ed576 */ POP                                      ; stack: -1 -> -2 (-1)
/* 001ed578 */ RETURN                                   ; stack: -2 -> -2 (0)
; ENDFUNC LocalTimer@reset

; FUNC LocalTimer@getTime (0x1ed580-0x1ed5a6)
/* 001ed580 */ PUSHGLOBALPAGE                           ; stack:  0 ->  1 (+1)
/* 001ed582 */ PUSH 242                                 ; stack:  1 ->  2 (+1)
/* 001ed588 */ REF                                      ; stack:  2 ->  1 (-1)
/* 001ed58a */ CALLMETHOD 7916                          ; stack:  1 -> -1 (-2)
/* 001ed590 */ PUSHSTRUCTPAGE                           ; stack: -1 ->  0 (+1)
/* 001ed592 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 001ed598 */ REF                                      ; stack:  1 ->  0 (-1)
/* 001ed59a */ SUB                                      ; stack:  0 -> -1 (-1)
/* 001ed59c */ RETURN                                   ; stack: -1 -> -1 (0)
/* 001ed59e */ PUSH 0                                   ; stack: -1 ->  0 (+1)
/* 001ed5a4 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC LocalTimer@getTime

