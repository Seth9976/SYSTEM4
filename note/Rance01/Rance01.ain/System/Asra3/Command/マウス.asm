; FUNC CMoveCursorDummy@Callback (0x5701e-0x57020)
/* 0005701e */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC CMoveCursorDummy@Callback

; FUNC Ａ＿カーソル移動 (0x57026-0x57058)
/* 00057026 */ (SH_LOCALDELETE 2)                       ; stack:  0 ->  0 (0)
/* 0005702c */ (SH_LOCALCREATE (2, 95))                 ; stack:  0 ->  0 (0)
/* 00057036 */ SH_LOCALREF 移動先Ｘ                 ; stack:  0 ->  0 (0)
/* 0005703c */ SH_LOCALREF 移動先Ｙ                 ; stack:  0 ->  0 (0)
/* 00057042 */ SH_LOCALREF Dummy                        ; stack:  0 ->  0 (0)
/* 00057048 */ PUSH 3066                                ; stack:  0 ->  1 (+1)
/* 0005704e */ DG_NEW_FROM_METHOD                       ; stack:  1 ->  1 (0)
/* 00057050 */ CALLFUNC AFL_Mouse_MovePos (args: 3)     ; stack:  1 -> -2 (-3)
/* 00057056 */ RETURN                                   ; stack: -2 -> -2 (0)
; ENDFUNC Ａ＿カーソル移動

