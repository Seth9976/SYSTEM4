; FUNC Ｐ＿フォーカス設定 (0x516f4-0x51706)
/* 000516f4 */ SH_LOCALREF PartsNumber                  ; stack:  0 ->  0 (0)
/* 000516fa */ CALLHLL GUIEngine.SetFocus (args: 1)     ; stack:  0 ->  0 (0)
/* 00051704 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC Ｐ＿フォーカス設定

; FUNC Ｐ＿フォーカス確認 (0x51712-0x5172c)
/* 00051712 */ SH_LOCALREF PartsNumber                  ; stack:  0 ->  0 (0)
/* 00051718 */ CALLHLL GUIEngine.IsFocus (args: 1)      ; stack:  0 ->  0 (0)
/* 00051722 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00051724 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 0005172a */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿フォーカス確認

; FUNC Ｐ＿高速再生設定 (0x51738-0x51764)
/* 00051738 */ SH_LOCALREF PartsNumber                  ; stack:  0 ->  0 (0)
/* 0005173e */ SH_LOCALREF 高速再生                 ; stack:  0 ->  0 (0)
/* 00051744 */ IFZ 0x51756                              ; stack:  0 -> -1 (-1)
/* 0005174a */ PUSH 3                                   ; stack: -1 ->  0 (+1)
/* 00051750 */ JUMP 0x5175c                             ; stack:  0 ->  0 (0)
/* 00051756 */ PUSH 1                                   ; stack:  0 ->  1 (+1)
/* 0005175c */ CALLFUNC PARTS_SetSpeedupRateByMessageSkip (args: 2) ; stack:  1 -> -1 (-2)
/* 00051762 */ RETURN                                   ; stack: -1 -> -1 (0)
; ENDFUNC Ｐ＿高速再生設定

; FUNC Ｐ＿高速再生設定取得 (0x51770-0x51790)
/* 00051770 */ SH_LOCALREF PartsNumber                  ; stack:  0 ->  0 (0)
/* 00051776 */ CALLFUNC PARTS_GetSpeedupRateByMessageSkip (args: 1) ; stack:  0 ->  0 (0)
/* 0005177c */ PUSH 1                                   ; stack:  0 ->  1 (+1)
/* 00051782 */ NOTE                                     ; stack:  1 ->  0 (-1)
/* 00051784 */ ITOB                                     ; stack:  0 ->  0 (0)
/* 00051786 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 00051788 */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 0005178e */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC Ｐ＿高速再生設定取得

; FUNC Ｐ＿コマンド全削除 (0x5179c-0x517c8)
/* 0005179c */ PUSHLOCALPAGE                            ; stack:  0 ->  1 (+1)
/* 0005179e */ PUSH 1                                   ; stack:  1 ->  2 (+1)
/* 000517a4 */ SH_LOCALREF PartsNumber                  ; stack:  2 ->  2 (0)
/* 000517aa */ CALLFUNC PARTS_GetDelegateIndex (args: 1) ; stack:  2 ->  2 (0)
/* 000517b0 */ ASSIGN                                   ; stack:  2 ->  0 (-2)
/* 000517b2 */ POP                                      ; stack:  0 -> -1 (-1)
/* 000517b4 */ SH_GLOBALREF g_PartsMessageManager       ; stack: -1 -> -1 (0)
/* 000517ba */ SH_LOCALREF DelegateIndex                ; stack: -1 -> -1 (0)
/* 000517c0 */ CALLMETHOD 186                           ; stack: -1 -> -3 (-2)
/* 000517c6 */ RETURN                                   ; stack: -3 -> -3 (0)
; ENDFUNC Ｐ＿コマンド全削除

; FUNC Ｐ＿コマンド登録＿マウスエンター (0x517d4-0x517ee)
/* 000517d4 */ SH_GLOBALREF g_PartsMessageManager       ; stack:  0 ->  0 (0)
/* 000517da */ SH_LOCALREF PartsNumber                  ; stack:  0 ->  0 (0)
/* 000517e0 */ SH_LOCALREF FunctionObject               ; stack:  0 ->  0 (0)
/* 000517e6 */ CALLMETHOD 202                           ; stack:  0 -> -2 (-2)
/* 000517ec */ RETURN                                   ; stack: -2 -> -2 (0)
; ENDFUNC Ｐ＿コマンド登録＿マウスエンター

; FUNC Ｐ＿コマンド削除＿マウスエンター (0x517fa-0x51814)
/* 000517fa */ SH_GLOBALREF g_PartsMessageManager       ; stack:  0 ->  0 (0)
/* 00051800 */ SH_LOCALREF PartsNumber                  ; stack:  0 ->  0 (0)
/* 00051806 */ SH_LOCALREF FunctionObject               ; stack:  0 ->  0 (0)
/* 0005180c */ CALLMETHOD 203                           ; stack:  0 -> -2 (-2)
/* 00051812 */ RETURN                                   ; stack: -2 -> -2 (0)
; ENDFUNC Ｐ＿コマンド削除＿マウスエンター

; FUNC Ｐ＿コマンド登録＿マウス移動 (0x51820-0x5183a)
/* 00051820 */ SH_GLOBALREF g_PartsMessageManager       ; stack:  0 ->  0 (0)
/* 00051826 */ SH_LOCALREF PartsNumber                  ; stack:  0 ->  0 (0)
/* 0005182c */ SH_LOCALREF FunctionObject               ; stack:  0 ->  0 (0)
/* 00051832 */ CALLMETHOD 204                           ; stack:  0 -> -2 (-2)
/* 00051838 */ RETURN                                   ; stack: -2 -> -2 (0)
; ENDFUNC Ｐ＿コマンド登録＿マウス移動

; FUNC Ｐ＿コマンド削除＿マウス移動 (0x51846-0x51860)
/* 00051846 */ SH_GLOBALREF g_PartsMessageManager       ; stack:  0 ->  0 (0)
/* 0005184c */ SH_LOCALREF PartsNumber                  ; stack:  0 ->  0 (0)
/* 00051852 */ SH_LOCALREF FunctionObject               ; stack:  0 ->  0 (0)
/* 00051858 */ CALLMETHOD 205                           ; stack:  0 -> -2 (-2)
/* 0005185e */ RETURN                                   ; stack: -2 -> -2 (0)
; ENDFUNC Ｐ＿コマンド削除＿マウス移動

; FUNC Ｐ＿コマンド登録＿マウスリーブ (0x5186c-0x51886)
/* 0005186c */ SH_GLOBALREF g_PartsMessageManager       ; stack:  0 ->  0 (0)
/* 00051872 */ SH_LOCALREF PartsNumber                  ; stack:  0 ->  0 (0)
/* 00051878 */ SH_LOCALREF FunctionObject               ; stack:  0 ->  0 (0)
/* 0005187e */ CALLMETHOD 206                           ; stack:  0 -> -2 (-2)
/* 00051884 */ RETURN                                   ; stack: -2 -> -2 (0)
; ENDFUNC Ｐ＿コマンド登録＿マウスリーブ

; FUNC Ｐ＿コマンド削除＿マウスリーブ (0x51892-0x518ac)
/* 00051892 */ SH_GLOBALREF g_PartsMessageManager       ; stack:  0 ->  0 (0)
/* 00051898 */ SH_LOCALREF PartsNumber                  ; stack:  0 ->  0 (0)
/* 0005189e */ SH_LOCALREF FunctionObject               ; stack:  0 ->  0 (0)
/* 000518a4 */ CALLMETHOD 207                           ; stack:  0 -> -2 (-2)
/* 000518aa */ RETURN                                   ; stack: -2 -> -2 (0)
; ENDFUNC Ｐ＿コマンド削除＿マウスリーブ

; FUNC Ｐ＿コマンド登録＿マウスホイール回転 (0x518b8-0x518d2)
/* 000518b8 */ SH_GLOBALREF g_PartsMessageManager       ; stack:  0 ->  0 (0)
/* 000518be */ SH_LOCALREF PartsNumber                  ; stack:  0 ->  0 (0)
/* 000518c4 */ SH_LOCALREF FunctionObject               ; stack:  0 ->  0 (0)
/* 000518ca */ CALLMETHOD 208                           ; stack:  0 -> -2 (-2)
/* 000518d0 */ RETURN                                   ; stack: -2 -> -2 (0)
; ENDFUNC Ｐ＿コマンド登録＿マウスホイール回転

; FUNC Ｐ＿コマンド削除＿マウスホイール回転 (0x518de-0x518f8)
/* 000518de */ SH_GLOBALREF g_PartsMessageManager       ; stack:  0 ->  0 (0)
/* 000518e4 */ SH_LOCALREF PartsNumber                  ; stack:  0 ->  0 (0)
/* 000518ea */ SH_LOCALREF FunctionObject               ; stack:  0 ->  0 (0)
/* 000518f0 */ CALLMETHOD 209                           ; stack:  0 -> -2 (-2)
/* 000518f6 */ RETURN                                   ; stack: -2 -> -2 (0)
; ENDFUNC Ｐ＿コマンド削除＿マウスホイール回転

; FUNC Ｐ＿コマンド登録＿マウスクリック (0x51904-0x5191e)
/* 00051904 */ SH_GLOBALREF g_PartsMessageManager       ; stack:  0 ->  0 (0)
/* 0005190a */ SH_LOCALREF PartsNumber                  ; stack:  0 ->  0 (0)
/* 00051910 */ SH_LOCALREF FunctionObject               ; stack:  0 ->  0 (0)
/* 00051916 */ CALLMETHOD 210                           ; stack:  0 -> -2 (-2)
/* 0005191c */ RETURN                                   ; stack: -2 -> -2 (0)
; ENDFUNC Ｐ＿コマンド登録＿マウスクリック

; FUNC Ｐ＿コマンド削除＿マウスクリック (0x5192a-0x51944)
/* 0005192a */ SH_GLOBALREF g_PartsMessageManager       ; stack:  0 ->  0 (0)
/* 00051930 */ SH_LOCALREF PartsNumber                  ; stack:  0 ->  0 (0)
/* 00051936 */ SH_LOCALREF FunctionObject               ; stack:  0 ->  0 (0)
/* 0005193c */ CALLMETHOD 211                           ; stack:  0 -> -2 (-2)
/* 00051942 */ RETURN                                   ; stack: -2 -> -2 (0)
; ENDFUNC Ｐ＿コマンド削除＿マウスクリック

; FUNC Ｐ＿コマンド登録＿マウスオン (0x51950-0x5196a)
/* 00051950 */ SH_GLOBALREF g_PartsMessageManager       ; stack:  0 ->  0 (0)
/* 00051956 */ SH_LOCALREF PartsNumber                  ; stack:  0 ->  0 (0)
/* 0005195c */ SH_LOCALREF FunctionObject               ; stack:  0 ->  0 (0)
/* 00051962 */ CALLMETHOD 212                           ; stack:  0 -> -2 (-2)
/* 00051968 */ RETURN                                   ; stack: -2 -> -2 (0)
; ENDFUNC Ｐ＿コマンド登録＿マウスオン

; FUNC Ｐ＿コマンド削除＿マウスオン (0x51976-0x51990)
/* 00051976 */ SH_GLOBALREF g_PartsMessageManager       ; stack:  0 ->  0 (0)
/* 0005197c */ SH_LOCALREF PartsNumber                  ; stack:  0 ->  0 (0)
/* 00051982 */ SH_LOCALREF FunctionObject               ; stack:  0 ->  0 (0)
/* 00051988 */ CALLMETHOD 213                           ; stack:  0 -> -2 (-2)
/* 0005198e */ RETURN                                   ; stack: -2 -> -2 (0)
; ENDFUNC Ｐ＿コマンド削除＿マウスオン

; FUNC Ｐ＿コマンド登録＿キー初回ダウン (0x5199c-0x519b6)
/* 0005199c */ SH_GLOBALREF g_PartsMessageManager       ; stack:  0 ->  0 (0)
/* 000519a2 */ SH_LOCALREF PartsNumber                  ; stack:  0 ->  0 (0)
/* 000519a8 */ SH_LOCALREF FunctionObject               ; stack:  0 ->  0 (0)
/* 000519ae */ CALLMETHOD 222                           ; stack:  0 -> -2 (-2)
/* 000519b4 */ RETURN                                   ; stack: -2 -> -2 (0)
; ENDFUNC Ｐ＿コマンド登録＿キー初回ダウン

; FUNC Ｐ＿コマンド削除＿キー初回ダウン (0x519c2-0x519dc)
/* 000519c2 */ SH_GLOBALREF g_PartsMessageManager       ; stack:  0 ->  0 (0)
/* 000519c8 */ SH_LOCALREF PartsNumber                  ; stack:  0 ->  0 (0)
/* 000519ce */ SH_LOCALREF FunctionObject               ; stack:  0 ->  0 (0)
/* 000519d4 */ CALLMETHOD 223                           ; stack:  0 -> -2 (-2)
/* 000519da */ RETURN                                   ; stack: -2 -> -2 (0)
; ENDFUNC Ｐ＿コマンド削除＿キー初回ダウン

; FUNC Ｐ＿コマンド登録＿キーダウン (0x519e8-0x51a02)
/* 000519e8 */ SH_GLOBALREF g_PartsMessageManager       ; stack:  0 ->  0 (0)
/* 000519ee */ SH_LOCALREF PartsNumber                  ; stack:  0 ->  0 (0)
/* 000519f4 */ SH_LOCALREF FunctionObject               ; stack:  0 ->  0 (0)
/* 000519fa */ CALLMETHOD 224                           ; stack:  0 -> -2 (-2)
/* 00051a00 */ RETURN                                   ; stack: -2 -> -2 (0)
; ENDFUNC Ｐ＿コマンド登録＿キーダウン

; FUNC Ｐ＿コマンド削除＿キーダウン (0x51a0e-0x51a28)
/* 00051a0e */ SH_GLOBALREF g_PartsMessageManager       ; stack:  0 ->  0 (0)
/* 00051a14 */ SH_LOCALREF PartsNumber                  ; stack:  0 ->  0 (0)
/* 00051a1a */ SH_LOCALREF FunctionObject               ; stack:  0 ->  0 (0)
/* 00051a20 */ CALLMETHOD 225                           ; stack:  0 -> -2 (-2)
/* 00051a26 */ RETURN                                   ; stack: -2 -> -2 (0)
; ENDFUNC Ｐ＿コマンド削除＿キーダウン

; FUNC Ｐ＿コマンド登録＿キープレス (0x51a34-0x51a4e)
/* 00051a34 */ SH_GLOBALREF g_PartsMessageManager       ; stack:  0 ->  0 (0)
/* 00051a3a */ SH_LOCALREF PartsNumber                  ; stack:  0 ->  0 (0)
/* 00051a40 */ SH_LOCALREF FunctionObject               ; stack:  0 ->  0 (0)
/* 00051a46 */ CALLMETHOD 226                           ; stack:  0 -> -2 (-2)
/* 00051a4c */ RETURN                                   ; stack: -2 -> -2 (0)
; ENDFUNC Ｐ＿コマンド登録＿キープレス

; FUNC Ｐ＿コマンド削除＿キープレス (0x51a5a-0x51a74)
/* 00051a5a */ SH_GLOBALREF g_PartsMessageManager       ; stack:  0 ->  0 (0)
/* 00051a60 */ SH_LOCALREF PartsNumber                  ; stack:  0 ->  0 (0)
/* 00051a66 */ SH_LOCALREF FunctionObject               ; stack:  0 ->  0 (0)
/* 00051a6c */ CALLMETHOD 227                           ; stack:  0 -> -2 (-2)
/* 00051a72 */ RETURN                                   ; stack: -2 -> -2 (0)
; ENDFUNC Ｐ＿コマンド削除＿キープレス

; FUNC Ｐ＿コマンド登録＿キーアップ (0x51a80-0x51a9a)
/* 00051a80 */ SH_GLOBALREF g_PartsMessageManager       ; stack:  0 ->  0 (0)
/* 00051a86 */ SH_LOCALREF PartsNumber                  ; stack:  0 ->  0 (0)
/* 00051a8c */ SH_LOCALREF FunctionObject               ; stack:  0 ->  0 (0)
/* 00051a92 */ CALLMETHOD 228                           ; stack:  0 -> -2 (-2)
/* 00051a98 */ RETURN                                   ; stack: -2 -> -2 (0)
; ENDFUNC Ｐ＿コマンド登録＿キーアップ

; FUNC Ｐ＿コマンド削除＿キーアップ (0x51aa6-0x51ac0)
/* 00051aa6 */ SH_GLOBALREF g_PartsMessageManager       ; stack:  0 ->  0 (0)
/* 00051aac */ SH_LOCALREF PartsNumber                  ; stack:  0 ->  0 (0)
/* 00051ab2 */ SH_LOCALREF FunctionObject               ; stack:  0 ->  0 (0)
/* 00051ab8 */ CALLMETHOD 229                           ; stack:  0 -> -2 (-2)
/* 00051abe */ RETURN                                   ; stack: -2 -> -2 (0)
; ENDFUNC Ｐ＿コマンド削除＿キーアップ

; FUNC Ｐ＿コマンド登録＿ドラッグ開始 (0x51acc-0x51ae6)
/* 00051acc */ SH_GLOBALREF g_PartsMessageManager       ; stack:  0 ->  0 (0)
/* 00051ad2 */ SH_LOCALREF PartsNumber                  ; stack:  0 ->  0 (0)
/* 00051ad8 */ SH_LOCALREF FunctionObject               ; stack:  0 ->  0 (0)
/* 00051ade */ CALLMETHOD 236                           ; stack:  0 -> -2 (-2)
/* 00051ae4 */ RETURN                                   ; stack: -2 -> -2 (0)
; ENDFUNC Ｐ＿コマンド登録＿ドラッグ開始

; FUNC Ｐ＿コマンド削除＿ドラッグ開始 (0x51af2-0x51b0c)
/* 00051af2 */ SH_GLOBALREF g_PartsMessageManager       ; stack:  0 ->  0 (0)
/* 00051af8 */ SH_LOCALREF PartsNumber                  ; stack:  0 ->  0 (0)
/* 00051afe */ SH_LOCALREF FunctionObject               ; stack:  0 ->  0 (0)
/* 00051b04 */ CALLMETHOD 237                           ; stack:  0 -> -2 (-2)
/* 00051b0a */ RETURN                                   ; stack: -2 -> -2 (0)
; ENDFUNC Ｐ＿コマンド削除＿ドラッグ開始

; FUNC Ｐ＿コマンド登録＿ドラッグ中 (0x51b18-0x51b32)
/* 00051b18 */ SH_GLOBALREF g_PartsMessageManager       ; stack:  0 ->  0 (0)
/* 00051b1e */ SH_LOCALREF PartsNumber                  ; stack:  0 ->  0 (0)
/* 00051b24 */ SH_LOCALREF FunctionObject               ; stack:  0 ->  0 (0)
/* 00051b2a */ CALLMETHOD 238                           ; stack:  0 -> -2 (-2)
/* 00051b30 */ RETURN                                   ; stack: -2 -> -2 (0)
; ENDFUNC Ｐ＿コマンド登録＿ドラッグ中

; FUNC Ｐ＿コマンド削除＿ドラッグ中 (0x51b3e-0x51b58)
/* 00051b3e */ SH_GLOBALREF g_PartsMessageManager       ; stack:  0 ->  0 (0)
/* 00051b44 */ SH_LOCALREF PartsNumber                  ; stack:  0 ->  0 (0)
/* 00051b4a */ SH_LOCALREF FunctionObject               ; stack:  0 ->  0 (0)
/* 00051b50 */ CALLMETHOD 239                           ; stack:  0 -> -2 (-2)
/* 00051b56 */ RETURN                                   ; stack: -2 -> -2 (0)
; ENDFUNC Ｐ＿コマンド削除＿ドラッグ中

; FUNC Ｐ＿コマンド登録＿ドラッグ終了 (0x51b64-0x51b7e)
/* 00051b64 */ SH_GLOBALREF g_PartsMessageManager       ; stack:  0 ->  0 (0)
/* 00051b6a */ SH_LOCALREF PartsNumber                  ; stack:  0 ->  0 (0)
/* 00051b70 */ SH_LOCALREF FunctionObject               ; stack:  0 ->  0 (0)
/* 00051b76 */ CALLMETHOD 240                           ; stack:  0 -> -2 (-2)
/* 00051b7c */ RETURN                                   ; stack: -2 -> -2 (0)
; ENDFUNC Ｐ＿コマンド登録＿ドラッグ終了

; FUNC Ｐ＿コマンド削除＿ドラッグ終了 (0x51b8a-0x51ba4)
/* 00051b8a */ SH_GLOBALREF g_PartsMessageManager       ; stack:  0 ->  0 (0)
/* 00051b90 */ SH_LOCALREF PartsNumber                  ; stack:  0 ->  0 (0)
/* 00051b96 */ SH_LOCALREF FunctionObject               ; stack:  0 ->  0 (0)
/* 00051b9c */ CALLMETHOD 241                           ; stack:  0 -> -2 (-2)
/* 00051ba2 */ RETURN                                   ; stack: -2 -> -2 (0)
; ENDFUNC Ｐ＿コマンド削除＿ドラッグ終了

; FUNC Ｐ＿コマンド登録＿ドロップエンター (0x51bb0-0x51bca)
/* 00051bb0 */ SH_GLOBALREF g_PartsMessageManager       ; stack:  0 ->  0 (0)
/* 00051bb6 */ SH_LOCALREF PartsNumber                  ; stack:  0 ->  0 (0)
/* 00051bbc */ SH_LOCALREF FunctionObject               ; stack:  0 ->  0 (0)
/* 00051bc2 */ CALLMETHOD 248                           ; stack:  0 -> -2 (-2)
/* 00051bc8 */ RETURN                                   ; stack: -2 -> -2 (0)
; ENDFUNC Ｐ＿コマンド登録＿ドロップエンター

; FUNC Ｐ＿コマンド削除＿ドロップエンター (0x51bd6-0x51bf0)
/* 00051bd6 */ SH_GLOBALREF g_PartsMessageManager       ; stack:  0 ->  0 (0)
/* 00051bdc */ SH_LOCALREF PartsNumber                  ; stack:  0 ->  0 (0)
/* 00051be2 */ SH_LOCALREF FunctionObject               ; stack:  0 ->  0 (0)
/* 00051be8 */ CALLMETHOD 249                           ; stack:  0 -> -2 (-2)
/* 00051bee */ RETURN                                   ; stack: -2 -> -2 (0)
; ENDFUNC Ｐ＿コマンド削除＿ドロップエンター

; FUNC Ｐ＿コマンド登録＿ドロップ (0x51bfc-0x51c16)
/* 00051bfc */ SH_GLOBALREF g_PartsMessageManager       ; stack:  0 ->  0 (0)
/* 00051c02 */ SH_LOCALREF PartsNumber                  ; stack:  0 ->  0 (0)
/* 00051c08 */ SH_LOCALREF FunctionObject               ; stack:  0 ->  0 (0)
/* 00051c0e */ CALLMETHOD 250                           ; stack:  0 -> -2 (-2)
/* 00051c14 */ RETURN                                   ; stack: -2 -> -2 (0)
; ENDFUNC Ｐ＿コマンド登録＿ドロップ

; FUNC Ｐ＿コマンド削除＿ドロップ (0x51c22-0x51c3c)
/* 00051c22 */ SH_GLOBALREF g_PartsMessageManager       ; stack:  0 ->  0 (0)
/* 00051c28 */ SH_LOCALREF PartsNumber                  ; stack:  0 ->  0 (0)
/* 00051c2e */ SH_LOCALREF FunctionObject               ; stack:  0 ->  0 (0)
/* 00051c34 */ CALLMETHOD 251                           ; stack:  0 -> -2 (-2)
/* 00051c3a */ RETURN                                   ; stack: -2 -> -2 (0)
; ENDFUNC Ｐ＿コマンド削除＿ドロップ

; FUNC Ｐ＿コマンド登録＿ドロップリーブ (0x51c48-0x51c62)
/* 00051c48 */ SH_GLOBALREF g_PartsMessageManager       ; stack:  0 ->  0 (0)
/* 00051c4e */ SH_LOCALREF PartsNumber                  ; stack:  0 ->  0 (0)
/* 00051c54 */ SH_LOCALREF FunctionObject               ; stack:  0 ->  0 (0)
/* 00051c5a */ CALLMETHOD 252                           ; stack:  0 -> -2 (-2)
/* 00051c60 */ RETURN                                   ; stack: -2 -> -2 (0)
; ENDFUNC Ｐ＿コマンド登録＿ドロップリーブ

; FUNC Ｐ＿コマンド削除＿ドロップリーブ (0x51c6e-0x51c88)
/* 00051c6e */ SH_GLOBALREF g_PartsMessageManager       ; stack:  0 ->  0 (0)
/* 00051c74 */ SH_LOCALREF PartsNumber                  ; stack:  0 ->  0 (0)
/* 00051c7a */ SH_LOCALREF FunctionObject               ; stack:  0 ->  0 (0)
/* 00051c80 */ CALLMETHOD 253                           ; stack:  0 -> -2 (-2)
/* 00051c86 */ RETURN                                   ; stack: -2 -> -2 (0)
; ENDFUNC Ｐ＿コマンド削除＿ドロップリーブ

; FUNC Ｐ＿コマンド登録＿フォーカス取得 (0x51c94-0x51cae)
/* 00051c94 */ SH_GLOBALREF g_PartsMessageManager       ; stack:  0 ->  0 (0)
/* 00051c9a */ SH_LOCALREF PartsNumber                  ; stack:  0 ->  0 (0)
/* 00051ca0 */ SH_LOCALREF FunctionObject               ; stack:  0 ->  0 (0)
/* 00051ca6 */ CALLMETHOD 258                           ; stack:  0 -> -2 (-2)
/* 00051cac */ RETURN                                   ; stack: -2 -> -2 (0)
; ENDFUNC Ｐ＿コマンド登録＿フォーカス取得

; FUNC Ｐ＿コマンド削除＿フォーカス取得 (0x51cba-0x51cd4)
/* 00051cba */ SH_GLOBALREF g_PartsMessageManager       ; stack:  0 ->  0 (0)
/* 00051cc0 */ SH_LOCALREF PartsNumber                  ; stack:  0 ->  0 (0)
/* 00051cc6 */ SH_LOCALREF FunctionObject               ; stack:  0 ->  0 (0)
/* 00051ccc */ CALLMETHOD 259                           ; stack:  0 -> -2 (-2)
/* 00051cd2 */ RETURN                                   ; stack: -2 -> -2 (0)
; ENDFUNC Ｐ＿コマンド削除＿フォーカス取得

; FUNC Ｐ＿コマンド登録＿フォーカス紛失 (0x51ce0-0x51cfa)
/* 00051ce0 */ SH_GLOBALREF g_PartsMessageManager       ; stack:  0 ->  0 (0)
/* 00051ce6 */ SH_LOCALREF PartsNumber                  ; stack:  0 ->  0 (0)
/* 00051cec */ SH_LOCALREF FunctionObject               ; stack:  0 ->  0 (0)
/* 00051cf2 */ CALLMETHOD 260                           ; stack:  0 -> -2 (-2)
/* 00051cf8 */ RETURN                                   ; stack: -2 -> -2 (0)
; ENDFUNC Ｐ＿コマンド登録＿フォーカス紛失

; FUNC Ｐ＿コマンド削除＿フォーカス紛失 (0x51d06-0x51d20)
/* 00051d06 */ SH_GLOBALREF g_PartsMessageManager       ; stack:  0 ->  0 (0)
/* 00051d0c */ SH_LOCALREF PartsNumber                  ; stack:  0 ->  0 (0)
/* 00051d12 */ SH_LOCALREF FunctionObject               ; stack:  0 ->  0 (0)
/* 00051d18 */ CALLMETHOD 261                           ; stack:  0 -> -2 (-2)
/* 00051d1e */ RETURN                                   ; stack: -2 -> -2 (0)
; ENDFUNC Ｐ＿コマンド削除＿フォーカス紛失

; FUNC Ｐ＿コマンド登録＿スクロール (0x51d2c-0x51d46)
/* 00051d2c */ SH_GLOBALREF g_PartsMessageManager       ; stack:  0 ->  0 (0)
/* 00051d32 */ SH_LOCALREF PartsNumber                  ; stack:  0 ->  0 (0)
/* 00051d38 */ SH_LOCALREF FunctionObject               ; stack:  0 ->  0 (0)
/* 00051d3e */ CALLMETHOD 264                           ; stack:  0 -> -2 (-2)
/* 00051d44 */ RETURN                                   ; stack: -2 -> -2 (0)
; ENDFUNC Ｐ＿コマンド登録＿スクロール

; FUNC Ｐ＿コマンド削除＿スクロール (0x51d52-0x51d6c)
/* 00051d52 */ SH_GLOBALREF g_PartsMessageManager       ; stack:  0 ->  0 (0)
/* 00051d58 */ SH_LOCALREF PartsNumber                  ; stack:  0 ->  0 (0)
/* 00051d5e */ SH_LOCALREF FunctionObject               ; stack:  0 ->  0 (0)
/* 00051d64 */ CALLMETHOD 265                           ; stack:  0 -> -2 (-2)
/* 00051d6a */ RETURN                                   ; stack: -2 -> -2 (0)
; ENDFUNC Ｐ＿コマンド削除＿スクロール

; FUNC Ｐ＿コマンド登録＿生成 (0x51d78-0x51d92)
/* 00051d78 */ SH_GLOBALREF g_PartsMessageManager       ; stack:  0 ->  0 (0)
/* 00051d7e */ SH_LOCALREF PartsNumber                  ; stack:  0 ->  0 (0)
/* 00051d84 */ SH_LOCALREF FunctionObject               ; stack:  0 ->  0 (0)
/* 00051d8a */ CALLMETHOD 268                           ; stack:  0 -> -2 (-2)
/* 00051d90 */ RETURN                                   ; stack: -2 -> -2 (0)
; ENDFUNC Ｐ＿コマンド登録＿生成

; FUNC Ｐ＿コマンド削除＿生成 (0x51d9e-0x51db8)
/* 00051d9e */ SH_GLOBALREF g_PartsMessageManager       ; stack:  0 ->  0 (0)
/* 00051da4 */ SH_LOCALREF PartsNumber                  ; stack:  0 ->  0 (0)
/* 00051daa */ SH_LOCALREF FunctionObject               ; stack:  0 ->  0 (0)
/* 00051db0 */ CALLMETHOD 269                           ; stack:  0 -> -2 (-2)
/* 00051db6 */ RETURN                                   ; stack: -2 -> -2 (0)
; ENDFUNC Ｐ＿コマンド削除＿生成

; FUNC Ｐ＿コマンド登録＿選択 (0x51dc4-0x51dde)
/* 00051dc4 */ SH_GLOBALREF g_PartsMessageManager       ; stack:  0 ->  0 (0)
/* 00051dca */ SH_LOCALREF PartsNumber                  ; stack:  0 ->  0 (0)
/* 00051dd0 */ SH_LOCALREF FunctionObject               ; stack:  0 ->  0 (0)
/* 00051dd6 */ CALLMETHOD 276                           ; stack:  0 -> -2 (-2)
/* 00051ddc */ RETURN                                   ; stack: -2 -> -2 (0)
; ENDFUNC Ｐ＿コマンド登録＿選択

; FUNC Ｐ＿コマンド削除＿選択 (0x51dea-0x51e04)
/* 00051dea */ SH_GLOBALREF g_PartsMessageManager       ; stack:  0 ->  0 (0)
/* 00051df0 */ SH_LOCALREF PartsNumber                  ; stack:  0 ->  0 (0)
/* 00051df6 */ SH_LOCALREF FunctionObject               ; stack:  0 ->  0 (0)
/* 00051dfc */ CALLMETHOD 277                           ; stack:  0 -> -2 (-2)
/* 00051e02 */ RETURN                                   ; stack: -2 -> -2 (0)
; ENDFUNC Ｐ＿コマンド削除＿選択

; FUNC Ｐ＿コマンド登録＿変更 (0x51e10-0x51e2a)
/* 00051e10 */ SH_GLOBALREF g_PartsMessageManager       ; stack:  0 ->  0 (0)
/* 00051e16 */ SH_LOCALREF PartsNumber                  ; stack:  0 ->  0 (0)
/* 00051e1c */ SH_LOCALREF FunctionObject               ; stack:  0 ->  0 (0)
/* 00051e22 */ CALLMETHOD 280                           ; stack:  0 -> -2 (-2)
/* 00051e28 */ RETURN                                   ; stack: -2 -> -2 (0)
; ENDFUNC Ｐ＿コマンド登録＿変更

; FUNC Ｐ＿コマンド削除＿変更 (0x51e36-0x51e50)
/* 00051e36 */ SH_GLOBALREF g_PartsMessageManager       ; stack:  0 ->  0 (0)
/* 00051e3c */ SH_LOCALREF PartsNumber                  ; stack:  0 ->  0 (0)
/* 00051e42 */ SH_LOCALREF FunctionObject               ; stack:  0 ->  0 (0)
/* 00051e48 */ CALLMETHOD 281                           ; stack:  0 -> -2 (-2)
/* 00051e4e */ RETURN                                   ; stack: -2 -> -2 (0)
; ENDFUNC Ｐ＿コマンド削除＿変更

