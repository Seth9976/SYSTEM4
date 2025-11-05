; FUNC GameObject@0 (0x6142c-0x6144a)
/* 0006142c */ PUSHSTRUCTPAGE                           ; stack:  0 ->  1 (+1)
/* 0006142e */ CALLMETHOD 7185                          ; stack:  1 -> -1 (-2)
/* 00061434 */ (SH_MEM_ASSIGN_IMM (3, 0l))              ; stack: -1 -> -1 (0)
/* 0006143e */ (SH_MEM_ASSIGN_IMM (1, 0l))              ; stack: -1 -> -1 (0)
/* 00061448 */ RETURN                                   ; stack: -1 -> -1 (0)
; ENDFUNC GameObject@0

; FUNC GameObject@isAlive (0x61450-0x6146e)
/* 00061450 */ SH_STRUCTREF GameObject.update_          ; stack:  0 ->  0 (0)
/* 00061456 */ DG_NUMOF                                 ; stack:  0 ->  0 (0)
/* 00061458 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 0006145e */ EQUALE                                   ; stack:  1 ->  0 (-1)
/* 00061460 */ NOT                                      ; stack:  0 ->  0 (0)
/* 00061462 */ ITOB                                     ; stack:  0 ->  0 (0)
/* 00061464 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00061466 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 0006146c */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC GameObject@isAlive

; FUNC GameObject@setNonSleepObject (0x61474-0x61480)
/* 00061474 */ (SH_MEM_ASSIGN_LOCAL (3, 0))             ; stack:  0 ->  0 (0)
/* 0006147e */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC GameObject@setNonSleepObject

; FUNC GameObject@isNonSleepObject (0x61486-0x61496)
/* 00061486 */ SH_STRUCTREF GameObject.isNonSleep_      ; stack:  0 ->  0 (0)
/* 0006148c */ RETURN                                   ; stack:  0 ->  0 (0)
/* 0006148e */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00061494 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC GameObject@isNonSleepObject

; FUNC GameObject@addSleepLevel (0x6149c-0x614c0)
/* 0006149c */ (SH_IF_STRUCTREF_Z (3, 398510))          ; stack:  0 ->  0 (0)
/* 000614a6 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 000614a8 */ JUMP 0x614ae                             ; stack:  0 ->  0 (0)
/* 000614ae */ PUSHSTRUCTPAGE                           ; stack:  0 ->  1 (+1)
/* 000614b0 */ PUSH 1                                   ; stack:  1 ->  2 (+1)
/* 000614b6 */ DUP2                                     ; stack:  2 ->  4 (+2)
/* 000614b8 */ INC                                      ; stack:  4 ->  4 (0)
/* 000614ba */ POP                                      ; stack:  4 ->  3 (-1)
/* 000614bc */ POP                                      ; stack:  3 ->  2 (-1)
/* 000614be */ RETURN                                   ; stack:  2 ->  2 (0)
; ENDFUNC GameObject@addSleepLevel

; FUNC GameObject@decSleepLevel (0x614c6-0x61504)
/* 000614c6 */ (SH_IF_STRUCTREF_Z (3, 398552))          ; stack:  0 ->  0 (0)
/* 000614d0 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 000614d2 */ JUMP 0x614d8                             ; stack:  0 ->  0 (0)
/* 000614d8 */ PUSHSTRUCTPAGE                           ; stack:  0 ->  1 (+1)
/* 000614da */ PUSH 1                                   ; stack:  1 ->  2 (+1)
/* 000614e0 */ SH_STRUCTREF GameObject.sleepLevel_      ; stack:  2 ->  2 (0)
/* 000614e6 */ PUSH 1                                   ; stack:  2 ->  3 (+1)
/* 000614ec */ SUB                                      ; stack:  3 ->  2 (-1)
/* 000614ee */ PUSH 0                                   ; stack:  2 ->  3 (+1)
/* 000614f4 */ CALLHLL Math.Max (args: 2)               ; stack:  3 ->  3 (0)
/* 000614fe */ ASSIGN                                   ; stack:  3 ->  1 (-2)
/* 00061500 */ POP                                      ; stack:  1 ->  0 (-1)
/* 00061502 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC GameObject@decSleepLevel

; FUNC GameObject@isSleep (0x6150a-0x6151e)
/* 0006150a */ (SH_STRUCTREF_GT_IMM (1, 0l))            ; stack:  0 ->  0 (0)
/* 00061514 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00061516 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 0006151c */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC GameObject@isSleep

; FUNC GameObject@setId (0x61524-0x61530)
/* 00061524 */ (SH_MEM_ASSIGN_LOCAL (0, 0))             ; stack:  0 ->  0 (0)
/* 0006152e */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC GameObject@setId

; FUNC GameObject@setUpdateMethod (0x61536-0x6154a)
/* 00061536 */ SH_STRUCTREF GameObject.update_          ; stack:  0 ->  0 (0)
/* 0006153c */ SH_LOCALREF cbUpdate                     ; stack:  0 ->  0 (0)
/* 00061542 */ DG_COPY                                  ; stack:  0 ->  0 (0)
/* 00061544 */ DG_ASSIGN                                ; stack:  0 ->  0 (0)
/* 00061546 */ DG_POP                                   ; stack:  0 ->  0 (0)
/* 00061548 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC GameObject@setUpdateMethod

; FUNC GameObject@setFocusedMethod (0x61550-0x61564)
/* 00061550 */ SH_STRUCTREF GameObject.focused_         ; stack:  0 ->  0 (0)
/* 00061556 */ SH_LOCALREF cbFocused                    ; stack:  0 ->  0 (0)
/* 0006155c */ DG_COPY                                  ; stack:  0 ->  0 (0)
/* 0006155e */ DG_ASSIGN                                ; stack:  0 ->  0 (0)
/* 00061560 */ DG_POP                                   ; stack:  0 ->  0 (0)
/* 00061562 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC GameObject@setFocusedMethod

; FUNC GameObject@setSleepLevel (0x6156a-0x6158e)
/* 0006156a */ PUSHSTRUCTPAGE                           ; stack:  0 ->  1 (+1)
/* 0006156c */ PUSH 1                                   ; stack:  1 ->  2 (+1)
/* 00061572 */ PUSH 0                                   ; stack:  2 ->  3 (+1)
/* 00061578 */ SH_LOCALREF val                          ; stack:  3 ->  3 (0)
/* 0006157e */ CALLHLL Math.Max (args: 2)               ; stack:  3 ->  3 (0)
/* 00061588 */ ASSIGN                                   ; stack:  3 ->  1 (-2)
/* 0006158a */ POP                                      ; stack:  1 ->  0 (-1)
/* 0006158c */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC GameObject@setSleepLevel

; FUNC GameObject@getId (0x61594-0x615a4)
/* 00061594 */ SH_STRUCTREF GameObject.id_              ; stack:  0 ->  0 (0)
/* 0006159a */ RETURN                                   ; stack:  0 ->  0 (0)
/* 0006159c */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 000615a2 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC GameObject@getId

; FUNC GameObject@getSleepLevel (0x615aa-0x615ba)
/* 000615aa */ SH_STRUCTREF GameObject.sleepLevel_      ; stack:  0 ->  0 (0)
/* 000615b0 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 000615b2 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 000615b8 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC GameObject@getSleepLevel

; FUNC GameObject@callUpdateMethod (0x615c0-0x61612)
/* 000615c0 */ SH_STRUCTREF GameObject.update_          ; stack:  0 ->  0 (0)
/* 000615c6 */ DG_NUMOF                                 ; stack:  0 ->  0 (0)
/* 000615c8 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 000615ce */ EQUALE                                   ; stack:  1 ->  0 (-1)
/* 000615d0 */ NOT                                      ; stack:  0 ->  0 (0)
/* 000615d2 */ IFZ 0x61602                              ; stack:  0 -> -1 (-1)
/* 000615d8 */ SH_STRUCTREF GameObject.update_          ; stack: -1 -> -1 (0)
/* 000615de */ (DG_CALLBEGIN 28)                        ; stack: -1 -> -1 (0)
/* 000615e4 */ (DG_CALL (28, 398836))                   ; stack: -1 -> -1 (0)
/* 000615ee */ JUMP 0x615e4                             ; stack: -1 -> -1 (0)
/* 000615f4 */ PUSH 1                                   ; stack: -1 ->  0 (+1)
/* 000615fa */ RETURN                                   ; stack:  0 ->  0 (0)
/* 000615fc */ JUMP 0x61602                             ; stack:  0 ->  0 (0)
/* 00061602 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00061608 */ RETURN                                   ; stack:  1 ->  1 (0)
/* 0006160a */ PUSH 0                                   ; stack:  1 ->  2 (+1)
/* 00061610 */ RETURN                                   ; stack:  2 ->  2 (0)
; ENDFUNC GameObject@callUpdateMethod

; FUNC GameObject@callFocuedMethod (0x61618-0x61664)
/* 00061618 */ SH_STRUCTREF GameObject.focused_         ; stack:  0 ->  0 (0)
/* 0006161e */ DG_NUMOF                                 ; stack:  0 ->  0 (0)
/* 00061620 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00061626 */ EQUALE                                   ; stack:  1 ->  0 (-1)
/* 00061628 */ NOT                                      ; stack:  0 ->  0 (0)
/* 0006162a */ IFZ 0x61654                              ; stack:  0 -> -1 (-1)
/* 00061630 */ SH_STRUCTREF GameObject.focused_         ; stack: -1 -> -1 (0)
/* 00061636 */ (DG_CALLBEGIN 29)                        ; stack: -1 -> -1 (0)
/* 0006163c */ (DG_CALL (29, 398924))                   ; stack: -1 -> -1 (0)
/* 00061646 */ JUMP 0x6163c                             ; stack: -1 -> -1 (0)
/* 0006164c */ RETURN                                   ; stack: -1 -> -1 (0)
/* 0006164e */ JUMP 0x61654                             ; stack: -1 -> -1 (0)
/* 00061654 */ PUSH 0                                   ; stack: -1 ->  0 (+1)
/* 0006165a */ RETURN                                   ; stack:  0 ->  0 (0)
/* 0006165c */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00061662 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC GameObject@callFocuedMethod

; FUNC GameObject@setObjectName (0x6166a-0x61676)
/* 0006166a */ (SH_STRUCTREF_SASSIGN_LOCALSREF (2, 0))  ; stack:  0 ->  0 (0)
/* 00061674 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC GameObject@setObjectName

; FUNC GameObject@getObjectName (0x6167c-0x6168c)
/* 0006167c */ (SH_STRUCT_S_REF 2)                      ; stack:  0 ->  0 (0)
/* 00061682 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00061684 */ S_PUSH 0 ("")                            ; stack:  0 ->  1 (+1)
/* 0006168a */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC GameObject@getObjectName

