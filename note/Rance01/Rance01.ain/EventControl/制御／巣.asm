; FUNC 制御／巣／立て札 (0xbc8a8-0xbc8d6)
/* 000bc8a8 */ S_PUSH 2377 ("巣／立て札／初回") ; stack:  0 ->  1 (+1)
/* 000bc8ae */ PUSH -2147483648                         ; stack:  1 ->  2 (+1)
/* 000bc8b4 */ CALLFUNC EV (args: 2)                    ; stack:  2 ->  1 (-1)
/* 000bc8ba */ NOT                                      ; stack:  1 ->  1 (0)
/* 000bc8bc */ IFZ 0xbc8ce                              ; stack:  1 ->  0 (-1)
/* 000bc8c2 */ CALLFUNC 巣／立て札／初回 (args: 0) ; stack:  0 ->  0 (0)
/* 000bc8c8 */ JUMP 0xbc8d4                             ; stack:  0 ->  0 (0)
/* 000bc8ce */ CALLFUNC 巣／立て札 (args: 0)       ; stack:  0 ->  0 (0)
/* 000bc8d4 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC 制御／巣／立て札

