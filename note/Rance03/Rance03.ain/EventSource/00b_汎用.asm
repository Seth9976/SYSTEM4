; FUNC ＥＶ／汎用／出る (0x352278-0x3522ac)
/* 00352278 */ S_PUSH 0 ("")                            ; stack:  0 ->  1 (+1)
/* 0035227e */ PUSH -2147483648                         ; stack:  1 ->  2 (+1)
/* 00352284 */ CALLFUNC EV (args: 2)                    ; stack:  2 ->  1 (-1)
/* 0035228a */ POP                                      ; stack:  1 ->  0 (-1)
/* 0035228c */ PUSH 2000                                ; stack:  0 ->  1 (+1)
/* 00352292 */ CALLFUNC ■音楽停止 (args: 1)       ; stack:  1 ->  0 (-1)
/* 00352298 */ CALLFUNC ■立ち絵背景アウト (args: 0) ; stack:  0 ->  0 (0)
/* 0035229e */ PUSH 300                                 ; stack:  0 ->  1 (+1)
/* 003522a4 */ CALLFUNC W (args: 1)                     ; stack:  1 ->  0 (-1)
/* 003522aa */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC ＥＶ／汎用／出る

