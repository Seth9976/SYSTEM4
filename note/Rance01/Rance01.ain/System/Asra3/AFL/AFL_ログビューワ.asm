; FUNC AFL_LogViewer_OpenViewer (0x5822a-0x58238)
/* 0005822a */ CALLHLL CrayfishLogViewer.OpenViewer (args: 0) ; stack:  0 ->  0 (0)
/* 00058234 */ POP                                      ; stack:  0 -> -1 (-1)
/* 00058236 */ RETURN                                   ; stack: -1 -> -1 (0)
; ENDFUNC AFL_LogViewer_OpenViewer

; FUNC AFL_LogViewer_CloseViewer (0x58244-0x58252)
/* 00058244 */ CALLHLL CrayfishLogViewer.CloseViewer (args: 0) ; stack:  0 ->  0 (0)
/* 0005824e */ POP                                      ; stack:  0 -> -1 (-1)
/* 00058250 */ RETURN                                   ; stack: -1 -> -1 (0)
; ENDFUNC AFL_LogViewer_CloseViewer

; FUNC AFL_LogViewer_IsOpenedViewer (0x5825e-0x58272)
/* 0005825e */ CALLHLL CrayfishLogViewer.IsOpenedViewer (args: 0) ; stack:  0 ->  0 (0)
/* 00058268 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 0005826a */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00058270 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC AFL_LogViewer_IsOpenedViewer

; FUNC AFL_LogViewer_SetWindowTitleName (0x5827e-0x58290)
/* 0005827e */ (SH_LOCAL_S_REF 0)                       ; stack:  0 ->  0 (0)
/* 00058284 */ CALLHLL CrayfishLogViewer.SetWindowTitleName (args: 1) ; stack:  0 ->  0 (0)
/* 0005828e */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC AFL_LogViewer_SetWindowTitleName

; FUNC AFL_LogViewer_AddText (0x5829c-0x582b0)
/* 0005829c */ (SH_LOCAL_S_REF 0)                       ; stack:  0 ->  0 (0)
/* 000582a2 */ CALLHLL CrayfishLogViewer.AddText (args: 1) ; stack:  0 ->  0 (0)
/* 000582ac */ POP                                      ; stack:  0 -> -1 (-1)
/* 000582ae */ RETURN                                   ; stack: -1 -> -1 (0)
; ENDFUNC AFL_LogViewer_AddText

; FUNC AFL_LogViewer_ClearText (0x582bc-0x582ca)
/* 000582bc */ CALLHLL CrayfishLogViewer.ClearText (args: 0) ; stack:  0 ->  0 (0)
/* 000582c6 */ POP                                      ; stack:  0 -> -1 (-1)
/* 000582c8 */ RETURN                                   ; stack: -1 -> -1 (0)
; ENDFUNC AFL_LogViewer_ClearText

