; FUNC BadCondition@0 (0x91d88-0x91d92)
/* 00091d88 */ PUSHSTRUCTPAGE                           ; stack:  0 ->  1 (+1)
/* 00091d8a */ CALLMETHOD 7288                          ; stack:  1 -> -1 (-2)
/* 00091d90 */ RETURN                                   ; stack: -1 -> -1 (0)
; ENDFUNC BadCondition@0

; FUNC BadCondition@reload (0x91d98-0x91da2)
/* 00091d98 */ PUSHSTRUCTPAGE                           ; stack:  0 ->  1 (+1)
/* 00091d9a */ CALLMETHOD 5165                          ; stack:  1 -> -1 (-2)
/* 00091da0 */ RETURN                                   ; stack: -1 -> -1 (0)
; ENDFUNC BadCondition@reload

; FUNC BadCondition@loadValue (0x91da8-0x91df6)
/* 00091da8 */ PUSHSTRUCTPAGE                           ; stack:  0 ->  1 (+1)
/* 00091daa */ S_PUSH 987 ("状態異常データ")     ; stack:  1 ->  2 (+1)
/* 00091db0 */ (SH_STRUCT_S_REF 0)                      ; stack:  2 ->  2 (0)
/* 00091db6 */ S_PUSH 815 ("name")                      ; stack:  2 ->  3 (+1)
/* 00091dbc */ S_PUSH 0 ("")                            ; stack:  3 ->  4 (+1)
/* 00091dc2 */ CALLFUNC EX_SA2String (args: 4)          ; stack:  4 ->  1 (-3)
/* 00091dc8 */ CALLMETHOD 5167                          ; stack:  1 -> -1 (-2)
/* 00091dce */ PUSHSTRUCTPAGE                           ; stack: -1 ->  0 (+1)
/* 00091dd0 */ S_PUSH 987 ("状態異常データ")     ; stack:  0 ->  1 (+1)
/* 00091dd6 */ (SH_STRUCT_S_REF 0)                      ; stack:  1 ->  1 (0)
/* 00091ddc */ S_PUSH 945 ("desc")                      ; stack:  1 ->  2 (+1)
/* 00091de2 */ S_PUSH 0 ("")                            ; stack:  2 ->  3 (+1)
/* 00091de8 */ CALLFUNC EX_SA2String (args: 4)          ; stack:  3 ->  0 (-3)
/* 00091dee */ CALLMETHOD 5168                          ; stack:  0 -> -2 (-2)
/* 00091df4 */ RETURN                                   ; stack: -2 -> -2 (0)
; ENDFUNC BadCondition@loadValue

; FUNC BadCondition@setId (0x91dfc-0x91e10)
/* 00091dfc */ (SH_STRUCTREF_SASSIGN_LOCALSREF (0, 0))  ; stack:  0 ->  0 (0)
/* 00091e06 */ PUSHSTRUCTPAGE                           ; stack:  0 ->  1 (+1)
/* 00091e08 */ CALLMETHOD 5165                          ; stack:  1 -> -1 (-2)
/* 00091e0e */ RETURN                                   ; stack: -1 -> -1 (0)
; ENDFUNC BadCondition@setId

; FUNC BadCondition@setName (0x91e16-0x91e22)
/* 00091e16 */ (SH_STRUCTREF_SASSIGN_LOCALSREF (1, 0))  ; stack:  0 ->  0 (0)
/* 00091e20 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC BadCondition@setName

; FUNC BadCondition@setDesc (0x91e28-0x91e34)
/* 00091e28 */ (SH_STRUCTREF_SASSIGN_LOCALSREF (2, 0))  ; stack:  0 ->  0 (0)
/* 00091e32 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC BadCondition@setDesc

; FUNC BadCondition@getId (0x91e3a-0x91e4a)
/* 00091e3a */ (SH_STRUCT_S_REF 0)                      ; stack:  0 ->  0 (0)
/* 00091e40 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00091e42 */ S_PUSH 0 ("")                            ; stack:  0 ->  1 (+1)
/* 00091e48 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC BadCondition@getId

; FUNC BadCondition@getName (0x91e50-0x91e60)
/* 00091e50 */ (SH_STRUCT_S_REF 1)                      ; stack:  0 ->  0 (0)
/* 00091e56 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00091e58 */ S_PUSH 0 ("")                            ; stack:  0 ->  1 (+1)
/* 00091e5e */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC BadCondition@getName

; FUNC BadCondition@getDesc (0x91e66-0x91e76)
/* 00091e66 */ (SH_STRUCT_S_REF 2)                      ; stack:  0 ->  0 (0)
/* 00091e6c */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00091e6e */ S_PUSH 0 ("")                            ; stack:  0 ->  1 (+1)
/* 00091e74 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC BadCondition@getDesc

