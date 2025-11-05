; FUNC Ａ＿ゲームインストール確認 (0x15f1b4-0x15f1d2)
/* 0015f1b4 */ PUSHLOCALPAGE                            ; stack:  0 ->  1 (+1)
/* 0015f1b6 */ PUSH 0                                   ; stack:  1 ->  2 (+1)
/* 0015f1bc */ S_REF                                    ; stack:  2 ->  2 (0)
/* 0015f1be */ CALLHLL InstallInfo.IsInstalledGame (args: 1) ; stack:  2 ->  2 (0)
/* 0015f1c8 */ RETURN                                   ; stack:  2 ->  2 (0)
/* 0015f1ca */ PUSH 0                                   ; stack:  2 ->  3 (+1)
/* 0015f1d0 */ RETURN                                   ; stack:  3 ->  3 (0)
; ENDFUNC Ａ＿ゲームインストール確認

; FUNC Ａ＿ゲームメディア確認 (0x15f1de-0x15f1f2)
/* 0015f1de */ CALLHLL InstallInfo.GetInstallMediaType (args: 0) ; stack:  0 ->  0 (0)
/* 0015f1e8 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 0015f1ea */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 0015f1f0 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ａ＿ゲームメディア確認

