; FUNC Card@0 (0x91aca-0x91b02)
/* 00091aca */ PUSHSTRUCTPAGE                           ; stack:  0 ->  1 (+1)
/* 00091acc */ CALLMETHOD 7286                          ; stack:  1 -> -1 (-2)
/* 00091ad2 */ SH_STRUCTREF Card.id_                    ; stack: -1 -> -1 (0)
/* 00091ad8 */ (SH_S_ASSIGN_STR0 0)                     ; stack: -1 -> -1 (0)
/* 00091ade */ SH_STRUCTREF Card.imageName_             ; stack: -1 -> -1 (0)
/* 00091ae4 */ (SH_S_ASSIGN_STR0 0)                     ; stack: -1 -> -1 (0)
/* 00091aea */ SH_STRUCTREF Card.name_                  ; stack: -1 -> -1 (0)
/* 00091af0 */ (SH_S_ASSIGN_STR0 0)                     ; stack: -1 -> -1 (0)
/* 00091af6 */ (SH_MEM_ASSIGN_IMM (4, 0l))              ; stack: -1 -> -1 (0)
/* 00091b00 */ RETURN                                   ; stack: -1 -> -1 (0)
; ENDFUNC Card@0

; FUNC Card@reload (0x91b08-0x91b12)
/* 00091b08 */ PUSHSTRUCTPAGE                           ; stack:  0 ->  1 (+1)
/* 00091b0a */ CALLMETHOD 5143                          ; stack:  1 -> -1 (-2)
/* 00091b10 */ RETURN                                   ; stack: -1 -> -1 (0)
; ENDFUNC Card@reload

; FUNC Card@loadValue (0x91b18-0x91bb2)
/* 00091b18 */ PUSHSTRUCTPAGE                           ; stack:  0 ->  1 (+1)
/* 00091b1a */ S_PUSH 983 ("カードデータ")        ; stack:  1 ->  2 (+1)
/* 00091b20 */ (SH_STRUCT_S_REF 0)                      ; stack:  2 ->  2 (0)
/* 00091b26 */ S_PUSH 826 ("imageName")                 ; stack:  2 ->  3 (+1)
/* 00091b2c */ S_PUSH 0 ("")                            ; stack:  3 ->  4 (+1)
/* 00091b32 */ CALLFUNC EX_SA2String (args: 4)          ; stack:  4 ->  1 (-3)
/* 00091b38 */ CALLMETHOD 5149                          ; stack:  1 -> -1 (-2)
/* 00091b3e */ PUSHSTRUCTPAGE                           ; stack: -1 ->  0 (+1)
/* 00091b40 */ S_PUSH 983 ("カードデータ")        ; stack:  0 ->  1 (+1)
/* 00091b46 */ (SH_STRUCT_S_REF 0)                      ; stack:  1 ->  1 (0)
/* 00091b4c */ S_PUSH 984 ("rankImageName")             ; stack:  1 ->  2 (+1)
/* 00091b52 */ S_PUSH 0 ("")                            ; stack:  2 ->  3 (+1)
/* 00091b58 */ CALLFUNC EX_SA2String (args: 4)          ; stack:  3 ->  0 (-3)
/* 00091b5e */ CALLMETHOD 5152                          ; stack:  0 -> -2 (-2)
/* 00091b64 */ PUSHSTRUCTPAGE                           ; stack: -2 -> -1 (+1)
/* 00091b66 */ S_PUSH 983 ("カードデータ")        ; stack: -1 ->  0 (+1)
/* 00091b6c */ (SH_STRUCT_S_REF 0)                      ; stack:  0 ->  0 (0)
/* 00091b72 */ S_PUSH 815 ("name")                      ; stack:  0 ->  1 (+1)
/* 00091b78 */ S_PUSH 0 ("")                            ; stack:  1 ->  2 (+1)
/* 00091b7e */ CALLFUNC EX_SA2String (args: 4)          ; stack:  2 -> -1 (-3)
/* 00091b84 */ CALLMETHOD 5151                          ; stack: -1 -> -3 (-2)
/* 00091b8a */ PUSHSTRUCTPAGE                           ; stack: -3 -> -2 (+1)
/* 00091b8c */ S_PUSH 983 ("カードデータ")        ; stack: -2 -> -1 (+1)
/* 00091b92 */ (SH_STRUCT_S_REF 0)                      ; stack: -1 -> -1 (0)
/* 00091b98 */ S_PUSH 985 ("type")                      ; stack: -1 ->  0 (+1)
/* 00091b9e */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00091ba4 */ CALLFUNC EX_SA2Int (args: 4)             ; stack:  1 -> -2 (-3)
/* 00091baa */ CALLMETHOD 5150                          ; stack: -2 -> -4 (-2)
/* 00091bb0 */ RETURN                                   ; stack: -4 -> -4 (0)
; ENDFUNC Card@loadValue

; FUNC Card@getId (0x91bb8-0x91bc8)
/* 00091bb8 */ (SH_STRUCT_S_REF 0)                      ; stack:  0 ->  0 (0)
/* 00091bbe */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00091bc0 */ S_PUSH 0 ("")                            ; stack:  0 ->  1 (+1)
/* 00091bc6 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Card@getId

; FUNC Card@getName (0x91bce-0x91bde)
/* 00091bce */ (SH_STRUCT_S_REF 3)                      ; stack:  0 ->  0 (0)
/* 00091bd4 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00091bd6 */ S_PUSH 0 ("")                            ; stack:  0 ->  1 (+1)
/* 00091bdc */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Card@getName

; FUNC Card@getImageName (0x91be4-0x91bf4)
/* 00091be4 */ (SH_STRUCT_S_REF 1)                      ; stack:  0 ->  0 (0)
/* 00091bea */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00091bec */ S_PUSH 0 ("")                            ; stack:  0 ->  1 (+1)
/* 00091bf2 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Card@getImageName

; FUNC Card@getType (0x91bfa-0x91c0a)
/* 00091bfa */ SH_STRUCTREF Card.type_                  ; stack:  0 ->  0 (0)
/* 00091c00 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00091c02 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00091c08 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Card@getType

; FUNC Card@setId (0x91c10-0x91c24)
/* 00091c10 */ (SH_STRUCTREF_SASSIGN_LOCALSREF (0, 0))  ; stack:  0 ->  0 (0)
/* 00091c1a */ PUSHSTRUCTPAGE                           ; stack:  0 ->  1 (+1)
/* 00091c1c */ CALLMETHOD 5143                          ; stack:  1 -> -1 (-2)
/* 00091c22 */ RETURN                                   ; stack: -1 -> -1 (0)
; ENDFUNC Card@setId

; FUNC Card@setImageName (0x91c2a-0x91c36)
/* 00091c2a */ (SH_STRUCTREF_SASSIGN_LOCALSREF (1, 0))  ; stack:  0 ->  0 (0)
/* 00091c34 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Card@setImageName

; FUNC Card@setType (0x91c3c-0x91c48)
/* 00091c3c */ (SH_MEM_ASSIGN_LOCAL (4, 0))             ; stack:  0 ->  0 (0)
/* 00091c46 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Card@setType

; FUNC Card@setName (0x91c4e-0x91c5a)
/* 00091c4e */ (SH_STRUCTREF_SASSIGN_LOCALSREF (3, 0))  ; stack:  0 ->  0 (0)
/* 00091c58 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Card@setName

; FUNC Card@setRankImageName (0x91c60-0x91c6c)
/* 00091c60 */ (SH_STRUCTREF_SASSIGN_LOCALSREF (2, 0))  ; stack:  0 ->  0 (0)
/* 00091c6a */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Card@setRankImageName

; FUNC Card@getRankImageName (0x91c72-0x91c82)
/* 00091c72 */ (SH_STRUCT_S_REF 2)                      ; stack:  0 ->  0 (0)
/* 00091c78 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00091c7a */ S_PUSH 0 ("")                            ; stack:  0 ->  1 (+1)
/* 00091c80 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Card@getRankImageName

