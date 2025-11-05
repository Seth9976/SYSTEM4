; FUNC Ｐ＿ラベル＿座標設定 (0x52cf6-0x52d14)
/* 00052cf6 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00052cfc */ SH_LOCALREF _Ｘ座標                   ; stack:  0 ->  0 (0)
/* 00052d02 */ SH_LOCALREF _Ｙ座標                   ; stack:  0 ->  0 (0)
/* 00052d08 */ CALLHLL GUIEngine.SetLabelPos (args: 3)  ; stack:  0 ->  0 (0)
/* 00052d12 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿ラベル＿座標設定

; FUNC Ｐ＿ラベル＿Ｚ座標設定 (0x52d20-0x52d38)
/* 00052d20 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00052d26 */ SH_LOCALREF _Ｚ座標                   ; stack:  0 ->  0 (0)
/* 00052d2c */ CALLHLL GUIEngine.SetLabelZ (args: 2)    ; stack:  0 ->  0 (0)
/* 00052d36 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿ラベル＿Ｚ座標設定

; FUNC Ｐ＿ラベル＿Ｘ座標取得 (0x52d44-0x52d5e)
/* 00052d44 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00052d4a */ CALLHLL GUIEngine.GetLabelX (args: 1)    ; stack:  0 ->  0 (0)
/* 00052d54 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00052d56 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00052d5c */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿ラベル＿Ｘ座標取得

; FUNC Ｐ＿ラベル＿Ｙ座標取得 (0x52d6a-0x52d84)
/* 00052d6a */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00052d70 */ CALLHLL GUIEngine.GetLabelY (args: 1)    ; stack:  0 ->  0 (0)
/* 00052d7a */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00052d7c */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00052d82 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿ラベル＿Ｙ座標取得

; FUNC Ｐ＿ラベル＿Ｚ座標取得 (0x52d90-0x52daa)
/* 00052d90 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00052d96 */ CALLHLL GUIEngine.GetLabelZ (args: 1)    ; stack:  0 ->  0 (0)
/* 00052da0 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00052da2 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00052da8 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿ラベル＿Ｚ座標取得

; FUNC Ｐ＿ラベル＿サイズ設定 (0x52db6-0x52de4)
/* 00052db6 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00052dbc */ SH_LOCALREF 幅                          ; stack:  0 ->  0 (0)
/* 00052dc2 */ CALLHLL GUIEngine.SetLabelWidth (args: 2) ; stack:  0 ->  0 (0)
/* 00052dcc */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00052dd2 */ SH_LOCALREF 高さ                       ; stack:  0 ->  0 (0)
/* 00052dd8 */ CALLHLL GUIEngine.SetLabelHeight (args: 2) ; stack:  0 ->  0 (0)
/* 00052de2 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿ラベル＿サイズ設定

; FUNC Ｐ＿ラベル＿幅取得 (0x52df0-0x52e0a)
/* 00052df0 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00052df6 */ CALLHLL GUIEngine.GetLabelWidth (args: 1) ; stack:  0 ->  0 (0)
/* 00052e00 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00052e02 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00052e08 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿ラベル＿幅取得

; FUNC Ｐ＿ラベル＿高さ取得 (0x52e16-0x52e30)
/* 00052e16 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00052e1c */ CALLHLL GUIEngine.GetLabelHeight (args: 1) ; stack:  0 ->  0 (0)
/* 00052e26 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00052e28 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00052e2e */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿ラベル＿高さ取得

; FUNC Ｐ＿ラベル＿アルファ値設定 (0x52e3c-0x52e54)
/* 00052e3c */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00052e42 */ SH_LOCALREF アルファ                 ; stack:  0 ->  0 (0)
/* 00052e48 */ CALLHLL GUIEngine.SetLabelAlpha (args: 2) ; stack:  0 ->  0 (0)
/* 00052e52 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿ラベル＿アルファ値設定

; FUNC Ｐ＿ラベル＿アルファ値取得 (0x52e60-0x52e7a)
/* 00052e60 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00052e66 */ CALLHLL GUIEngine.GetLabelAlpha (args: 1) ; stack:  0 ->  0 (0)
/* 00052e70 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00052e72 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00052e78 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿ラベル＿アルファ値取得

; FUNC Ｐ＿ラベル＿表示設定 (0x52e86-0x52e9e)
/* 00052e86 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00052e8c */ SH_LOCALREF 表示                       ; stack:  0 ->  0 (0)
/* 00052e92 */ CALLHLL GUIEngine.SetLabelShow (args: 2) ; stack:  0 ->  0 (0)
/* 00052e9c */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿ラベル＿表示設定

; FUNC Ｐ＿ラベル＿表示設定取得 (0x52eaa-0x52ec4)
/* 00052eaa */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00052eb0 */ CALLHLL GUIEngine.IsLabelShow (args: 1)  ; stack:  0 ->  0 (0)
/* 00052eba */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00052ebc */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00052ec2 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿ラベル＿表示設定取得

; FUNC Ｐ＿ラベル＿ドラッグ設定 (0x52ed0-0x52ee8)
/* 00052ed0 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00052ed6 */ SH_LOCALREF ドラッグ                 ; stack:  0 ->  0 (0)
/* 00052edc */ CALLHLL GUIEngine.SetLabelDrag (args: 2) ; stack:  0 ->  0 (0)
/* 00052ee6 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿ラベル＿ドラッグ設定

; FUNC Ｐ＿ラベル＿ドラッグ設定取得 (0x52ef4-0x52f0e)
/* 00052ef4 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00052efa */ CALLHLL GUIEngine.IsLabelDrag (args: 1)  ; stack:  0 ->  0 (0)
/* 00052f04 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00052f06 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00052f0c */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿ラベル＿ドラッグ設定取得

; FUNC Ｐ＿ラベル＿クリップ設定 (0x52f1a-0x52f32)
/* 00052f1a */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00052f20 */ SH_LOCALREF 有効                       ; stack:  0 ->  0 (0)
/* 00052f26 */ CALLHLL GUIEngine.SetLabelClip (args: 2) ; stack:  0 ->  0 (0)
/* 00052f30 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿ラベル＿クリップ設定

; FUNC Ｐ＿ラベル＿クリップ設定取得 (0x52f3e-0x52f58)
/* 00052f3e */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00052f44 */ CALLHLL GUIEngine.IsLabelClip (args: 1)  ; stack:  0 ->  0 (0)
/* 00052f4e */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00052f50 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 00052f56 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿ラベル＿クリップ設定取得

; FUNC Ｐ＿ラベル＿テキスト設定 (0x52f64-0x52f7c)
/* 00052f64 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00052f6a */ (SH_LOCAL_S_REF 1)                       ; stack:  0 ->  0 (0)
/* 00052f70 */ CALLHLL GUIEngine.SetLabelText (args: 2) ; stack:  0 ->  0 (0)
/* 00052f7a */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿ラベル＿テキスト設定

; FUNC Ｐ＿ラベル＿テキスト取得 (0x52f88-0x52fba)
/* 00052f88 */ SH_LOCALREF Text                         ; stack:  0 ->  0 (0)
/* 00052f8e */ (SH_S_ASSIGN_STR0 0)                     ; stack:  0 ->  0 (0)
/* 00052f94 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00052f9a */ SH_LOCALREF Text                         ; stack:  0 ->  0 (0)
/* 00052fa0 */ CALLHLL GUIEngine.GetLabelText (args: 2) ; stack:  0 ->  0 (0)
/* 00052faa */ (SH_LOCAL_S_REF 1)                       ; stack:  0 ->  0 (0)
/* 00052fb0 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00052fb2 */ S_PUSH 0 ("")                            ; stack:  0 ->  1 (+1)
/* 00052fb8 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿ラベル＿テキスト取得

; FUNC Ｐ＿ラベル＿フォント設定 (0x52fc6-0x53014)
/* 00052fc6 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00052fcc */ SH_LOCALREF 種類                       ; stack:  0 ->  0 (0)
/* 00052fd2 */ SH_LOCALREF サイズ                    ; stack:  0 ->  0 (0)
/* 00052fd8 */ SH_LOCALREF 赤                          ; stack:  0 ->  0 (0)
/* 00052fde */ SH_LOCALREF 緑                          ; stack:  0 ->  0 (0)
/* 00052fe4 */ SH_LOCALREF 青                          ; stack:  0 ->  0 (0)
/* 00052fea */ SH_LOCALREF 太字幅                    ; stack:  0 ->  0 (0)
/* 00052ff0 */ SH_LOCALREF 縁取り赤                 ; stack:  0 ->  0 (0)
/* 00052ff6 */ SH_LOCALREF 縁取り緑                 ; stack:  0 ->  0 (0)
/* 00052ffc */ SH_LOCALREF 縁取り青                 ; stack:  0 ->  0 (0)
/* 00053002 */ SH_LOCALREF 縁取り幅                 ; stack:  0 ->  0 (0)
/* 00053008 */ CALLHLL GUIEngine.SetLabelFontProperty (args: 11) ; stack:  0 ->  0 (0)
/* 00053012 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿ラベル＿フォント設定

; FUNC Ｐ＿ラベル＿フォント取得 (0x53020-0x5306e)
/* 00053020 */ SH_LOCALREF パーツ番号              ; stack:  0 ->  0 (0)
/* 00053026 */ (SH_LOCALREFREF 1)                       ; stack:  0 ->  0 (0)
/* 0005302c */ (SH_LOCALREFREF 3)                       ; stack:  0 ->  0 (0)
/* 00053032 */ (SH_LOCALREFREF 5)                       ; stack:  0 ->  0 (0)
/* 00053038 */ (SH_LOCALREFREF 7)                       ; stack:  0 ->  0 (0)
/* 0005303e */ (SH_LOCALREFREF 9)                       ; stack:  0 ->  0 (0)
/* 00053044 */ (SH_LOCALREFREF 11)                      ; stack:  0 ->  0 (0)
/* 0005304a */ (SH_LOCALREFREF 15)                      ; stack:  0 ->  0 (0)
/* 00053050 */ (SH_LOCALREFREF 17)                      ; stack:  0 ->  0 (0)
/* 00053056 */ (SH_LOCALREFREF 19)                      ; stack:  0 ->  0 (0)
/* 0005305c */ (SH_LOCALREFREF 13)                      ; stack:  0 ->  0 (0)
/* 00053062 */ CALLHLL GUIEngine.GetLabelFontProperty (args: 11) ; stack:  0 ->  0 (0)
/* 0005306c */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿ラベル＿フォント取得

