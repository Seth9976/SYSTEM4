; FUNC CVolumeCap@0 (0x379b0-0x379e2)
/* 000379b0 */ PUSHSTRUCTPAGE                           ; stack:  0 ->  1 (+1)
/* 000379b2 */ CALLMETHOD 7156                          ; stack:  1 -> -1 (-2)
/* 000379b8 */ (SH_MEM_ASSIGN_IMM (0, 60l))             ; stack: -1 -> -1 (0)
/* 000379c2 */ (SH_MEM_ASSIGN_IMM (1, 100l))            ; stack: -1 -> -1 (0)
/* 000379cc */ (SH_MEM_ASSIGN_IMM (2, 1000l))           ; stack: -1 -> -1 (0)
/* 000379d6 */ (SH_MEM_ASSIGN_IMM (3, 450l))            ; stack: -1 -> -1 (0)
/* 000379e0 */ RETURN                                   ; stack: -1 -> -1 (0)
; ENDFUNC CVolumeCap@0

; FUNC CVolumeCap@Set (0x379e8-0x37a62)
/* 000379e8 */ (SH_IF_LOC_LT_IMM (0, 0l, 227846))       ; stack:  0 ->  0 (0)
/* 000379f6 */ (SH_MEM_ASSIGN_LOCAL (0, 0))             ; stack:  0 ->  0 (0)
/* 00037a00 */ JUMP 0x37a06                             ; stack:  0 ->  0 (0)
/* 00037a06 */ (SH_IF_LOC_LT_IMM (1, 0l, 227876))       ; stack:  0 ->  0 (0)
/* 00037a14 */ (SH_MEM_ASSIGN_LOCAL (1, 1))             ; stack:  0 ->  0 (0)
/* 00037a1e */ JUMP 0x37a24                             ; stack:  0 ->  0 (0)
/* 00037a24 */ (SH_IF_LOC_LT_IMM (2, 0l, 227906))       ; stack:  0 ->  0 (0)
/* 00037a32 */ (SH_MEM_ASSIGN_LOCAL (2, 2))             ; stack:  0 ->  0 (0)
/* 00037a3c */ JUMP 0x37a42                             ; stack:  0 ->  0 (0)
/* 00037a42 */ (SH_IF_LOC_LT_IMM (3, 0l, 227936))       ; stack:  0 ->  0 (0)
/* 00037a50 */ (SH_MEM_ASSIGN_LOCAL (3, 3))             ; stack:  0 ->  0 (0)
/* 00037a5a */ JUMP 0x37a60                             ; stack:  0 ->  0 (0)
/* 00037a60 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC CVolumeCap@Set

; FUNC CVolumeCap@GetCapVolume (0x37a68-0x37a78)
/* 00037a68 */ SH_STRUCTREF CVolumeCap.m_CapVolume      ; stack:  0 ->  0 (0)
/* 00037a6e */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00037a70 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00037a76 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC CVolumeCap@GetCapVolume

; FUNC CVolumeCap@GetFadeOutTime (0x37a7e-0x37a8e)
/* 00037a7e */ SH_STRUCTREF CVolumeCap.m_FadeOutTime    ; stack:  0 ->  0 (0)
/* 00037a84 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00037a86 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00037a8c */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC CVolumeCap@GetFadeOutTime

; FUNC CVolumeCap@GetWaitForFadeInTime (0x37a94-0x37aa4)
/* 00037a94 */ SH_STRUCTREF CVolumeCap.m_WaitForFadeInTime ; stack:  0 ->  0 (0)
/* 00037a9a */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00037a9c */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00037aa2 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC CVolumeCap@GetWaitForFadeInTime

; FUNC CVolumeCap@GetFadeInTime (0x37aaa-0x37aba)
/* 00037aaa */ SH_STRUCTREF CVolumeCap.m_FadeInTime     ; stack:  0 ->  0 (0)
/* 00037ab0 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00037ab2 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00037ab8 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC CVolumeCap@GetFadeInTime

