; FUNC Config_GetMouseWheelBackLog (0x861a2-0x861bc)
/* 000861a2 */ CALLFUNC AFL_Config_GetWheelForward (args: 0) ; stack:  0 ->  1 (+1)
/* 000861a8 */ PUSH 0                                   ; stack:  1 ->  2 (+1)
/* 000861ae */ EQUALE                                   ; stack:  2 ->  1 (-1)
/* 000861b0 */ ITOB                                     ; stack:  1 ->  1 (0)
/* 000861b2 */ RETURN                                   ; stack:  1 ->  1 (0)
/* 000861b4 */ PUSH 0                                   ; stack:  1 ->  2 (+1)
/* 000861ba */ RETURN                                   ; stack:  2 ->  2 (0)
; ENDFUNC Config_GetMouseWheelBackLog

; FUNC Config_SetMouseWheelBackLog (0x861c8-0x861d6)
/* 000861c8 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 000861ce */ CALLFUNC AFL_Config_SetWheelForward (args: 1) ; stack:  1 ->  0 (-1)
/* 000861d4 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Config_SetMouseWheelBackLog

; FUNC Config_GetMouseWheelBackScene (0x861e2-0x861fc)
/* 000861e2 */ CALLFUNC AFL_Config_GetWheelForward (args: 0) ; stack:  0 ->  1 (+1)
/* 000861e8 */ PUSH 1                                   ; stack:  1 ->  2 (+1)
/* 000861ee */ EQUALE                                   ; stack:  2 ->  1 (-1)
/* 000861f0 */ ITOB                                     ; stack:  1 ->  1 (0)
/* 000861f2 */ RETURN                                   ; stack:  1 ->  1 (0)
/* 000861f4 */ PUSH 0                                   ; stack:  1 ->  2 (+1)
/* 000861fa */ RETURN                                   ; stack:  2 ->  2 (0)
; ENDFUNC Config_GetMouseWheelBackScene

; FUNC Config_SetMouseWheelBackScene (0x86208-0x86216)
/* 00086208 */ PUSH 1                                   ; stack:  0 ->  1 (+1)
/* 0008620e */ CALLFUNC AFL_Config_SetWheelForward (args: 1) ; stack:  1 ->  0 (-1)
/* 00086214 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Config_SetMouseWheelBackScene

; FUNC Config_GetFullScreenMode (0x86222-0x86236)
/* 00086222 */ CALLFUNC AFL_Config_GetWindowMode (args: 0) ; stack:  0 ->  1 (+1)
/* 00086228 */ NOT                                      ; stack:  1 ->  1 (0)
/* 0008622a */ ITOB                                     ; stack:  1 ->  1 (0)
/* 0008622c */ RETURN                                   ; stack:  1 ->  1 (0)
/* 0008622e */ PUSH 0                                   ; stack:  1 ->  2 (+1)
/* 00086234 */ RETURN                                   ; stack:  2 ->  2 (0)
; ENDFUNC Config_GetFullScreenMode

; FUNC Config_SetFullScreenMode (0x86242-0x86250)
/* 00086242 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00086248 */ CALLFUNC AFL_Config_SetWindowMode (args: 1) ; stack:  1 ->  0 (-1)
/* 0008624e */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Config_SetFullScreenMode

; FUNC Config_SetWindowMode (0x8625c-0x8626a)
/* 0008625c */ PUSH 1                                   ; stack:  0 ->  1 (+1)
/* 00086262 */ CALLFUNC AFL_Config_SetWindowMode (args: 1) ; stack:  1 ->  0 (-1)
/* 00086268 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Config_SetWindowMode

; FUNC Config_GetAspectRatioDefault (0x86276-0x86290)
/* 00086276 */ CALLFUNC AFL_Config_GetAspectRatio (args: 0) ; stack:  0 ->  1 (+1)
/* 0008627c */ PUSH 0                                   ; stack:  1 ->  2 (+1)
/* 00086282 */ EQUALE                                   ; stack:  2 ->  1 (-1)
/* 00086284 */ ITOB                                     ; stack:  1 ->  1 (0)
/* 00086286 */ RETURN                                   ; stack:  1 ->  1 (0)
/* 00086288 */ PUSH 0                                   ; stack:  1 ->  2 (+1)
/* 0008628e */ RETURN                                   ; stack:  2 ->  2 (0)
; ENDFUNC Config_GetAspectRatioDefault

; FUNC Config_SetAspectRatioDefault (0x8629c-0x862aa)
/* 0008629c */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 000862a2 */ CALLFUNC AFL_Config_SetAspectRatio (args: 1) ; stack:  1 ->  0 (-1)
/* 000862a8 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Config_SetAspectRatioDefault

; FUNC Config_GetAspectRatioFix (0x862b6-0x862d0)
/* 000862b6 */ CALLFUNC AFL_Config_GetAspectRatio (args: 0) ; stack:  0 ->  1 (+1)
/* 000862bc */ PUSH 1                                   ; stack:  1 ->  2 (+1)
/* 000862c2 */ EQUALE                                   ; stack:  2 ->  1 (-1)
/* 000862c4 */ ITOB                                     ; stack:  1 ->  1 (0)
/* 000862c6 */ RETURN                                   ; stack:  1 ->  1 (0)
/* 000862c8 */ PUSH 0                                   ; stack:  1 ->  2 (+1)
/* 000862ce */ RETURN                                   ; stack:  2 ->  2 (0)
; ENDFUNC Config_GetAspectRatioFix

; FUNC Config_SetAspectRatioFix (0x862dc-0x862ea)
/* 000862dc */ PUSH 1                                   ; stack:  0 ->  1 (+1)
/* 000862e2 */ CALLFUNC AFL_Config_SetAspectRatio (args: 1) ; stack:  1 ->  0 (-1)
/* 000862e8 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Config_SetAspectRatioFix

; FUNC Config_GetScalingTypeDefault (0x862f6-0x86310)
/* 000862f6 */ CALLFUNC AFL_Config_GetScalingType (args: 0) ; stack:  0 ->  1 (+1)
/* 000862fc */ PUSH 0                                   ; stack:  1 ->  2 (+1)
/* 00086302 */ EQUALE                                   ; stack:  2 ->  1 (-1)
/* 00086304 */ ITOB                                     ; stack:  1 ->  1 (0)
/* 00086306 */ RETURN                                   ; stack:  1 ->  1 (0)
/* 00086308 */ PUSH 0                                   ; stack:  1 ->  2 (+1)
/* 0008630e */ RETURN                                   ; stack:  2 ->  2 (0)
; ENDFUNC Config_GetScalingTypeDefault

; FUNC Config_SetScalingTypeDefault (0x8631c-0x8632a)
/* 0008631c */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00086322 */ CALLFUNC AFL_Config_SetScalingType (args: 1) ; stack:  1 ->  0 (-1)
/* 00086328 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Config_SetScalingTypeDefault

; FUNC Config_GetScalingTypeBiCubic (0x86336-0x86350)
/* 00086336 */ CALLFUNC AFL_Config_GetScalingType (args: 0) ; stack:  0 ->  1 (+1)
/* 0008633c */ PUSH 1                                   ; stack:  1 ->  2 (+1)
/* 00086342 */ EQUALE                                   ; stack:  2 ->  1 (-1)
/* 00086344 */ ITOB                                     ; stack:  1 ->  1 (0)
/* 00086346 */ RETURN                                   ; stack:  1 ->  1 (0)
/* 00086348 */ PUSH 0                                   ; stack:  1 ->  2 (+1)
/* 0008634e */ RETURN                                   ; stack:  2 ->  2 (0)
; ENDFUNC Config_GetScalingTypeBiCubic

; FUNC Config_SetScalingTypeBiCubic (0x8635c-0x8636a)
/* 0008635c */ PUSH 1                                   ; stack:  0 ->  1 (+1)
/* 00086362 */ CALLFUNC AFL_Config_SetScalingType (args: 1) ; stack:  1 ->  0 (-1)
/* 00086368 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Config_SetScalingTypeBiCubic

; FUNC Config_SetVolumeMaster (0x86376-0x86394)
/* 00086376 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 0008637c */ SH_LOCALREF val                          ; stack:  1 ->  1 (0)
/* 00086382 */ F_PUSH 100.000000                        ; stack:  1 ->  2 (+1)
/* 00086388 */ F_MUL                                    ; stack:  2 ->  1 (-1)
/* 0008638a */ FTOI                                     ; stack:  1 ->  1 (0)
/* 0008638c */ CALLFUNC AFL_Config_SetVolume (args: 2)  ; stack:  1 -> -1 (-2)
/* 00086392 */ RETURN                                   ; stack: -1 -> -1 (0)
; ENDFUNC Config_SetVolumeMaster

; FUNC Config_SetVolumeBgm (0x863a0-0x863be)
/* 000863a0 */ PUSH 1                                   ; stack:  0 ->  1 (+1)
/* 000863a6 */ SH_LOCALREF val                          ; stack:  1 ->  1 (0)
/* 000863ac */ F_PUSH 100.000000                        ; stack:  1 ->  2 (+1)
/* 000863b2 */ F_MUL                                    ; stack:  2 ->  1 (-1)
/* 000863b4 */ FTOI                                     ; stack:  1 ->  1 (0)
/* 000863b6 */ CALLFUNC AFL_Config_SetVolume (args: 2)  ; stack:  1 -> -1 (-2)
/* 000863bc */ RETURN                                   ; stack: -1 -> -1 (0)
; ENDFUNC Config_SetVolumeBgm

; FUNC Config_SetVolumeSound (0x863ca-0x863e8)
/* 000863ca */ PUSH 2                                   ; stack:  0 ->  1 (+1)
/* 000863d0 */ SH_LOCALREF val                          ; stack:  1 ->  1 (0)
/* 000863d6 */ F_PUSH 100.000000                        ; stack:  1 ->  2 (+1)
/* 000863dc */ F_MUL                                    ; stack:  2 ->  1 (-1)
/* 000863de */ FTOI                                     ; stack:  1 ->  1 (0)
/* 000863e0 */ CALLFUNC AFL_Config_SetVolume (args: 2)  ; stack:  1 -> -1 (-2)
/* 000863e6 */ RETURN                                   ; stack: -1 -> -1 (0)
; ENDFUNC Config_SetVolumeSound

; FUNC Config_SetVolumeVoice (0x863f4-0x86412)
/* 000863f4 */ PUSH 3                                   ; stack:  0 ->  1 (+1)
/* 000863fa */ SH_LOCALREF val                          ; stack:  1 ->  1 (0)
/* 00086400 */ F_PUSH 100.000000                        ; stack:  1 ->  2 (+1)
/* 00086406 */ F_MUL                                    ; stack:  2 ->  1 (-1)
/* 00086408 */ FTOI                                     ; stack:  1 ->  1 (0)
/* 0008640a */ CALLFUNC AFL_Config_SetVolume (args: 2)  ; stack:  1 -> -1 (-2)
/* 00086410 */ RETURN                                   ; stack: -1 -> -1 (0)
; ENDFUNC Config_SetVolumeVoice

; FUNC Config_GetVolumeMaster (0x8641e-0x8643e)
/* 0008641e */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00086424 */ CALLFUNC AFL_Config_GetVolume (args: 1)  ; stack:  1 ->  1 (0)
/* 0008642a */ ITOF                                     ; stack:  1 ->  1 (0)
/* 0008642c */ F_PUSH 100.000000                        ; stack:  1 ->  2 (+1)
/* 00086432 */ F_DIV                                    ; stack:  2 ->  1 (-1)
/* 00086434 */ RETURN                                   ; stack:  1 ->  1 (0)
/* 00086436 */ F_PUSH 0.000000                          ; stack:  1 ->  2 (+1)
/* 0008643c */ RETURN                                   ; stack:  2 ->  2 (0)
; ENDFUNC Config_GetVolumeMaster

; FUNC Config_GetVolumeBgm (0x8644a-0x8646a)
/* 0008644a */ PUSH 1                                   ; stack:  0 ->  1 (+1)
/* 00086450 */ CALLFUNC AFL_Config_GetVolume (args: 1)  ; stack:  1 ->  1 (0)
/* 00086456 */ ITOF                                     ; stack:  1 ->  1 (0)
/* 00086458 */ F_PUSH 100.000000                        ; stack:  1 ->  2 (+1)
/* 0008645e */ F_DIV                                    ; stack:  2 ->  1 (-1)
/* 00086460 */ RETURN                                   ; stack:  1 ->  1 (0)
/* 00086462 */ F_PUSH 0.000000                          ; stack:  1 ->  2 (+1)
/* 00086468 */ RETURN                                   ; stack:  2 ->  2 (0)
; ENDFUNC Config_GetVolumeBgm

; FUNC Config_GetVolumeSound (0x86476-0x86496)
/* 00086476 */ PUSH 2                                   ; stack:  0 ->  1 (+1)
/* 0008647c */ CALLFUNC AFL_Config_GetVolume (args: 1)  ; stack:  1 ->  1 (0)
/* 00086482 */ ITOF                                     ; stack:  1 ->  1 (0)
/* 00086484 */ F_PUSH 100.000000                        ; stack:  1 ->  2 (+1)
/* 0008648a */ F_DIV                                    ; stack:  2 ->  1 (-1)
/* 0008648c */ RETURN                                   ; stack:  1 ->  1 (0)
/* 0008648e */ F_PUSH 0.000000                          ; stack:  1 ->  2 (+1)
/* 00086494 */ RETURN                                   ; stack:  2 ->  2 (0)
; ENDFUNC Config_GetVolumeSound

; FUNC Config_GetVolumeVoice (0x864a2-0x864c2)
/* 000864a2 */ PUSH 3                                   ; stack:  0 ->  1 (+1)
/* 000864a8 */ CALLFUNC AFL_Config_GetVolume (args: 1)  ; stack:  1 ->  1 (0)
/* 000864ae */ ITOF                                     ; stack:  1 ->  1 (0)
/* 000864b0 */ F_PUSH 100.000000                        ; stack:  1 ->  2 (+1)
/* 000864b6 */ F_DIV                                    ; stack:  2 ->  1 (-1)
/* 000864b8 */ RETURN                                   ; stack:  1 ->  1 (0)
/* 000864ba */ F_PUSH 0.000000                          ; stack:  1 ->  2 (+1)
/* 000864c0 */ RETURN                                   ; stack:  2 ->  2 (0)
; ENDFUNC Config_GetVolumeVoice

; FUNC Config_ResetMulColorRate (0x864ce-0x864dc)
/* 000864ce */ F_PUSH 1.000000                          ; stack:  0 ->  1 (+1)
/* 000864d4 */ CALLFUNC AFL_Config_SetMessageWindowMulColorRate (args: 1) ; stack:  1 ->  0 (-1)
/* 000864da */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Config_ResetMulColorRate

; FUNC Config_ResetAlphaColorRate (0x864e8-0x864f6)
/* 000864e8 */ F_PUSH 1.000000                          ; stack:  0 ->  1 (+1)
/* 000864ee */ CALLFUNC AFL_Config_SetMessageWindowAlphaRate (args: 1) ; stack:  1 ->  0 (-1)
/* 000864f4 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Config_ResetAlphaColorRate

; FUNC Config_ResetVolumeMaster (0x86502-0x8651c)
/* 00086502 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00086508 */ PUSH 0                                   ; stack:  1 ->  2 (+1)
/* 0008650e */ CALLFUNC AFL_Config_GetDefaultVolume (args: 1) ; stack:  2 ->  2 (0)
/* 00086514 */ CALLFUNC AFL_Config_SetVolume (args: 2)  ; stack:  2 ->  0 (-2)
/* 0008651a */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Config_ResetVolumeMaster

; FUNC Config_ResetVolumeMusic (0x86528-0x86542)
/* 00086528 */ PUSH 1                                   ; stack:  0 ->  1 (+1)
/* 0008652e */ PUSH 1                                   ; stack:  1 ->  2 (+1)
/* 00086534 */ CALLFUNC AFL_Config_GetDefaultVolume (args: 1) ; stack:  2 ->  2 (0)
/* 0008653a */ CALLFUNC AFL_Config_SetVolume (args: 2)  ; stack:  2 ->  0 (-2)
/* 00086540 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Config_ResetVolumeMusic

; FUNC Config_ResetVolumeSoundEffect (0x8654e-0x86568)
/* 0008654e */ PUSH 2                                   ; stack:  0 ->  1 (+1)
/* 00086554 */ PUSH 2                                   ; stack:  1 ->  2 (+1)
/* 0008655a */ CALLFUNC AFL_Config_GetDefaultVolume (args: 1) ; stack:  2 ->  2 (0)
/* 00086560 */ CALLFUNC AFL_Config_SetVolume (args: 2)  ; stack:  2 ->  0 (-2)
/* 00086566 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Config_ResetVolumeSoundEffect

; FUNC Config_ResetVolumeVoice (0x86574-0x8658e)
/* 00086574 */ PUSH 3                                   ; stack:  0 ->  1 (+1)
/* 0008657a */ PUSH 3                                   ; stack:  1 ->  2 (+1)
/* 00086580 */ CALLFUNC AFL_Config_GetDefaultVolume (args: 1) ; stack:  2 ->  2 (0)
/* 00086586 */ CALLFUNC AFL_Config_SetVolume (args: 2)  ; stack:  2 ->  0 (-2)
/* 0008658c */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Config_ResetVolumeVoice

; FUNC Config_SetSoundMuteMaster (0x8659a-0x865ae)
/* 0008659a */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 000865a0 */ SH_LOCALREF val                          ; stack:  1 ->  1 (0)
/* 000865a6 */ CALLFUNC AFL_Config_SetMute (args: 2)    ; stack:  1 -> -1 (-2)
/* 000865ac */ RETURN                                   ; stack: -1 -> -1 (0)
; ENDFUNC Config_SetSoundMuteMaster

; FUNC Config_GetSoundMuteMaster (0x865ba-0x865d0)
/* 000865ba */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 000865c0 */ CALLFUNC AFL_Config_GetMute (args: 1)    ; stack:  1 ->  1 (0)
/* 000865c6 */ RETURN                                   ; stack:  1 ->  1 (0)
/* 000865c8 */ PUSH 0                                   ; stack:  1 ->  2 (+1)
/* 000865ce */ RETURN                                   ; stack:  2 ->  2 (0)
; ENDFUNC Config_GetSoundMuteMaster

; FUNC Config_SetSoundMuteMusic (0x865dc-0x865f0)
/* 000865dc */ PUSH 1                                   ; stack:  0 ->  1 (+1)
/* 000865e2 */ SH_LOCALREF val                          ; stack:  1 ->  1 (0)
/* 000865e8 */ CALLFUNC AFL_Config_SetMute (args: 2)    ; stack:  1 -> -1 (-2)
/* 000865ee */ RETURN                                   ; stack: -1 -> -1 (0)
; ENDFUNC Config_SetSoundMuteMusic

; FUNC Config_GetSoundMuteMusic (0x865fc-0x86612)
/* 000865fc */ PUSH 1                                   ; stack:  0 ->  1 (+1)
/* 00086602 */ CALLFUNC AFL_Config_GetMute (args: 1)    ; stack:  1 ->  1 (0)
/* 00086608 */ RETURN                                   ; stack:  1 ->  1 (0)
/* 0008660a */ PUSH 0                                   ; stack:  1 ->  2 (+1)
/* 00086610 */ RETURN                                   ; stack:  2 ->  2 (0)
; ENDFUNC Config_GetSoundMuteMusic

; FUNC Config_SetSoundMuteSoundEffect (0x8661e-0x86632)
/* 0008661e */ PUSH 2                                   ; stack:  0 ->  1 (+1)
/* 00086624 */ SH_LOCALREF val                          ; stack:  1 ->  1 (0)
/* 0008662a */ CALLFUNC AFL_Config_SetMute (args: 2)    ; stack:  1 -> -1 (-2)
/* 00086630 */ RETURN                                   ; stack: -1 -> -1 (0)
; ENDFUNC Config_SetSoundMuteSoundEffect

; FUNC Config_GetSoundMuteSoundEffect (0x8663e-0x86654)
/* 0008663e */ PUSH 2                                   ; stack:  0 ->  1 (+1)
/* 00086644 */ CALLFUNC AFL_Config_GetMute (args: 1)    ; stack:  1 ->  1 (0)
/* 0008664a */ RETURN                                   ; stack:  1 ->  1 (0)
/* 0008664c */ PUSH 0                                   ; stack:  1 ->  2 (+1)
/* 00086652 */ RETURN                                   ; stack:  2 ->  2 (0)
; ENDFUNC Config_GetSoundMuteSoundEffect

; FUNC Config_SetSoundMuteVoice (0x86660-0x86674)
/* 00086660 */ PUSH 3                                   ; stack:  0 ->  1 (+1)
/* 00086666 */ SH_LOCALREF val                          ; stack:  1 ->  1 (0)
/* 0008666c */ CALLFUNC AFL_Config_SetMute (args: 2)    ; stack:  1 -> -1 (-2)
/* 00086672 */ RETURN                                   ; stack: -1 -> -1 (0)
; ENDFUNC Config_SetSoundMuteVoice

; FUNC Config_GetSoundMuteVoice (0x86680-0x86696)
/* 00086680 */ PUSH 3                                   ; stack:  0 ->  1 (+1)
/* 00086686 */ CALLFUNC AFL_Config_GetMute (args: 1)    ; stack:  1 ->  1 (0)
/* 0008668c */ RETURN                                   ; stack:  1 ->  1 (0)
/* 0008668e */ PUSH 0                                   ; stack:  1 ->  2 (+1)
/* 00086694 */ RETURN                                   ; stack:  2 ->  2 (0)
; ENDFUNC Config_GetSoundMuteVoice

; FUNC Config_SetGameSpeed (0x866a2-0x866c6)
/* 000866a2 */ SH_GLOBALREF g_globalTimer               ; stack:  0 ->  0 (0)
/* 000866a8 */ SH_LOCALREF val                          ; stack:  0 ->  0 (0)
/* 000866ae */ F_PUSH 2.000000                          ; stack:  0 ->  1 (+1)
/* 000866b4 */ F_MUL                                    ; stack:  1 ->  0 (-1)
/* 000866b6 */ F_PUSH 1.000000                          ; stack:  0 ->  1 (+1)
/* 000866bc */ F_ADD                                    ; stack:  1 ->  0 (-1)
/* 000866be */ CALLMETHOD 3577                          ; stack:  0 -> -2 (-2)
/* 000866c4 */ RETURN                                   ; stack: -2 -> -2 (0)
; ENDFUNC Config_SetGameSpeed

; FUNC Config_GetGameSpeed (0x866d2-0x866f8)
/* 000866d2 */ SH_GLOBALREF g_globalTimer               ; stack:  0 ->  0 (0)
/* 000866d8 */ CALLMETHOD 3579                          ; stack:  0 -> -2 (-2)
/* 000866de */ F_PUSH 1.000000                          ; stack: -2 -> -1 (+1)
/* 000866e4 */ F_SUB                                    ; stack: -1 -> -2 (-1)
/* 000866e6 */ F_PUSH 2.000000                          ; stack: -2 -> -1 (+1)
/* 000866ec */ F_DIV                                    ; stack: -1 -> -2 (-1)
/* 000866ee */ RETURN                                   ; stack: -2 -> -2 (0)
/* 000866f0 */ F_PUSH 0.000000                          ; stack: -2 -> -1 (+1)
/* 000866f6 */ RETURN                                   ; stack: -1 -> -1 (0)
; ENDFUNC Config_GetGameSpeed

