; FUNC AFL_Sound_GetLength (0x57ca0-0x57cba)
/* 00057ca0 */ SH_LOCALREF DataNumber                   ; stack:  0 ->  0 (0)
/* 00057ca6 */ CALLHLL KiwiSoundEngine.Sound_GetDataLength (args: 1) ; stack:  0 ->  0 (0)
/* 00057cb0 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00057cb2 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00057cb8 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC AFL_Sound_GetLength

; FUNC AFL_BGM_GetPlayLength (0x57cc6-0x57cd6)
/* 00057cc6 */ CALLFUNC SYS_BGM_GetPlayLength (args: 0) ; stack:  0 ->  1 (+1)
/* 00057ccc */ RETURN                                   ; stack:  1 ->  1 (0)
/* 00057cce */ PUSH 0                                   ; stack:  1 ->  2 (+1)
/* 00057cd4 */ RETURN                                   ; stack:  2 ->  2 (0)
; ENDFUNC AFL_BGM_GetPlayLength

; FUNC AFL_BGM_GetPlayPos (0x57ce2-0x57cf2)
/* 00057ce2 */ CALLFUNC SYS_BGM_GetPlayPos (args: 0)    ; stack:  0 ->  1 (+1)
/* 00057ce8 */ RETURN                                   ; stack:  1 ->  1 (0)
/* 00057cea */ PUSH 0                                   ; stack:  1 ->  2 (+1)
/* 00057cf0 */ RETURN                                   ; stack:  2 ->  2 (0)
; ENDFUNC AFL_BGM_GetPlayPos

; FUNC AFL_BGM_Seek (0x57cfe-0x57d14)
/* 00057cfe */ SH_LOCALREF MilliSecond                  ; stack:  0 ->  0 (0)
/* 00057d04 */ CALLFUNC SYS_BGM_Seek (args: 1)          ; stack:  0 ->  0 (0)
/* 00057d0a */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00057d0c */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00057d12 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC AFL_BGM_Seek

; FUNC AFL_BGM_Play (0x57d20-0x57d46)
/* 00057d20 */ SH_LOCALREF BGMNumber                    ; stack:  0 ->  0 (0)
/* 00057d26 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00057d2c */ PUSH 1                                   ; stack:  1 ->  2 (+1)
/* 00057d32 */ SH_LOCALREF TotalTime                    ; stack:  2 ->  2 (0)
/* 00057d38 */ SH_LOCALREF Volume                       ; stack:  2 ->  2 (0)
/* 00057d3e */ CALLFUNC SYS_PlayBGM (args: 5)           ; stack:  2 -> -3 (-5)
/* 00057d44 */ RETURN                                   ; stack: -3 -> -3 (0)
; ENDFUNC AFL_BGM_Play

; FUNC AFL_BGM_BeginFade (0x57d52-0x57d6c)
/* 00057d52 */ SH_LOCALREF Volume                       ; stack:  0 ->  0 (0)
/* 00057d58 */ CALLFUNC SYS_BGM_SetVolume (args: 1)     ; stack:  0 -> -1 (-1)
/* 00057d5e */ SH_LOCALREF TotalTime                    ; stack: -1 -> -1 (0)
/* 00057d64 */ CALLFUNC SYS_BGM_BeginFade (args: 1)     ; stack: -1 -> -2 (-1)
/* 00057d6a */ RETURN                                   ; stack: -2 -> -2 (0)
; ENDFUNC AFL_BGM_BeginFade

