; FUNC AFL_Parts_WaitForClick (0x57d7e-0x57d9a)
/* 00057d7e */ SH_LOCALREF Func                         ; stack:  0 ->  0 (0)
/* 00057d84 */ SH_LOCALREF キーキャンセル        ; stack:  0 ->  0 (0)
/* 00057d8a */ CALLFUNC PARTS_WaitForClick (args: 2)    ; stack:  0 -> -1 (-1)
/* 00057d90 */ RETURN                                   ; stack: -1 -> -1 (0)
/* 00057d92 */ PUSH 0                                   ; stack: -1 ->  0 (+1)
/* 00057d98 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC AFL_Parts_WaitForClick

; FUNC AFL_Parts_GetOnCursorSound (0x57da6-0x57dc6)
/* 00057da6 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00057dac */ PUSH 2                                   ; stack:  0 ->  1 (+1)
/* 00057db2 */ CALLHLL GUIEngine.Parts_GetSoundNumber (args: 2) ; stack:  1 ->  1 (0)
/* 00057dbc */ RETURN                                   ; stack:  1 ->  1 (0)
/* 00057dbe */ PUSH 0                                   ; stack:  1 ->  2 (+1)
/* 00057dc4 */ RETURN                                   ; stack:  2 ->  2 (0)
; ENDFUNC AFL_Parts_GetOnCursorSound

; FUNC AFL_Parts_GetClickSound (0x57dd2-0x57df2)
/* 00057dd2 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00057dd8 */ PUSH 3                                   ; stack:  0 ->  1 (+1)
/* 00057dde */ CALLHLL GUIEngine.Parts_GetSoundNumber (args: 2) ; stack:  1 ->  1 (0)
/* 00057de8 */ RETURN                                   ; stack:  1 ->  1 (0)
/* 00057dea */ PUSH 0                                   ; stack:  1 ->  2 (+1)
/* 00057df0 */ RETURN                                   ; stack:  2 ->  2 (0)
; ENDFUNC AFL_Parts_GetClickSound

; FUNC AFL_Parts_SetStatus (0x57dfe-0x57e16)
/* 00057dfe */ SH_LOCALREF PartsNumber                  ; stack:  0 ->  0 (0)
/* 00057e04 */ SH_LOCALREF State                        ; stack:  0 ->  0 (0)
/* 00057e0a */ CALLHLL GUIEngine.Parts_SetInputState (args: 2) ; stack:  0 ->  0 (0)
/* 00057e14 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC AFL_Parts_SetStatus

; FUNC AFL_Parts_GetStatus (0x57e22-0x57e3c)
/* 00057e22 */ SH_LOCALREF PartsNumber                  ; stack:  0 ->  0 (0)
/* 00057e28 */ CALLHLL GUIEngine.Parts_GetInputState (args: 1) ; stack:  0 ->  0 (0)
/* 00057e32 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00057e34 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00057e3a */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC AFL_Parts_GetStatus

; FUNC AFL_Parts_PlaySound (0x57e48-0x57e8e)
/* 00057e48 */ PUSHLOCALPAGE                            ; stack:  0 ->  1 (+1)
/* 00057e4a */ PUSH 2                                   ; stack:  1 ->  2 (+1)
/* 00057e50 */ SH_LOCALREF PartsNumber                  ; stack:  2 ->  2 (0)
/* 00057e56 */ SH_LOCALREF State                        ; stack:  2 ->  2 (0)
/* 00057e5c */ CALLHLL GUIEngine.Parts_GetSoundNumber (args: 2) ; stack:  2 ->  2 (0)
/* 00057e66 */ ASSIGN                                   ; stack:  2 ->  0 (-2)
/* 00057e68 */ POP                                      ; stack:  0 -> -1 (-1)
/* 00057e6a */ (SH_IF_LOC_NE_IMM (2, 0l, 360064))       ; stack: -1 -> -1 (0)
/* 00057e78 */ RETURN                                   ; stack: -1 -> -1 (0)
/* 00057e7a */ JUMP 0x57e80                             ; stack: -1 -> -1 (0)
/* 00057e80 */ SH_LOCALREF SoundNumber                  ; stack: -1 -> -1 (0)
/* 00057e86 */ CALLFUNC 効果音 (args: 1)             ; stack: -1 -> -2 (-1)
/* 00057e8c */ RETURN                                   ; stack: -2 -> -2 (0)
; ENDFUNC AFL_Parts_PlaySound

; FUNC AFL_Parts_PlayClickMissSound (0x57e9a-0x57ed4)
/* 00057e9a */ PUSHLOCALPAGE                            ; stack:  0 ->  1 (+1)
/* 00057e9c */ PUSH 0                                   ; stack:  1 ->  2 (+1)
/* 00057ea2 */ CALLHLL GUIEngine.Parts_GetClickMissSoundNumber (args: 0) ; stack:  2 ->  2 (0)
/* 00057eac */ ASSIGN                                   ; stack:  2 ->  0 (-2)
/* 00057eae */ POP                                      ; stack:  0 -> -1 (-1)
/* 00057eb0 */ (SH_IF_LOC_NE_IMM (0, 0l, 360134))       ; stack: -1 -> -1 (0)
/* 00057ebe */ RETURN                                   ; stack: -1 -> -1 (0)
/* 00057ec0 */ JUMP 0x57ec6                             ; stack: -1 -> -1 (0)
/* 00057ec6 */ SH_LOCALREF SoundNumber                  ; stack: -1 -> -1 (0)
/* 00057ecc */ CALLFUNC 効果音 (args: 1)             ; stack: -1 -> -2 (-1)
/* 00057ed2 */ RETURN                                   ; stack: -2 -> -2 (0)
; ENDFUNC AFL_Parts_PlayClickMissSound

; FUNC AFL_Parts_GetUpperLeftPosX (0x57ee0-0x57f00)
/* 00057ee0 */ SH_LOCALREF PartsNumber                  ; stack:  0 ->  0 (0)
/* 00057ee6 */ PUSH 1                                   ; stack:  0 ->  1 (+1)
/* 00057eec */ CALLHLL GUIEngine.Parts_GetPartsUpperLeftPosX (args: 2) ; stack:  1 ->  1 (0)
/* 00057ef6 */ RETURN                                   ; stack:  1 ->  1 (0)
/* 00057ef8 */ PUSH 0                                   ; stack:  1 ->  2 (+1)
/* 00057efe */ RETURN                                   ; stack:  2 ->  2 (0)
; ENDFUNC AFL_Parts_GetUpperLeftPosX

; FUNC AFL_Parts_GetUpperLeftPosY (0x57f0c-0x57f2c)
/* 00057f0c */ SH_LOCALREF PartsNumber                  ; stack:  0 ->  0 (0)
/* 00057f12 */ PUSH 1                                   ; stack:  0 ->  1 (+1)
/* 00057f18 */ CALLHLL GUIEngine.Parts_GetPartsUpperLeftPosY (args: 2) ; stack:  1 ->  1 (0)
/* 00057f22 */ RETURN                                   ; stack:  1 ->  1 (0)
/* 00057f24 */ PUSH 0                                   ; stack:  1 ->  2 (+1)
/* 00057f2a */ RETURN                                   ; stack:  2 ->  2 (0)
; ENDFUNC AFL_Parts_GetUpperLeftPosY

; FUNC AFL_Parts_GetWidth (0x57f38-0x57f58)
/* 00057f38 */ SH_LOCALREF PartsNumber                  ; stack:  0 ->  0 (0)
/* 00057f3e */ SH_LOCALREF State                        ; stack:  0 ->  0 (0)
/* 00057f44 */ CALLHLL GUIEngine.Parts_GetPartsWidth (args: 2) ; stack:  0 ->  0 (0)
/* 00057f4e */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00057f50 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00057f56 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC AFL_Parts_GetWidth

; FUNC AFL_Parts_GetHeight (0x57f64-0x57f84)
/* 00057f64 */ SH_LOCALREF PartsNumber                  ; stack:  0 ->  0 (0)
/* 00057f6a */ SH_LOCALREF State                        ; stack:  0 ->  0 (0)
/* 00057f70 */ CALLHLL GUIEngine.Parts_GetPartsHeight (args: 2) ; stack:  0 ->  0 (0)
/* 00057f7a */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00057f7c */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00057f82 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC AFL_Parts_GetHeight

; FUNC AFL_Parts_IsPointIn (0x57f90-0x57fbc)
/* 00057f90 */ SH_LOCALREF PartsNumber                  ; stack:  0 ->  0 (0)
/* 00057f96 */ SH_LOCALREF nX                           ; stack:  0 ->  0 (0)
/* 00057f9c */ SH_LOCALREF nY                           ; stack:  0 ->  0 (0)
/* 00057fa2 */ SH_LOCALREF State                        ; stack:  0 ->  0 (0)
/* 00057fa8 */ CALLHLL GUIEngine.Parts_IsCursorIn (args: 4) ; stack:  0 ->  0 (0)
/* 00057fb2 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00057fb4 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00057fba */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC AFL_Parts_IsPointIn

; FUNC AFL_Parts_SetZByBaseZ (0x57fc8-0x58004)
/* 00057fc8 */ PUSHLOCALPAGE                            ; stack:  0 ->  1 (+1)
/* 00057fca */ PUSH 1                                   ; stack:  1 ->  2 (+1)
/* 00057fd0 */ CALLFUNC SYS_ASSERTE_Z (args: 1)         ; stack:  2 ->  1 (-1)
/* 00057fd6 */ PUSHLOCALPAGE                            ; stack:  1 ->  2 (+1)
/* 00057fd8 */ PUSH 2                                   ; stack:  2 ->  3 (+1)
/* 00057fde */ CALLFUNC SYS_ASSERTE_BASEZ (args: 1)     ; stack:  3 ->  2 (-1)
/* 00057fe4 */ SH_LOCALREF PartsNumber                  ; stack:  2 ->  2 (0)
/* 00057fea */ SH_LOCALREF PosZ                         ; stack:  2 ->  2 (0)
/* 00057ff0 */ SH_LOCALREF BasePosZ                     ; stack:  2 ->  2 (0)
/* 00057ff6 */ ADD                                      ; stack:  2 ->  1 (-1)
/* 00057ff8 */ CALLHLL GUIEngine.Parts_SetZ (args: 2)   ; stack:  1 ->  1 (0)
/* 00058002 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC AFL_Parts_SetZByBaseZ

