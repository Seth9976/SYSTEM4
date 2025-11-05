; FUNC AFL_TextFileWriter_Create (0x1732a2-0x1732c0)
/* 001732a2 */ PUSHLOCALPAGE                            ; stack:  0 ->  1 (+1)
/* 001732a4 */ PUSH 0                                   ; stack:  1 ->  2 (+1)
/* 001732aa */ S_REF                                    ; stack:  2 ->  2 (0)
/* 001732ac */ CALLHLL TextFile.Create (args: 1)        ; stack:  2 ->  2 (0)
/* 001732b6 */ RETURN                                   ; stack:  2 ->  2 (0)
/* 001732b8 */ PUSH 0                                   ; stack:  2 ->  3 (+1)
/* 001732be */ RETURN                                   ; stack:  3 ->  3 (0)
; ENDFUNC AFL_TextFileWriter_Create

; FUNC AFL_TextFileWriter_Close (0x1732cc-0x1732e0)
/* 001732cc */ CALLHLL TextFile.Close (args: 0)         ; stack:  0 ->  0 (0)
/* 001732d6 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 001732d8 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 001732de */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC AFL_TextFileWriter_Close

; FUNC AFL_TextFileWriter_Write (0x1732ec-0x17330a)
/* 001732ec */ PUSHLOCALPAGE                            ; stack:  0 ->  1 (+1)
/* 001732ee */ PUSH 0                                   ; stack:  1 ->  2 (+1)
/* 001732f4 */ S_REF                                    ; stack:  2 ->  2 (0)
/* 001732f6 */ CALLHLL TextFile.Write (args: 1)         ; stack:  2 ->  2 (0)
/* 00173300 */ RETURN                                   ; stack:  2 ->  2 (0)
/* 00173302 */ PUSH 0                                   ; stack:  2 ->  3 (+1)
/* 00173308 */ RETURN                                   ; stack:  3 ->  3 (0)
; ENDFUNC AFL_TextFileWriter_Write

