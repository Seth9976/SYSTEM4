; FUNC ゲームインストール確認 (0x4e0e4-0x4e0fe)
/* 0004e0e4 */ (SH_LOCAL_S_REF 0)                       ; stack:  0 ->  0 (0)
/* 0004e0ea */ CALLHLL InstallInfo.IsInstalledGame (args: 1) ; stack:  0 ->  0 (0)
/* 0004e0f4 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 0004e0f6 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 0004e0fc */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC ゲームインストール確認

