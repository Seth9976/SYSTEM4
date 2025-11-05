; FUNC Ａ＿プレイングマニュアル存在確認 (0x5706a-0x5707e)
/* 0005706a */ CALLHLL SystemService.IsExistPlayingManual (args: 0) ; stack:  0 ->  0 (0)
/* 00057074 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00057076 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 0005707c */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ａ＿プレイングマニュアル存在確認

; FUNC Ａ＿プレイングマニュアル表示 (0x5708a-0x57096)
/* 0005708a */ CALLHLL SystemService.OpenPlayingManual (args: 0) ; stack:  0 ->  0 (0)
/* 00057094 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ａ＿プレイングマニュアル表示

