; FUNC 制御／下水道／城地下へ (0xbac2e-0xbac68)
/* 000bac2e */ S_PUSH 1406 ("下水道／城地下へ／...") ; stack:  0 ->  1 (+1)
/* 000bac34 */ PUSH -2147483648                         ; stack:  1 ->  2 (+1)
/* 000bac3a */ CALLFUNC EV (args: 2)                    ; stack:  2 ->  1 (-1)
/* 000bac40 */ NOT                                      ; stack:  1 ->  1 (0)
/* 000bac42 */ IFZ 0xbac66                              ; stack:  1 ->  0 (-1)
/* 000bac48 */ CALLFUNC 下水道／城地下へ／初回 (args: 0) ; stack:  0 ->  0 (0)
/* 000bac4e */ S_PUSH 705 ("俺のメモ")              ; stack:  0 ->  1 (+1)
/* 000bac54 */ S_PUSH 2905 ("あとは何があろうと...") ; stack:  1 ->  2 (+1)
/* 000bac5a */ CALLFUNC 制御／文字列フラグ設定 (args: 2) ; stack:  2 ->  0 (-2)
/* 000bac60 */ JUMP 0xbac66                             ; stack:  0 ->  0 (0)
/* 000bac66 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC 制御／下水道／城地下へ

