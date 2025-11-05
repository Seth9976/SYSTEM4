; FUNC AFL_SetInvalidateFrameSkipWhileMessageSkip (0x5760c-0x5761e)
/* 0005760c */ SH_LOCALREF bInvalidateFrameSkipWhileMessageSkip ; stack:  0 ->  0 (0)
/* 00057612 */ CALLHLL ChipmunkSpriteEngine.SYSTEM_SetInvalidateFrameSkipWhileMessageSkip (args: 1) ; stack:  0 ->  0 (0)
/* 0005761c */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC AFL_SetInvalidateFrameSkipWhileMessageSkip

; FUNC AFL_GetInvalidateFrameSkipWhileMessageSkip (0x5762a-0x5763e)
/* 0005762a */ CALLHLL ChipmunkSpriteEngine.SYSTEM_GetInvalidateFrameSkipWhileMessageSkip (args: 0) ; stack:  0 ->  0 (0)
/* 00057634 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00057636 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 0005763c */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC AFL_GetInvalidateFrameSkipWhileMessageSkip

; FUNC AFL_SetDrawMessageCharFunction (0x5764a-0x57656)
/* 0005764a */ (SH_GLOBAL_ASSIGN_LOCAL (32, 0))         ; stack:  0 ->  0 (0)
/* 00057654 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC AFL_SetDrawMessageCharFunction

