; FUNC LogViewer@init (0x5bb88-0x5bba6)
/* 0005bb88 */ PUSHSTRUCTPAGE                           ; stack:  0 ->  1 (+1)
/* 0005bb8a */ PUSH 0                                   ; stack:  1 ->  2 (+1)
/* 0005bb90 */ (SH_LOCAL_S_REF 0)                       ; stack:  2 ->  2 (0)
/* 0005bb96 */ CALLHLL OutputLog.Create (args: 1)       ; stack:  2 ->  2 (0)
/* 0005bba0 */ ASSIGN                                   ; stack:  2 ->  0 (-2)
/* 0005bba2 */ POP                                      ; stack:  0 -> -1 (-1)
/* 0005bba4 */ RETURN                                   ; stack: -1 -> -1 (0)
; ENDFUNC LogViewer@init

; FUNC LogViewer@add (0x5bbac-0x5bbc4)
/* 0005bbac */ SH_STRUCTREF LogViewer.handle_           ; stack:  0 ->  0 (0)
/* 0005bbb2 */ (SH_LOCAL_S_REF 0)                       ; stack:  0 ->  0 (0)
/* 0005bbb8 */ CALLHLL OutputLog.Output (args: 2)       ; stack:  0 ->  0 (0)
/* 0005bbc2 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC LogViewer@add

; FUNC LogViewer@clear (0x5bbca-0x5bbdc)
/* 0005bbca */ SH_STRUCTREF LogViewer.handle_           ; stack:  0 ->  0 (0)
/* 0005bbd0 */ CALLHLL OutputLog.Clear (args: 1)        ; stack:  0 ->  0 (0)
/* 0005bbda */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC LogViewer@clear

