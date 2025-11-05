; FUNC 制御／ロードの碑 (0x2391f0-0x23922a)
/* 002391f0 */ S_PUSH 4449 ("ＥＶ／ロードの碑／...") ; stack:  0 ->  1 (+1)
/* 002391f6 */ PUSH -2147483648                         ; stack:  1 ->  2 (+1)
/* 002391fc */ CALLFUNC EV (args: 2)                    ; stack:  2 ->  1 (-1)
/* 00239202 */ NOT                                      ; stack:  1 ->  1 (0)
/* 00239204 */ IFZ 0x239216                             ; stack:  1 ->  0 (-1)
/* 0023920a */ CALLFUNC ＥＶ／ロードの碑／入る／初回 (args: 0) ; stack:  0 ->  0 (0)
/* 00239210 */ JUMP 0x23921c                            ; stack:  0 ->  0 (0)
/* 00239216 */ CALLFUNC ＥＶ／ロードの碑／入る／汎用 (args: 0) ; stack:  0 ->  0 (0)
/* 0023921c */ CALLFUNC 制御／ロード (args: 0)    ; stack:  0 ->  0 (0)
/* 00239222 */ CALLFUNC ＥＶ／ロードの碑／出る／汎用 (args: 0) ; stack:  0 ->  0 (0)
/* 00239228 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC 制御／ロードの碑

