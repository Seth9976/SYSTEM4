; FUNC AFL_MemoryModeEvent_Begin (0x5ac80-0x5acac)
/* 0005ac80 */ (SH_GLOBAL_ASSIGN_IMM (111, 1l))         ; stack:  0 ->  0 (0)
/* 0005ac8a */ PUSH -5                                  ; stack:  0 ->  1 (+1)
/* 0005ac90 */ S_PUSH 0 ("")                            ; stack:  1 ->  2 (+1)
/* 0005ac96 */ S_PUSH 0 ("")                            ; stack:  2 ->  3 (+1)
/* 0005ac9c */ CALLFUNC SYS_セーブ実行 (args: 3)   ; stack:  3 ->  1 (-2)
/* 0005aca2 */ RETURN                                   ; stack:  1 ->  1 (0)
/* 0005aca4 */ PUSH 0                                   ; stack:  1 ->  2 (+1)
/* 0005acaa */ RETURN                                   ; stack:  2 ->  2 (0)
; ENDFUNC AFL_MemoryModeEvent_Begin

; FUNC AFL_MemoryModeEvent_End (0x5acb8-0x5acd2)
/* 0005acb8 */ CALLFUNC SYS_StopSE (args: 0)            ; stack:  0 ->  0 (0)
/* 0005acbe */ CALLFUNC SYS_StopVoice (args: 0)         ; stack:  0 ->  0 (0)
/* 0005acc4 */ PUSH -5                                  ; stack:  0 ->  1 (+1)
/* 0005acca */ CALLFUNC SYS_ロード実行 (args: 1)   ; stack:  1 ->  0 (-1)
/* 0005acd0 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC AFL_MemoryModeEvent_End

; FUNC AFL_MemoryModeEvent_Cleanup (0x5acde-0x5acf6)
/* 0005acde */ PUSH -5                                  ; stack:  0 ->  1 (+1)
/* 0005ace4 */ CALLFUNC SYS_セーブファイル削除 (args: 1) ; stack:  1 ->  0 (-1)
/* 0005acea */ (SH_GLOBAL_ASSIGN_IMM (111, 0l))         ; stack:  0 ->  0 (0)
/* 0005acf4 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC AFL_MemoryModeEvent_Cleanup

