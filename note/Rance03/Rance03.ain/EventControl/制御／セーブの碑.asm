; FUNC 制御／セーブの碑 (0x235cee-0x235d28)
/* 00235cee */ S_PUSH 4338 ("ＥＶ／セーブの碑／...") ; stack:  0 ->  1 (+1)
/* 00235cf4 */ PUSH -2147483648                         ; stack:  1 ->  2 (+1)
/* 00235cfa */ CALLFUNC EV (args: 2)                    ; stack:  2 ->  1 (-1)
/* 00235d00 */ NOT                                      ; stack:  1 ->  1 (0)
/* 00235d02 */ IFZ 0x235d14                             ; stack:  1 ->  0 (-1)
/* 00235d08 */ CALLFUNC ＥＶ／セーブの碑／入る／初回 (args: 0) ; stack:  0 ->  0 (0)
/* 00235d0e */ JUMP 0x235d1a                            ; stack:  0 ->  0 (0)
/* 00235d14 */ CALLFUNC ＥＶ／セーブの碑／入る／汎用 (args: 0) ; stack:  0 ->  0 (0)
/* 00235d1a */ CALLFUNC 制御／セーブ (args: 0)    ; stack:  0 ->  0 (0)
/* 00235d20 */ CALLFUNC ＥＶ／セーブの碑／出る／汎用 (args: 0) ; stack:  0 ->  0 (0)
/* 00235d26 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC 制御／セーブの碑

