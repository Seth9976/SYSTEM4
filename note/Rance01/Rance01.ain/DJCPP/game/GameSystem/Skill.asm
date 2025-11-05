; FUNC Skill@0 (0x91c8e-0x91c98)
/* 00091c8e */ PUSHSTRUCTPAGE                           ; stack:  0 ->  1 (+1)
/* 00091c90 */ CALLMETHOD 7287                          ; stack:  1 -> -1 (-2)
/* 00091c96 */ RETURN                                   ; stack: -1 -> -1 (0)
; ENDFUNC Skill@0

; FUNC Skill@reload (0x91c9e-0x91ca8)
/* 00091c9e */ PUSHSTRUCTPAGE                           ; stack:  0 ->  1 (+1)
/* 00091ca0 */ CALLMETHOD 5156                          ; stack:  1 -> -1 (-2)
/* 00091ca6 */ RETURN                                   ; stack: -1 -> -1 (0)
; ENDFUNC Skill@reload

; FUNC Skill@loadValue (0x91cae-0x91cfc)
/* 00091cae */ PUSHSTRUCTPAGE                           ; stack:  0 ->  1 (+1)
/* 00091cb0 */ S_PUSH 986 ("スキルデータ")        ; stack:  1 ->  2 (+1)
/* 00091cb6 */ (SH_STRUCT_S_REF 0)                      ; stack:  2 ->  2 (0)
/* 00091cbc */ S_PUSH 815 ("name")                      ; stack:  2 ->  3 (+1)
/* 00091cc2 */ S_PUSH 0 ("")                            ; stack:  3 ->  4 (+1)
/* 00091cc8 */ CALLFUNC EX_SA2String (args: 4)          ; stack:  4 ->  1 (-3)
/* 00091cce */ CALLMETHOD 5158                          ; stack:  1 -> -1 (-2)
/* 00091cd4 */ PUSHSTRUCTPAGE                           ; stack: -1 ->  0 (+1)
/* 00091cd6 */ S_PUSH 986 ("スキルデータ")        ; stack:  0 ->  1 (+1)
/* 00091cdc */ (SH_STRUCT_S_REF 0)                      ; stack:  1 ->  1 (0)
/* 00091ce2 */ S_PUSH 945 ("desc")                      ; stack:  1 ->  2 (+1)
/* 00091ce8 */ S_PUSH 0 ("")                            ; stack:  2 ->  3 (+1)
/* 00091cee */ CALLFUNC EX_SA2String (args: 4)          ; stack:  3 ->  0 (-3)
/* 00091cf4 */ CALLMETHOD 5159                          ; stack:  0 -> -2 (-2)
/* 00091cfa */ RETURN                                   ; stack: -2 -> -2 (0)
; ENDFUNC Skill@loadValue

; FUNC Skill@setId (0x91d02-0x91d16)
/* 00091d02 */ (SH_STRUCTREF_SASSIGN_LOCALSREF (0, 0))  ; stack:  0 ->  0 (0)
/* 00091d0c */ PUSHSTRUCTPAGE                           ; stack:  0 ->  1 (+1)
/* 00091d0e */ CALLMETHOD 5156                          ; stack:  1 -> -1 (-2)
/* 00091d14 */ RETURN                                   ; stack: -1 -> -1 (0)
; ENDFUNC Skill@setId

; FUNC Skill@setName (0x91d1c-0x91d28)
/* 00091d1c */ (SH_STRUCTREF_SASSIGN_LOCALSREF (1, 0))  ; stack:  0 ->  0 (0)
/* 00091d26 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Skill@setName

; FUNC Skill@setDesc (0x91d2e-0x91d3a)
/* 00091d2e */ (SH_STRUCTREF_SASSIGN_LOCALSREF (2, 0))  ; stack:  0 ->  0 (0)
/* 00091d38 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Skill@setDesc

; FUNC Skill@getId (0x91d40-0x91d50)
/* 00091d40 */ (SH_STRUCT_S_REF 0)                      ; stack:  0 ->  0 (0)
/* 00091d46 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00091d48 */ S_PUSH 0 ("")                            ; stack:  0 ->  1 (+1)
/* 00091d4e */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Skill@getId

; FUNC Skill@getName (0x91d56-0x91d66)
/* 00091d56 */ (SH_STRUCT_S_REF 1)                      ; stack:  0 ->  0 (0)
/* 00091d5c */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00091d5e */ S_PUSH 0 ("")                            ; stack:  0 ->  1 (+1)
/* 00091d64 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Skill@getName

; FUNC Skill@getDesc (0x91d6c-0x91d7c)
/* 00091d6c */ (SH_STRUCT_S_REF 2)                      ; stack:  0 ->  0 (0)
/* 00091d72 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00091d74 */ S_PUSH 0 ("")                            ; stack:  0 ->  1 (+1)
/* 00091d7a */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Skill@getDesc

