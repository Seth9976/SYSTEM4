; FUNC テスト／プロローグ (0x1fa338-0x1fa390)
/* 001fa338 */ MSG 32 ('プロローグやでー')      ; stack:  0 ->  0 (0)
/* 001fa33e */ CALLFUNC A (args: 0)                     ; stack:  0 ->  0 (0)
/* 001fa344 */ MSG 33 ('コーからはじまるンゴ') ; stack:  0 ->  0 (0)
/* 001fa34a */ CALLFUNC A (args: 0)                     ; stack:  0 ->  0 (0)
/* 001fa350 */ CALLFUNC ■枠消去 (args: 0)          ; stack:  0 ->  0 (0)
/* 001fa356 */ PUSHGLOBALPAGE                           ; stack:  0 ->  1 (+1)
/* 001fa358 */ PUSH 194                                 ; stack:  1 ->  2 (+1)
/* 001fa35e */ REF                                      ; stack:  2 ->  1 (-1)
/* 001fa360 */ S_PUSH 2115 ("コー")                   ; stack:  1 ->  2 (+1)
/* 001fa366 */ S_PUSH 2096 ("アイス")                ; stack:  2 ->  3 (+1)
/* 001fa36c */ PUSH 1                                   ; stack:  3 ->  4 (+1)
/* 001fa372 */ CALLMETHOD 7144                          ; stack:  4 ->  2 (-2)
/* 001fa378 */ PUSHGLOBALPAGE                           ; stack:  2 ->  3 (+1)
/* 001fa37a */ PUSH 192                                 ; stack:  3 ->  4 (+1)
/* 001fa380 */ REF                                      ; stack:  4 ->  3 (-1)
/* 001fa382 */ S_PUSH 2115 ("コー")                   ; stack:  3 ->  4 (+1)
/* 001fa388 */ CALLMETHOD 7627                          ; stack:  4 ->  2 (-2)
/* 001fa38e */ RETURN                                   ; stack:  2 ->  2 (0)
; ENDFUNC テスト／プロローグ

; FUNC テスト／マップコールバック／コー (0x1fa39c-0x1fa3bc)
/* 001fa39c */ MSG 34 ('コーやでー')               ; stack:  0 ->  0 (0)
/* 001fa3a2 */ CALLFUNC A (args: 0)                     ; stack:  0 ->  0 (0)
/* 001fa3a8 */ MSG 35 ('イベントないでー')      ; stack:  0 ->  0 (0)
/* 001fa3ae */ CALLFUNC A (args: 0)                     ; stack:  0 ->  0 (0)
/* 001fa3b4 */ CALLFUNC ■枠消去 (args: 0)          ; stack:  0 ->  0 (0)
/* 001fa3ba */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC テスト／マップコールバック／コー

; FUNC テスト／マップコールバック／アイス (0x1fa3c8-0x1fa40a)
/* 001fa3c8 */ MSG 36 ('アイスやでー')            ; stack:  0 ->  0 (0)
/* 001fa3ce */ CALLFUNC A (args: 0)                     ; stack:  0 ->  0 (0)
/* 001fa3d4 */ MSG 37 ('烈火鉱山まで移動できるようにするでー') ; stack:  0 ->  0 (0)
/* 001fa3da */ CALLFUNC A (args: 0)                     ; stack:  0 ->  0 (0)
/* 001fa3e0 */ CALLFUNC ■枠消去 (args: 0)          ; stack:  0 ->  0 (0)
/* 001fa3e6 */ PUSHGLOBALPAGE                           ; stack:  0 ->  1 (+1)
/* 001fa3e8 */ PUSH 194                                 ; stack:  1 ->  2 (+1)
/* 001fa3ee */ REF                                      ; stack:  2 ->  1 (-1)
/* 001fa3f0 */ S_PUSH 2096 ("アイス")                ; stack:  1 ->  2 (+1)
/* 001fa3f6 */ S_PUSH 2097 ("烈火鉱山")             ; stack:  2 ->  3 (+1)
/* 001fa3fc */ PUSH 1                                   ; stack:  3 ->  4 (+1)
/* 001fa402 */ CALLMETHOD 7144                          ; stack:  4 ->  2 (-2)
/* 001fa408 */ RETURN                                   ; stack:  2 ->  2 (0)
; ENDFUNC テスト／マップコールバック／アイス

; FUNC テスト／マップコールバック／烈火鉱山 (0x1fa416-0x1fa48a)
/* 001fa416 */ MSG 38 ('烈火鉱山やでー')         ; stack:  0 ->  0 (0)
/* 001fa41c */ CALLFUNC A (args: 0)                     ; stack:  0 ->  0 (0)
/* 001fa422 */ MSG 39 ('話の都合でティティ湖まで移動したことにするわ') ; stack:  0 ->  0 (0)
/* 001fa428 */ CALLFUNC A (args: 0)                     ; stack:  0 ->  0 (0)
/* 001fa42e */ CALLFUNC ■枠消去 (args: 0)          ; stack:  0 ->  0 (0)
/* 001fa434 */ PUSHGLOBALPAGE                           ; stack:  0 ->  1 (+1)
/* 001fa436 */ PUSH 194                                 ; stack:  1 ->  2 (+1)
/* 001fa43c */ REF                                      ; stack:  2 ->  1 (-1)
/* 001fa43e */ S_PUSH 2097 ("烈火鉱山")             ; stack:  1 ->  2 (+1)
/* 001fa444 */ S_PUSH 2098 ("ティティ湖")          ; stack:  2 ->  3 (+1)
/* 001fa44a */ PUSH 1                                   ; stack:  3 ->  4 (+1)
/* 001fa450 */ CALLMETHOD 7144                          ; stack:  4 ->  2 (-2)
/* 001fa456 */ PUSHGLOBALPAGE                           ; stack:  2 ->  3 (+1)
/* 001fa458 */ PUSH 192                                 ; stack:  3 ->  4 (+1)
/* 001fa45e */ REF                                      ; stack:  4 ->  3 (-1)
/* 001fa460 */ S_PUSH 2098 ("ティティ湖")          ; stack:  3 ->  4 (+1)
/* 001fa466 */ CALLMETHOD 7627                          ; stack:  4 ->  2 (-2)
/* 001fa46c */ PUSHGLOBALPAGE                           ; stack:  2 ->  3 (+1)
/* 001fa46e */ PUSH 194                                 ; stack:  3 ->  4 (+1)
/* 001fa474 */ REF                                      ; stack:  4 ->  3 (-1)
/* 001fa476 */ S_PUSH 2115 ("コー")                   ; stack:  3 ->  4 (+1)
/* 001fa47c */ S_PUSH 2096 ("アイス")                ; stack:  4 ->  5 (+1)
/* 001fa482 */ CALLMETHOD 7147                          ; stack:  5 ->  3 (-2)
/* 001fa488 */ RETURN                                   ; stack:  3 ->  3 (0)
; ENDFUNC テスト／マップコールバック／烈火鉱山

; FUNC テスト／マップコールバック／ティティ湖 (0x1fa496-0x1fa498)
/* 001fa496 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC テスト／マップコールバック／ティティ湖

; FUNC テスト／マップコールバック／リスの洞窟 (0x1fa4a4-0x1fa4a6)
/* 001fa4a4 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC テスト／マップコールバック／リスの洞窟

; FUNC テスト／マップコールバック／カンラ (0x1fa4b2-0x1fa4b4)
/* 001fa4b2 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC テスト／マップコールバック／カンラ

; FUNC テスト／マップコールバック／悪魔回廊 (0x1fa4c0-0x1fa4c2)
/* 001fa4c0 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC テスト／マップコールバック／悪魔回廊

; FUNC テスト／マップコールバック／ラジール (0x1fa4ce-0x1fa4d0)
/* 001fa4ce */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC テスト／マップコールバック／ラジール

; FUNC テスト／マップコールバック／地上灯台 (0x1fa4dc-0x1fa4de)
/* 001fa4dc */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC テスト／マップコールバック／地上灯台

; FUNC テスト／マップコールバック／カスタム (0x1fa4ea-0x1fa4ec)
/* 001fa4ea */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC テスト／マップコールバック／カスタム

; FUNC テスト／マップコールバック／迷子の森 (0x1fa4f8-0x1fa4fa)
/* 001fa4f8 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC テスト／マップコールバック／迷子の森

; FUNC テスト／マップコールバック／レッド (0x1fa506-0x1fa508)
/* 001fa506 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC テスト／マップコールバック／レッド

; FUNC テスト／マップコールバック／ハイパービル (0x1fa514-0x1fa516)
/* 001fa514 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC テスト／マップコールバック／ハイパービル

; FUNC テスト／マップコールバック／ジオ (0x1fa522-0x1fa524)
/* 001fa522 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC テスト／マップコールバック／ジオ

; FUNC テスト／マップコールバック／Ｍランド (0x1fa530-0x1fa532)
/* 001fa530 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC テスト／マップコールバック／Ｍランド

; FUNC テスト／マップコールバック／オク (0x1fa53e-0x1fa540)
/* 001fa53e */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC テスト／マップコールバック／オク

; FUNC テスト／マップコールバック／ノース (0x1fa54c-0x1fa54e)
/* 001fa54c */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC テスト／マップコールバック／ノース

; FUNC テスト／マップコールバック／サウス (0x1fa55a-0x1fa55c)
/* 001fa55a */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC テスト／マップコールバック／サウス

; FUNC テスト／マップコールバック／城下町 (0x1fa568-0x1fa56a)
/* 001fa568 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC テスト／マップコールバック／城下町

; FUNC テスト／マップコールバック／居館 (0x1fa576-0x1fa578)
/* 001fa576 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC テスト／マップコールバック／居館

; FUNC テスト／マップコールバック／西の塔 (0x1fa584-0x1fa586)
/* 001fa584 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC テスト／マップコールバック／西の塔

; FUNC テスト／マップコールバック／東の塔 (0x1fa592-0x1fa594)
/* 001fa592 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC テスト／マップコールバック／東の塔

