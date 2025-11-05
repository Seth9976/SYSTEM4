; FUNC 制御／ダンジョン１歩移動コールバック (0x9cf80-0x9cfac)
/* 0009cf80 */ CALLFUNC 制御／ダンジョン時間経過 (args: 0) ; stack:  0 ->  0 (0)
/* 0009cf86 */ S_PUSH 1418 ("COND03")                   ; stack:  0 ->  1 (+1)
/* 0009cf8c */ CALLFUNC 制御／状態異常確認 (args: 1) ; stack:  1 ->  1 (0)
/* 0009cf92 */ IFZ 0x9cfa4                              ; stack:  1 ->  0 (-1)
/* 0009cf98 */ CALLFUNC 制御／状態異常／結石 (args: 0) ; stack:  0 ->  0 (0)
/* 0009cf9e */ JUMP 0x9cfa4                             ; stack:  0 ->  0 (0)
/* 0009cfa4 */ CALLFUNC 制御／全状態異常時間経過 (args: 0) ; stack:  0 ->  0 (0)
/* 0009cfaa */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC 制御／ダンジョン１歩移動コールバック

