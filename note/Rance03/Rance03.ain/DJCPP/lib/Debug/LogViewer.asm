; FUNC LogViewer@init (0x1e5296-0x1e52b8)
/* 001e5296 */ PUSHSTRUCTPAGE                           ; stack:  0 ->  1 (+1)
/* 001e5298 */ PUSH 0                                   ; stack:  1 ->  2 (+1)
/* 001e529e */ PUSHLOCALPAGE                            ; stack:  2 ->  3 (+1)
/* 001e52a0 */ PUSH 0                                   ; stack:  3 ->  4 (+1)
/* 001e52a6 */ S_REF                                    ; stack:  4 ->  4 (0)
/* 001e52a8 */ CALLHLL OutputLog.Create (args: 1)       ; stack:  4 ->  4 (0)
/* 001e52b2 */ ASSIGN                                   ; stack:  4 ->  2 (-2)
/* 001e52b4 */ POP                                      ; stack:  2 ->  1 (-1)
/* 001e52b6 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC LogViewer@init

; FUNC LogViewer@add (0x1e52be-0x1e52de)
/* 001e52be */ PUSHSTRUCTPAGE                           ; stack:  0 ->  1 (+1)
/* 001e52c0 */ PUSH 0                                   ; stack:  1 ->  2 (+1)
/* 001e52c6 */ REF                                      ; stack:  2 ->  1 (-1)
/* 001e52c8 */ PUSHLOCALPAGE                            ; stack:  1 ->  2 (+1)
/* 001e52ca */ PUSH 0                                   ; stack:  2 ->  3 (+1)
/* 001e52d0 */ S_REF                                    ; stack:  3 ->  3 (0)
/* 001e52d2 */ CALLHLL OutputLog.Output (args: 2)       ; stack:  3 ->  3 (0)
/* 001e52dc */ RETURN                                   ; stack:  3 ->  3 (0)
; ENDFUNC LogViewer@add

; FUNC LogViewer@clear (0x1e52e4-0x1e52fa)
/* 001e52e4 */ PUSHSTRUCTPAGE                           ; stack:  0 ->  1 (+1)
/* 001e52e6 */ PUSH 0                                   ; stack:  1 ->  2 (+1)
/* 001e52ec */ REF                                      ; stack:  2 ->  1 (-1)
/* 001e52ee */ CALLHLL OutputLog.Clear (args: 1)        ; stack:  1 ->  1 (0)
/* 001e52f8 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC LogViewer@clear

