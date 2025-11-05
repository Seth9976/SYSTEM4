; FUNC test_Scene_Title (0x1ff782-0x1ff78a)
/* 001ff782 */ CALLFUNC openTitle (args: 0)             ; stack:  0 ->  0 (0)
/* 001ff788 */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC test_Scene_Title

; FUNC test_NetworkConnection (0x1ff796-0x1ff79e)
/* 001ff796 */ CALLFUNC openNetworkConnection (args: 0) ; stack:  0 ->  0 (0)
/* 001ff79c */ RETURN                                   ; stack:  0 ->  0 (0)
; ENDFUNC test_NetworkConnection

; FUNC test_EnquiteSendValue (0x1ff7aa-0x1ff7bc)
/* 001ff7aa */ PUSHGLOBALPAGE                           ; stack:  0 ->  1 (+1)
/* 001ff7ac */ PUSH 232                                 ; stack:  1 ->  2 (+1)
/* 001ff7b2 */ REF                                      ; stack:  2 ->  1 (-1)
/* 001ff7b4 */ CALLMETHOD 7038                          ; stack:  1 -> -1 (-2)
/* 001ff7ba */ RETURN                                   ; stack: -1 -> -1 (0)
; ENDFUNC test_EnquiteSendValue

