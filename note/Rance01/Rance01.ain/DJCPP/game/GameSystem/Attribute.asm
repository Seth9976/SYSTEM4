; FUNC Attribute@reload (0x905f8-0x90602)
/* 000905f8 */ PUSHSTRUCTPAGE                           ; stack:  0 ->  1 (+1)
/* 000905fa */ CALLMETHOD 5053                          ; stack:  1 -> -1 (-2)
/* 00090600 */ RETURN                                   ; stack: -1 -> -1 (0)
; ENDFUNC Attribute@reload

; FUNC Attribute@loadValue (0x90608-0x90656)
/* 00090608 */ PUSHSTRUCTPAGE                           ; stack:  0 ->  1 (+1)
/* 0009060a */ S_PUSH 958 ("属性データ")           ; stack:  1 ->  2 (+1)
/* 00090610 */ (SH_STRUCT_S_REF 0)                      ; stack:  2 ->  2 (0)
/* 00090616 */ S_PUSH 815 ("name")                      ; stack:  2 ->  3 (+1)
/* 0009061c */ S_PUSH 0 ("")                            ; stack:  3 ->  4 (+1)
/* 00090622 */ CALLFUNC EX_SA2String (args: 4)          ; stack:  4 ->  1 (-3)
/* 00090628 */ CALLMETHOD 5060                          ; stack:  1 -> -1 (-2)
/* 0009062e */ PUSHSTRUCTPAGE                           ; stack: -1 ->  0 (+1)
/* 00090630 */ S_PUSH 958 ("属性データ")           ; stack:  0 ->  1 (+1)
/* 00090636 */ (SH_STRUCT_S_REF 0)                      ; stack:  1 ->  1 (0)
/* 0009063c */ S_PUSH 826 ("imageName")                 ; stack:  1 ->  2 (+1)
/* 00090642 */ S_PUSH 0 ("")                            ; stack:  2 ->  3 (+1)
/* 00090648 */ CALLFUNC EX_SA2String (args: 4)          ; stack:  3 ->  0 (-3)
/* 0009064e */ CALLMETHOD 5058                          ; stack:  0 -> -2 (-2)
/* 00090654 */ RETURN                                   ; stack: -2 -> -2 (0)
; ENDFUNC Attribute@loadValue

; FUNC Attribute@0 (0x9065c-0x9067e)
/* 0009065c */ PUSHSTRUCTPAGE                           ; stack:  0 ->  1 (+1)
/* 0009065e */ CALLMETHOD 7283                          ; stack:  1 -> -1 (-2)
/* 00090664 */ SH_STRUCTREF Attribute.id_               ; stack: -1 -> -1 (0)
/* 0009066a */ (SH_S_ASSIGN_STR0 0)                     ; stack: -1 -> -1 (0)
/* 00090670 */ SH_STRUCTREF Attribute.name_             ; stack: -1 -> -1 (0)
/* 00090676 */ (SH_S_ASSIGN_STR0 0)                     ; stack: -1 -> -1 (0)
/* 0009067c */ RETURN                                   ; stack: -1 -> -1 (0)
; ENDFUNC Attribute@0

; FUNC Attribute@getId (0x90684-0x90694)
/* 00090684 */ (SH_STRUCT_S_REF 0)                      ; stack:  0 ->  0 (0)
/* 0009068a */ RETURN                                   ; stack:  0 ->  0 (0)
/* 0009068c */ S_PUSH 0 ("")                            ; stack:  0 ->  1 (+1)
/* 00090692 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Attribute@getId

; FUNC Attribute@getName (0x9069a-0x906aa)
/* 0009069a */ (SH_STRUCT_S_REF 1)                      ; stack:  0 ->  0 (0)
/* 000906a0 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 000906a2 */ S_PUSH 0 ("")                            ; stack:  0 ->  1 (+1)
/* 000906a8 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Attribute@getName

; FUNC Attribute@getImageName (0x906b0-0x906c0)
/* 000906b0 */ (SH_STRUCT_S_REF 2)                      ; stack:  0 ->  0 (0)
/* 000906b6 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 000906b8 */ S_PUSH 0 ("")                            ; stack:  0 ->  1 (+1)
/* 000906be */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Attribute@getImageName

; FUNC Attribute@setImageName (0x906c6-0x906d2)
/* 000906c6 */ (SH_STRUCTREF_SASSIGN_LOCALSREF (2, 0))  ; stack:  0 ->  0 (0)
/* 000906d0 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Attribute@setImageName

; FUNC Attribute@setId (0x906d8-0x906ec)
/* 000906d8 */ (SH_STRUCTREF_SASSIGN_LOCALSREF (0, 0))  ; stack:  0 ->  0 (0)
/* 000906e2 */ PUSHSTRUCTPAGE                           ; stack:  0 ->  1 (+1)
/* 000906e4 */ CALLMETHOD 5053                          ; stack:  1 -> -1 (-2)
/* 000906ea */ RETURN                                   ; stack: -1 -> -1 (0)
; ENDFUNC Attribute@setId

; FUNC Attribute@setName (0x906f2-0x906fe)
/* 000906f2 */ (SH_STRUCTREF_SASSIGN_LOCALSREF (1, 0))  ; stack:  0 ->  0 (0)
/* 000906fc */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Attribute@setName

