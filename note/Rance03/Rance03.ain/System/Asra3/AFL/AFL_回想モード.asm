; FUNC AFL_MemoryModeEvent_Begin (0x1712de-0x171312)
/* 001712de */ PUSHGLOBALPAGE                           ; stack:  0 ->  1 (+1)
/* 001712e0 */ PUSH 114                                 ; stack:  1 ->  2 (+1)
/* 001712e6 */ PUSH 1                                   ; stack:  2 ->  3 (+1)
/* 001712ec */ ASSIGN                                   ; stack:  3 ->  1 (-2)
/* 001712ee */ POP                                      ; stack:  1 ->  0 (-1)
/* 001712f0 */ PUSH -5                                  ; stack:  0 ->  1 (+1)
/* 001712f6 */ S_PUSH 0 ("")                            ; stack:  1 ->  2 (+1)
/* 001712fc */ S_PUSH 0 ("")                            ; stack:  2 ->  3 (+1)
/* 00171302 */ CALLFUNC SYS_セーブ実行 (args: 3)   ; stack:  3 ->  1 (-2)
/* 00171308 */ RETURN                                   ; stack:  1 ->  1 (0)
/* 0017130a */ PUSH 0                                   ; stack:  1 ->  2 (+1)
/* 00171310 */ RETURN                                   ; stack:  2 ->  2 (0)
; ENDFUNC AFL_MemoryModeEvent_Begin

; FUNC AFL_MemoryModeEvent_End (0x17131e-0x171338)
/* 0017131e */ CALLFUNC SYS_StopSE (args: 0)            ; stack:  0 ->  0 (0)
/* 00171324 */ CALLFUNC SYS_StopVoice (args: 0)         ; stack:  0 ->  0 (0)
/* 0017132a */ PUSH -5                                  ; stack:  0 ->  1 (+1)
/* 00171330 */ CALLFUNC SYS_ロード実行 (args: 1)   ; stack:  1 ->  0 (-1)
/* 00171336 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC AFL_MemoryModeEvent_End

; FUNC AFL_MemoryModeEvent_Cleanup (0x171344-0x171364)
/* 00171344 */ PUSH -5                                  ; stack:  0 ->  1 (+1)
/* 0017134a */ CALLFUNC SYS_セーブファイル削除 (args: 1) ; stack:  1 ->  0 (-1)
/* 00171350 */ PUSHGLOBALPAGE                           ; stack:  0 ->  1 (+1)
/* 00171352 */ PUSH 114                                 ; stack:  1 ->  2 (+1)
/* 00171358 */ PUSH 0                                   ; stack:  2 ->  3 (+1)
/* 0017135e */ ASSIGN                                   ; stack:  3 ->  1 (-2)
/* 00171360 */ POP                                      ; stack:  1 ->  0 (-1)
/* 00171362 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC AFL_MemoryModeEvent_Cleanup

