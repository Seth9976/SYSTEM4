; FUNC Ａ＿フラット存在確認 (0x169878-0x169896)
/* 00169878 */ PUSHLOCALPAGE                            ; stack:  0 ->  1 (+1)
/* 0016987a */ PUSH 0                                   ; stack:  1 ->  2 (+1)
/* 00169880 */ S_REF                                    ; stack:  2 ->  2 (0)
/* 00169882 */ CALLHLL PartsEngine.Parts_ExistsFlatFile (args: 1) ; stack:  2 ->  2 (0)
/* 0016988c */ RETURN                                   ; stack:  2 ->  2 (0)
/* 0016988e */ PUSH 0                                   ; stack:  2 ->  3 (+1)
/* 00169894 */ RETURN                                   ; stack:  3 ->  3 (0)
; ENDFUNC Ａ＿フラット存在確認

