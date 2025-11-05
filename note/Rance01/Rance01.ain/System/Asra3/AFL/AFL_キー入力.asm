; FUNC AFL_IsKeyDown (0x57260-0x5727a)
/* 00057260 */ SH_LOCALREF KeyCode                      ; stack:  0 ->  0 (0)
/* 00057266 */ CALLHLL IbisInputEngine.Key_IsDown (args: 1) ; stack:  0 ->  0 (0)
/* 00057270 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00057272 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00057278 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC AFL_IsKeyDown

