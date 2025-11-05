; FUNC 制御／烈火鉱山／入口 (0x2447ac-0x2447d2)
/* 002447ac */ PUSH 1                                   ; stack:  0 ->  1 (+1)
/* 002447b2 */ CALLFUNC 制御／帰り木設定 (args: 1) ; stack:  1 ->  0 (-1)
/* 002447b8 */ S_PUSH 2527 ("烈火鉱山A層")         ; stack:  0 ->  1 (+1)
/* 002447be */ PUSH 0                                   ; stack:  1 ->  2 (+1)
/* 002447c4 */ PUSH 0                                   ; stack:  2 ->  3 (+1)
/* 002447ca */ CALLFUNC 制御／シーン設定／ダンジョン (args: 3) ; stack:  3 ->  0 (-3)
/* 002447d0 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC 制御／烈火鉱山／入口

