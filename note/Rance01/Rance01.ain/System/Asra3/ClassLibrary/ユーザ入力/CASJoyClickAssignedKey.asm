; FUNC CASJoyClickAssignedKey@0 (0xc90-0xcac)
/* 00000c90 */ PUSHSTRUCTPAGE                           ; stack:  0 ->  1 (+1)
/* 00000c92 */ CALLMETHOD 7103                          ; stack:  1 -> -1 (-2)
/* 00000c98 */ PUSHSTRUCTPAGE                           ; stack: -1 ->  0 (+1)
/* 00000c9a */ PUSH 1                                   ; stack:  0 ->  1 (+1)
/* 00000ca0 */ PUSH -1                                  ; stack:  1 ->  2 (+1)
/* 00000ca6 */ ASSIGN                                   ; stack:  2 ->  0 (-2)
/* 00000ca8 */ POP                                      ; stack:  0 -> -1 (-1)
/* 00000caa */ RETURN                                   ; stack: -1 -> -1 (0)
; ENDFUNC CASJoyClickAssignedKey@0

; FUNC CASJoyClickAssignedKey@1 (0xcb2-0xcb4)
/* 00000cb2 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC CASJoyClickAssignedKey@1

; FUNC CASJoyClickAssignedKey@UpdateAssignedKey (0xcba-0xcf0)
/* 00000cba */ SH_STRUCTREF CASJoyClickAssignedKey.m_AssignedCode ; stack:  0 ->  0 (0)
/* 00000cc0 */ PUSH -1                                  ; stack:  0 ->  1 (+1)
/* 00000cc6 */ EQUALE                                   ; stack:  1 ->  0 (-1)
/* 00000cc8 */ IFZ 0xcd6                                ; stack:  0 -> -1 (-1)
/* 00000cce */ RETURN                                   ; stack: -1 -> -1 (0)
/* 00000cd0 */ JUMP 0xcd6                               ; stack: -1 -> -1 (0)
/* 00000cd6 */ SH_STRUCTREF CASJoyClickAssignedKey.m_JoyClick ; stack: -1 -> -1 (0)
/* 00000cdc */ SH_STRUCTREF CASJoyClickAssignedKey.m_AssignedCode ; stack: -1 -> -1 (0)
/* 00000ce2 */ CALLFUNC AFL_Joystick_GetButtonAssignment (args: 1) ; stack: -1 -> -1 (0)
/* 00000ce8 */ CALLMETHOD 15                            ; stack: -1 -> -3 (-2)
/* 00000cee */ RETURN                                   ; stack: -3 -> -3 (0)
; ENDFUNC CASJoyClickAssignedKey@UpdateAssignedKey

; FUNC CASJoyClickAssignedKey@Init (0xcf6-0xd20)
/* 00000cf6 */ (SH_MEM_ASSIGN_LOCAL (1, 0))             ; stack:  0 ->  0 (0)
/* 00000d00 */ SH_STRUCTREF CASJoyClickAssignedKey.m_JoyClick ; stack:  0 ->  0 (0)
/* 00000d06 */ SH_STRUCTREF CASJoyClickAssignedKey.m_AssignedCode ; stack:  0 ->  0 (0)
/* 00000d0c */ CALLFUNC AFL_Joystick_GetButtonAssignment (args: 1) ; stack:  0 ->  0 (0)
/* 00000d12 */ SH_LOCALREF FirstKeyDownCancel           ; stack:  0 ->  0 (0)
/* 00000d18 */ CALLMETHOD 14                            ; stack:  0 -> -2 (-2)
/* 00000d1e */ RETURN                                   ; stack: -2 -> -2 (0)
; ENDFUNC CASJoyClickAssignedKey@Init

; FUNC CASJoyClickAssignedKey@Reset (0xd26-0xd3a)
/* 00000d26 */ SH_STRUCTREF CASJoyClickAssignedKey.m_JoyClick ; stack:  0 ->  0 (0)
/* 00000d2c */ SH_LOCALREF FirstKeyDownCancel           ; stack:  0 ->  0 (0)
/* 00000d32 */ CALLMETHOD 16                            ; stack:  0 -> -2 (-2)
/* 00000d38 */ RETURN                                   ; stack: -2 -> -2 (0)
; ENDFUNC CASJoyClickAssignedKey@Reset

; FUNC CASJoyClickAssignedKey@IsFirstClick (0xd40-0xd5e)
/* 00000d40 */ PUSHSTRUCTPAGE                           ; stack:  0 ->  1 (+1)
/* 00000d42 */ CALLMETHOD 24                            ; stack:  1 -> -1 (-2)
/* 00000d48 */ SH_STRUCTREF CASJoyClickAssignedKey.m_JoyClick ; stack: -1 -> -1 (0)
/* 00000d4e */ CALLMETHOD 17                            ; stack: -1 -> -3 (-2)
/* 00000d54 */ RETURN                                   ; stack: -3 -> -3 (0)
/* 00000d56 */ PUSH 0                                   ; stack: -3 -> -2 (+1)
/* 00000d5c */ RETURN                                   ; stack: -2 -> -2 (0)
; ENDFUNC CASJoyClickAssignedKey@IsFirstClick

; FUNC CASJoyClickAssignedKey@IsClick (0xd64-0xd88)
/* 00000d64 */ PUSHSTRUCTPAGE                           ; stack:  0 ->  1 (+1)
/* 00000d66 */ CALLMETHOD 24                            ; stack:  1 -> -1 (-2)
/* 00000d6c */ SH_STRUCTREF CASJoyClickAssignedKey.m_JoyClick ; stack: -1 -> -1 (0)
/* 00000d72 */ SH_LOCALREF nOnObject                    ; stack: -1 -> -1 (0)
/* 00000d78 */ CALLMETHOD 18                            ; stack: -1 -> -3 (-2)
/* 00000d7e */ RETURN                                   ; stack: -3 -> -3 (0)
/* 00000d80 */ PUSH 0                                   ; stack: -3 -> -2 (+1)
/* 00000d86 */ RETURN                                   ; stack: -2 -> -2 (0)
; ENDFUNC CASJoyClickAssignedKey@IsClick

; FUNC CASJoyClickAssignedKey@IsKeyDown (0xd8e-0xdac)
/* 00000d8e */ PUSHSTRUCTPAGE                           ; stack:  0 ->  1 (+1)
/* 00000d90 */ CALLMETHOD 24                            ; stack:  1 -> -1 (-2)
/* 00000d96 */ SH_STRUCTREF CASJoyClickAssignedKey.m_JoyClick ; stack: -1 -> -1 (0)
/* 00000d9c */ CALLMETHOD 19                            ; stack: -1 -> -3 (-2)
/* 00000da2 */ RETURN                                   ; stack: -3 -> -3 (0)
/* 00000da4 */ PUSH 0                                   ; stack: -3 -> -2 (+1)
/* 00000daa */ RETURN                                   ; stack: -2 -> -2 (0)
; ENDFUNC CASJoyClickAssignedKey@IsKeyDown

; FUNC CASJoyClickAssignedKey@IsKeyTrigger (0xdb2-0xdd0)
/* 00000db2 */ PUSHSTRUCTPAGE                           ; stack:  0 ->  1 (+1)
/* 00000db4 */ CALLMETHOD 24                            ; stack:  1 -> -1 (-2)
/* 00000dba */ SH_STRUCTREF CASJoyClickAssignedKey.m_JoyClick ; stack: -1 -> -1 (0)
/* 00000dc0 */ CALLMETHOD 20                            ; stack: -1 -> -3 (-2)
/* 00000dc6 */ RETURN                                   ; stack: -3 -> -3 (0)
/* 00000dc8 */ PUSH 0                                   ; stack: -3 -> -2 (+1)
/* 00000dce */ RETURN                                   ; stack: -2 -> -2 (0)
; ENDFUNC CASJoyClickAssignedKey@IsKeyTrigger

; FUNC CASJoyClickAssignedKey@IsKeyPress (0xdd6-0xdf4)
/* 00000dd6 */ PUSHSTRUCTPAGE                           ; stack:  0 ->  1 (+1)
/* 00000dd8 */ CALLMETHOD 24                            ; stack:  1 -> -1 (-2)
/* 00000dde */ SH_STRUCTREF CASJoyClickAssignedKey.m_JoyClick ; stack: -1 -> -1 (0)
/* 00000de4 */ CALLMETHOD 21                            ; stack: -1 -> -3 (-2)
/* 00000dea */ RETURN                                   ; stack: -3 -> -3 (0)
/* 00000dec */ PUSH 0                                   ; stack: -3 -> -2 (+1)
/* 00000df2 */ RETURN                                   ; stack: -2 -> -2 (0)
; ENDFUNC CASJoyClickAssignedKey@IsKeyPress

