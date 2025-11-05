; FUNC 文字入力エリア_t@0 (0x118-0x134)
/* 00000118 */ PUSHSTRUCTPAGE                           ; stack:  0 ->  1 (+1)
/* 0000011a */ CALLMETHOD 10265                         ; stack:  1 -> -1 (-2)
/* 00000120 */ PUSHSTRUCTPAGE                           ; stack: -1 ->  0 (+1)
/* 00000122 */ PUSH 28                                  ; stack:  0 ->  1 (+1)
/* 00000128 */ PUSH -1                                  ; stack:  1 ->  2 (+1)
/* 0000012e */ ASSIGN                                   ; stack:  2 ->  0 (-2)
/* 00000130 */ POP                                      ; stack:  0 -> -1 (-1)
/* 00000132 */ RETURN                                   ; stack: -1 -> -1 (0)
; ENDFUNC 文字入力エリア_t@0

; FUNC 選択エリア_t@0 (0x13a-0x156)
/* 0000013a */ PUSHSTRUCTPAGE                           ; stack:  0 ->  1 (+1)
/* 0000013c */ CALLMETHOD 10266                         ; stack:  1 -> -1 (-2)
/* 00000142 */ PUSHSTRUCTPAGE                           ; stack: -1 ->  0 (+1)
/* 00000144 */ PUSH 56                                  ; stack:  0 ->  1 (+1)
/* 0000014a */ PUSH 1                                   ; stack:  1 ->  2 (+1)
/* 00000150 */ ASSIGN                                   ; stack:  2 ->  0 (-2)
/* 00000152 */ POP                                      ; stack:  0 -> -1 (-1)
/* 00000154 */ RETURN                                   ; stack: -1 -> -1 (0)
; ENDFUNC 選択エリア_t@0

