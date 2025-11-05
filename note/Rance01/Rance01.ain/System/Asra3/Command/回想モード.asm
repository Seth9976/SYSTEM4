; FUNC 回想登録 (0x4baa2-0x4babc)
/* 0004baa2 */ PUSH 1                                   ; stack:  0 ->  1 (+1)
/* 0004baa8 */ SH_LOCALREF _登録番号                ; stack:  1 ->  1 (0)
/* 0004baae */ CALLHLL PassRegister.RegistNumber (args: 2) ; stack:  1 ->  1 (0)
/* 0004bab8 */ POP                                      ; stack:  1 ->  0 (-1)
/* 0004baba */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC 回想登録

; FUNC 回想確認 (0x4bac8-0x4bae8)
/* 0004bac8 */ PUSH 1                                   ; stack:  0 ->  1 (+1)
/* 0004bace */ SH_LOCALREF _登録番号                ; stack:  1 ->  1 (0)
/* 0004bad4 */ CALLHLL PassRegister.ExistNumber (args: 2) ; stack:  1 ->  1 (0)
/* 0004bade */ RETURN                                   ; stack:  1 ->  1 (0)
/* 0004bae0 */ PUSH 0                                   ; stack:  1 ->  2 (+1)
/* 0004bae6 */ RETURN                                   ; stack:  2 ->  2 (0)
; ENDFUNC 回想確認

; FUNC 回想モード実行中確認 (0x4baf4-0x4bb04)
/* 0004baf4 */ SH_GLOBALREF _g_回想中                ; stack:  0 ->  0 (0)
/* 0004bafa */ RETURN                                   ; stack:  0 ->  0 (0)
/* 0004bafc */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 0004bb02 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC 回想モード実行中確認

