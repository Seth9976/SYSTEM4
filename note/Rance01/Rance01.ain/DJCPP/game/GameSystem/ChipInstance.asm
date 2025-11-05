; FUNC ChipInstance@0 (0x90106-0x90130)
/* 00090106 */ PUSHSTRUCTPAGE                           ; stack:  0 ->  1 (+1)
/* 00090108 */ CALLMETHOD 7282                          ; stack:  1 -> -1 (-2)
/* 0009010e */ (SH_MEM_ASSIGN_IMM (4, 0l))              ; stack: -1 -> -1 (0)
/* 00090118 */ SH_STRUCTREF ChipInstance.id_            ; stack: -1 -> -1 (0)
/* 0009011e */ (SH_S_ASSIGN_STR0 0)                     ; stack: -1 -> -1 (0)
/* 00090124 */ (SH_MEM_ASSIGN_IMM (3, 0l))              ; stack: -1 -> -1 (0)
/* 0009012e */ RETURN                                   ; stack: -1 -> -1 (0)
; ENDFUNC ChipInstance@0

; FUNC ChipInstance@init (0x90136-0x90142)
/* 00090136 */ (SH_STRUCTREF_SASSIGN_LOCALSREF (1, 0))  ; stack:  0 ->  0 (0)
/* 00090140 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC ChipInstance@init

; FUNC ChipInstance@setTimeRemain (0x90148-0x9017a)
/* 00090148 */ PUSHSTRUCTPAGE                           ; stack:  0 ->  1 (+1)
/* 0009014a */ PUSH 3                                   ; stack:  1 ->  2 (+1)
/* 00090150 */ PUSH 0                                   ; stack:  2 ->  3 (+1)
/* 00090156 */ SH_LOCALREF val                          ; stack:  3 ->  3 (0)
/* 0009015c */ CALLHLL Math.Max (args: 2)               ; stack:  3 ->  3 (0)
/* 00090166 */ ASSIGN                                   ; stack:  3 ->  1 (-2)
/* 00090168 */ POP                                      ; stack:  1 ->  0 (-1)
/* 0009016a */ PUSHSTRUCTPAGE                           ; stack:  0 ->  1 (+1)
/* 0009016c */ PUSH 0                                   ; stack:  1 ->  2 (+1)
/* 00090172 */ CALLMETHOD 5038                          ; stack:  2 ->  0 (-2)
/* 00090178 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC ChipInstance@setTimeRemain

; FUNC ChipInstance@decTimeRemain (0x90180-0x901ba)
/* 00090180 */ PUSHSTRUCTPAGE                           ; stack:  0 ->  1 (+1)
/* 00090182 */ PUSH 3                                   ; stack:  1 ->  2 (+1)
/* 00090188 */ PUSH 0                                   ; stack:  2 ->  3 (+1)
/* 0009018e */ SH_STRUCTREF ChipInstance.timeRemain_    ; stack:  3 ->  3 (0)
/* 00090194 */ SH_LOCALREF val                          ; stack:  3 ->  3 (0)
/* 0009019a */ SUB                                      ; stack:  3 ->  2 (-1)
/* 0009019c */ CALLHLL Math.Max (args: 2)               ; stack:  2 ->  2 (0)
/* 000901a6 */ ASSIGN                                   ; stack:  2 ->  0 (-2)
/* 000901a8 */ POP                                      ; stack:  0 -> -1 (-1)
/* 000901aa */ PUSHSTRUCTPAGE                           ; stack: -1 ->  0 (+1)
/* 000901ac */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 000901b2 */ CALLMETHOD 5038                          ; stack:  1 -> -1 (-2)
/* 000901b8 */ RETURN                                   ; stack: -1 -> -1 (0)
; ENDFUNC ChipInstance@decTimeRemain

; FUNC ChipInstance@setBet (0x901c0-0x901ee)
/* 000901c0 */ (SH_IF_STRUCTREF_NE_IMM (3, 0l, 590316)) ; stack:  0 ->  0 (0)
/* 000901ce */ (SH_MEM_ASSIGN_LOCAL (4, 0))             ; stack:  0 ->  0 (0)
/* 000901d8 */ PUSHSTRUCTPAGE                           ; stack:  0 ->  1 (+1)
/* 000901da */ PUSH 1                                   ; stack:  1 ->  2 (+1)
/* 000901e0 */ CALLMETHOD 5038                          ; stack:  2 ->  0 (-2)
/* 000901e6 */ JUMP 0x901ec                             ; stack:  0 ->  0 (0)
/* 000901ec */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC ChipInstance@setBet

; FUNC ChipInstance@getId (0x901f4-0x90204)
/* 000901f4 */ (SH_STRUCT_S_REF 1)                      ; stack:  0 ->  0 (0)
/* 000901fa */ RETURN                                   ; stack:  0 ->  0 (0)
/* 000901fc */ S_PUSH 0 ("")                            ; stack:  0 ->  1 (+1)
/* 00090202 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC ChipInstance@getId

; FUNC ChipInstance@getTimeRemain (0x9020a-0x9021a)
/* 0009020a */ SH_STRUCTREF ChipInstance.timeRemain_    ; stack:  0 ->  0 (0)
/* 00090210 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00090212 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00090218 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC ChipInstance@getTimeRemain

; FUNC ChipInstance@addEventHandler (0x90220-0x90234)
/* 00090220 */ SH_STRUCTREF ChipInstance.handler_       ; stack:  0 ->  0 (0)
/* 00090226 */ SH_LOCALREF handler                      ; stack:  0 ->  0 (0)
/* 0009022c */ DG_COPY                                  ; stack:  0 ->  0 (0)
/* 0009022e */ DG_PLUSA                                 ; stack:  0 ->  0 (0)
/* 00090230 */ DG_POP                                   ; stack:  0 ->  0 (0)
/* 00090232 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC ChipInstance@addEventHandler

; FUNC ChipInstance@callEventHandler (0x9023a-0x9027c)
/* 0009023a */ SH_STRUCTREF ChipInstance.handler_       ; stack:  0 ->  0 (0)
/* 00090240 */ DG_NUMOF                                 ; stack:  0 ->  0 (0)
/* 00090242 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00090248 */ EQUALE                                   ; stack:  1 ->  0 (-1)
/* 0009024a */ NOT                                      ; stack:  0 ->  0 (0)
/* 0009024c */ IFZ 0x9027a                              ; stack:  0 -> -1 (-1)
/* 00090252 */ SH_STRUCTREF ChipInstance.handler_       ; stack: -1 -> -1 (0)
/* 00090258 */ SH_LOCALREF type                         ; stack: -1 -> -1 (0)
/* 0009025e */ (DG_CALLBEGIN 34)                        ; stack: -1 -> -1 (0)
/* 00090264 */ (DG_CALL (34, 590452))                   ; stack: -1 -> -1 (0)
/* 0009026e */ JUMP 0x90264                             ; stack: -1 -> -1 (0)
/* 00090274 */ JUMP 0x9027a                             ; stack: -1 -> -1 (0)
/* 0009027a */ RETURN                                   ; stack: -1 -> -1 (0)
; ENDFUNC ChipInstance@callEventHandler

; FUNC ChipInstance@isBet (0x90282-0x90292)
/* 00090282 */ SH_STRUCTREF ChipInstance.isBet_         ; stack:  0 ->  0 (0)
/* 00090288 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 0009028a */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00090290 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC ChipInstance@isBet

