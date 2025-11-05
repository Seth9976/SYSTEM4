; FUNC CMoveCursorDummy@Callback (0x1698a8-0x1698aa)
/* 001698a8 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC CMoveCursorDummy@Callback

; FUNC Ａ＿カーソル移動 (0x1698b0-0x1698ee)
/* 001698b0 */ (SH_LOCALDELETE 2)                       ; stack:  0 ->  0 (0)
/* 001698b6 */ (SH_LOCALCREATE (2, 168))                ; stack:  0 ->  0 (0)
/* 001698c0 */ PUSHLOCALPAGE                            ; stack:  0 ->  1 (+1)
/* 001698c2 */ PUSH 0                                   ; stack:  1 ->  2 (+1)
/* 001698c8 */ REF                                      ; stack:  2 ->  1 (-1)
/* 001698ca */ PUSHLOCALPAGE                            ; stack:  1 ->  2 (+1)
/* 001698cc */ PUSH 1                                   ; stack:  2 ->  3 (+1)
/* 001698d2 */ REF                                      ; stack:  3 ->  2 (-1)
/* 001698d4 */ PUSHLOCALPAGE                            ; stack:  2 ->  3 (+1)
/* 001698d6 */ PUSH 2                                   ; stack:  3 ->  4 (+1)
/* 001698dc */ REF                                      ; stack:  4 ->  3 (-1)
/* 001698de */ PUSH 4249                                ; stack:  3 ->  4 (+1)
/* 001698e4 */ DG_NEW_FROM_METHOD                       ; stack:  4 ->  4 (0)
/* 001698e6 */ CALLFUNC AFL_Mouse_MovePos (args: 3)     ; stack:  4 ->  1 (-3)
/* 001698ec */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ａ＿カーソル移動

