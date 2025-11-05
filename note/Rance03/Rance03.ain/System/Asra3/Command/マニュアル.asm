; FUNC Ａ＿プレイングマニュアル存在確認 (0x169900-0x169914)
/* 00169900 */ CALLHLL SystemService.IsExistPlayingManual (args: 0) ; stack:  0 ->  0 (0)
/* 0016990a */ RETURN                                   ; stack:  0 ->  0 (0)
/* 0016990c */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00169912 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ａ＿プレイングマニュアル存在確認

; FUNC Ａ＿プレイングマニュアル表示 (0x169920-0x169944)
/* 00169920 */ CALLHLL SystemService.OpenPlayingManual (args: 0) ; stack:  0 ->  0 (0)
/* 0016992a */ PUSHGLOBALPAGE                           ; stack:  0 ->  1 (+1)
/* 0016992c */ PUSH 122                                 ; stack:  1 ->  2 (+1)
/* 00169932 */ DUP2                                     ; stack:  2 ->  4 (+2)
/* 00169934 */ INC                                      ; stack:  4 ->  4 (0)
/* 00169936 */ POP                                      ; stack:  4 ->  3 (-1)
/* 00169938 */ POP                                      ; stack:  3 ->  2 (-1)
/* 0016993a */ CALLFUNC SYS_情報集計データセーブ (args: 0) ; stack:  2 ->  3 (+1)
/* 00169940 */ POP                                      ; stack:  3 ->  2 (-1)
/* 00169942 */ RETURN                                   ; stack:  2 ->  2 (0)
; ENDFUNC Ａ＿プレイングマニュアル表示

; FUNC Ａ＿プレイングマニュアル表示回数取得 (0x169950-0x169964)
/* 00169950 */ PUSHGLOBALPAGE                           ; stack:  0 ->  1 (+1)
/* 00169952 */ PUSH 122                                 ; stack:  1 ->  2 (+1)
/* 00169958 */ REF                                      ; stack:  2 ->  1 (-1)
/* 0016995a */ RETURN                                   ; stack:  1 ->  1 (0)
/* 0016995c */ PUSH 0                                   ; stack:  1 ->  2 (+1)
/* 00169962 */ RETURN                                   ; stack:  2 ->  2 (0)
; ENDFUNC Ａ＿プレイングマニュアル表示回数取得

