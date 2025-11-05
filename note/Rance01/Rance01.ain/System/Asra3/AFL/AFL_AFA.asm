; FUNC AFL_AFA_IsExist (0x5ad08-0x5ad22)
/* 0005ad08 */ (SH_LOCAL_S_REF 0)                       ; stack:  0 ->  0 (0)
/* 0005ad0e */ CALLHLL AFAFactory.IsExistArchive (args: 1) ; stack:  0 ->  0 (0)
/* 0005ad18 */ RETURN                                   ; stack:  0 ->  0 (0)
/* 0005ad1a */ PUSH 0                                   ; stack:  0 ->  1 (+1)
/* 0005ad20 */ RETURN                                   ; stack:  1 ->  1 (0)
; ENDFUNC AFL_AFA_IsExist

; FUNC AFL_AFA_CG_Add (0x5ad2e-0x5ad4e)
/* 0005ad2e */ PUSH 2                                   ; stack:  0 ->  1 (+1)
/* 0005ad34 */ (SH_LOCAL_S_REF 0)                       ; stack:  1 ->  1 (0)
/* 0005ad3a */ CALLHLL AFAFactory.LoadArchive (args: 2) ; stack:  1 ->  1 (0)
/* 0005ad44 */ RETURN                                   ; stack:  1 ->  1 (0)
/* 0005ad46 */ PUSH 0                                   ; stack:  1 ->  2 (+1)
/* 0005ad4c */ RETURN                                   ; stack:  2 ->  2 (0)
; ENDFUNC AFL_AFA_CG_Add

; FUNC AFL_AFA_Flat_Add (0x5ad5a-0x5ad7a)
/* 0005ad5a */ PUSH 3                                   ; stack:  0 ->  1 (+1)
/* 0005ad60 */ (SH_LOCAL_S_REF 0)                       ; stack:  1 ->  1 (0)
/* 0005ad66 */ CALLHLL AFAFactory.LoadArchive (args: 2) ; stack:  1 ->  1 (0)
/* 0005ad70 */ RETURN                                   ; stack:  1 ->  1 (0)
/* 0005ad72 */ PUSH 0                                   ; stack:  1 ->  2 (+1)
/* 0005ad78 */ RETURN                                   ; stack:  2 ->  2 (0)
; ENDFUNC AFL_AFA_Flat_Add

; FUNC AFL_AFA_CG_Numof (0x5ad86-0x5ada0)
/* 0005ad86 */ PUSH 2                                   ; stack:  0 ->  1 (+1)
/* 0005ad8c */ CALLHLL AFAFactory.GetCountOfData (args: 1) ; stack:  1 ->  1 (0)
/* 0005ad96 */ RETURN                                   ; stack:  1 ->  1 (0)
/* 0005ad98 */ PUSH 0                                   ; stack:  1 ->  2 (+1)
/* 0005ad9e */ RETURN                                   ; stack:  2 ->  2 (0)
; ENDFUNC AFL_AFA_CG_Numof

; FUNC AFL_AFA_Flat_Numof (0x5adac-0x5adc6)
/* 0005adac */ PUSH 3                                   ; stack:  0 ->  1 (+1)
/* 0005adb2 */ CALLHLL AFAFactory.GetCountOfData (args: 1) ; stack:  1 ->  1 (0)
/* 0005adbc */ RETURN                                   ; stack:  1 ->  1 (0)
/* 0005adbe */ PUSH 0                                   ; stack:  1 ->  2 (+1)
/* 0005adc4 */ RETURN                                   ; stack:  2 ->  2 (0)
; ENDFUNC AFL_AFA_Flat_Numof

; FUNC AFL_AFA_CG_GetTitle (0x5add2-0x5ae0a)
/* 0005add2 */ SH_LOCALREF Title                        ; stack:  0 ->  0 (0)
/* 0005add8 */ (SH_S_ASSIGN_STR0 0)                     ; stack:  0 ->  0 (0)
/* 0005adde */ PUSH 2                                   ; stack:  0 ->  1 (+1)
/* 0005ade4 */ SH_LOCALREF Index                        ; stack:  1 ->  1 (0)
/* 0005adea */ SH_LOCALREF Title                        ; stack:  1 ->  1 (0)
/* 0005adf0 */ CALLHLL AFAFactory.GetTitleByIndex (args: 3) ; stack:  1 ->  1 (0)
/* 0005adfa */ (SH_LOCAL_S_REF 1)                       ; stack:  1 ->  1 (0)
/* 0005ae00 */ RETURN                                   ; stack:  1 ->  1 (0)
/* 0005ae02 */ S_PUSH 0 ("")                            ; stack:  1 ->  2 (+1)
/* 0005ae08 */ RETURN                                   ; stack:  2 ->  2 (0)
; ENDFUNC AFL_AFA_CG_GetTitle

; FUNC AFL_AFA_Flat_GetTitle (0x5ae16-0x5ae4e)
/* 0005ae16 */ SH_LOCALREF Title                        ; stack:  0 ->  0 (0)
/* 0005ae1c */ (SH_S_ASSIGN_STR0 0)                     ; stack:  0 ->  0 (0)
/* 0005ae22 */ PUSH 3                                   ; stack:  0 ->  1 (+1)
/* 0005ae28 */ SH_LOCALREF Index                        ; stack:  1 ->  1 (0)
/* 0005ae2e */ SH_LOCALREF Title                        ; stack:  1 ->  1 (0)
/* 0005ae34 */ CALLHLL AFAFactory.GetTitleByIndex (args: 3) ; stack:  1 ->  1 (0)
/* 0005ae3e */ (SH_LOCAL_S_REF 1)                       ; stack:  1 ->  1 (0)
/* 0005ae44 */ RETURN                                   ; stack:  1 ->  1 (0)
/* 0005ae46 */ S_PUSH 0 ("")                            ; stack:  1 ->  2 (+1)
/* 0005ae4c */ RETURN                                   ; stack:  2 ->  2 (0)
; ENDFUNC AFL_AFA_Flat_GetTitle

; FUNC AFL_AFA_CG_SearchTitle (0x5ae5a-0x5ae7a)
/* 0005ae5a */ PUSH 2                                   ; stack:  0 ->  1 (+1)
/* 0005ae60 */ (SH_LOCAL_S_REF 0)                       ; stack:  1 ->  1 (0)
/* 0005ae66 */ CALLHLL AFAFactory.SearchTitle (args: 2) ; stack:  1 ->  1 (0)
/* 0005ae70 */ RETURN                                   ; stack:  1 ->  1 (0)
/* 0005ae72 */ PUSH 0                                   ; stack:  1 ->  2 (+1)
/* 0005ae78 */ RETURN                                   ; stack:  2 ->  2 (0)
; ENDFUNC AFL_AFA_CG_SearchTitle

; FUNC AFL_AFA_Flat_SearchTitle (0x5ae86-0x5aea6)
/* 0005ae86 */ PUSH 3                                   ; stack:  0 ->  1 (+1)
/* 0005ae8c */ (SH_LOCAL_S_REF 0)                       ; stack:  1 ->  1 (0)
/* 0005ae92 */ CALLHLL AFAFactory.SearchTitle (args: 2) ; stack:  1 ->  1 (0)
/* 0005ae9c */ RETURN                                   ; stack:  1 ->  1 (0)
/* 0005ae9e */ PUSH 0                                   ; stack:  1 ->  2 (+1)
/* 0005aea4 */ RETURN                                   ; stack:  2 ->  2 (0)
; ENDFUNC AFL_AFA_Flat_SearchTitle

; FUNC AFL_AFA_CG_PrefixSearchTitle (0x5aeb2-0x5aed2)
/* 0005aeb2 */ PUSH 2                                   ; stack:  0 ->  1 (+1)
/* 0005aeb8 */ (SH_LOCAL_S_REF 0)                       ; stack:  1 ->  1 (0)
/* 0005aebe */ CALLHLL AFAFactory.PrefixSearchTitle (args: 2) ; stack:  1 ->  1 (0)
/* 0005aec8 */ RETURN                                   ; stack:  1 ->  1 (0)
/* 0005aeca */ PUSH 0                                   ; stack:  1 ->  2 (+1)
/* 0005aed0 */ RETURN                                   ; stack:  2 ->  2 (0)
; ENDFUNC AFL_AFA_CG_PrefixSearchTitle

; FUNC AFL_AFA_Flat_PrefixSearchTitle (0x5aede-0x5aefe)
/* 0005aede */ PUSH 3                                   ; stack:  0 ->  1 (+1)
/* 0005aee4 */ (SH_LOCAL_S_REF 0)                       ; stack:  1 ->  1 (0)
/* 0005aeea */ CALLHLL AFAFactory.PrefixSearchTitle (args: 2) ; stack:  1 ->  1 (0)
/* 0005aef4 */ RETURN                                   ; stack:  1 ->  1 (0)
/* 0005aef6 */ PUSH 0                                   ; stack:  1 ->  2 (+1)
/* 0005aefc */ RETURN                                   ; stack:  2 ->  2 (0)
; ENDFUNC AFL_AFA_Flat_PrefixSearchTitle

; FUNC AFL_AFA_CG_SuffixSearchTitle (0x5af0a-0x5af2a)
/* 0005af0a */ PUSH 2                                   ; stack:  0 ->  1 (+1)
/* 0005af10 */ (SH_LOCAL_S_REF 0)                       ; stack:  1 ->  1 (0)
/* 0005af16 */ CALLHLL AFAFactory.SuffixSearchTitle (args: 2) ; stack:  1 ->  1 (0)
/* 0005af20 */ RETURN                                   ; stack:  1 ->  1 (0)
/* 0005af22 */ PUSH 0                                   ; stack:  1 ->  2 (+1)
/* 0005af28 */ RETURN                                   ; stack:  2 ->  2 (0)
; ENDFUNC AFL_AFA_CG_SuffixSearchTitle

; FUNC AFL_AFA_Flat_SuffixSearchTitle (0x5af36-0x5af56)
/* 0005af36 */ PUSH 3                                   ; stack:  0 ->  1 (+1)
/* 0005af3c */ (SH_LOCAL_S_REF 0)                       ; stack:  1 ->  1 (0)
/* 0005af42 */ CALLHLL AFAFactory.SuffixSearchTitle (args: 2) ; stack:  1 ->  1 (0)
/* 0005af4c */ RETURN                                   ; stack:  1 ->  1 (0)
/* 0005af4e */ PUSH 0                                   ; stack:  1 ->  2 (+1)
/* 0005af54 */ RETURN                                   ; stack:  2 ->  2 (0)
; ENDFUNC AFL_AFA_Flat_SuffixSearchTitle

; FUNC AFL_AFA_CG_GetCountOfSearchData (0x5af62-0x5af7c)
/* 0005af62 */ PUSH 2                                   ; stack:  0 ->  1 (+1)
/* 0005af68 */ CALLHLL AFAFactory.GetCountOfSearchData (args: 1) ; stack:  1 ->  1 (0)
/* 0005af72 */ RETURN                                   ; stack:  1 ->  1 (0)
/* 0005af74 */ PUSH 0                                   ; stack:  1 ->  2 (+1)
/* 0005af7a */ RETURN                                   ; stack:  2 ->  2 (0)
; ENDFUNC AFL_AFA_CG_GetCountOfSearchData

; FUNC AFL_AFA_Flat_GetCountOfSearchData (0x5af88-0x5afa2)
/* 0005af88 */ PUSH 3                                   ; stack:  0 ->  1 (+1)
/* 0005af8e */ CALLHLL AFAFactory.GetCountOfSearchData (args: 1) ; stack:  1 ->  1 (0)
/* 0005af98 */ RETURN                                   ; stack:  1 ->  1 (0)
/* 0005af9a */ PUSH 0                                   ; stack:  1 ->  2 (+1)
/* 0005afa0 */ RETURN                                   ; stack:  2 ->  2 (0)
; ENDFUNC AFL_AFA_Flat_GetCountOfSearchData

; FUNC AFL_AFA_CG_GetSearchTitleByIndex (0x5afae-0x5afe6)
/* 0005afae */ SH_LOCALREF Title                        ; stack:  0 ->  0 (0)
/* 0005afb4 */ (SH_S_ASSIGN_STR0 0)                     ; stack:  0 ->  0 (0)
/* 0005afba */ PUSH 2                                   ; stack:  0 ->  1 (+1)
/* 0005afc0 */ SH_LOCALREF Index                        ; stack:  1 ->  1 (0)
/* 0005afc6 */ SH_LOCALREF Title                        ; stack:  1 ->  1 (0)
/* 0005afcc */ CALLHLL AFAFactory.GetSearchTitleByIndex (args: 3) ; stack:  1 ->  1 (0)
/* 0005afd6 */ (SH_LOCAL_S_REF 1)                       ; stack:  1 ->  1 (0)
/* 0005afdc */ RETURN                                   ; stack:  1 ->  1 (0)
/* 0005afde */ S_PUSH 0 ("")                            ; stack:  1 ->  2 (+1)
/* 0005afe4 */ RETURN                                   ; stack:  2 ->  2 (0)
; ENDFUNC AFL_AFA_CG_GetSearchTitleByIndex

; FUNC AFL_AFA_Flat_GetSearchTitleByIndex (0x5aff2-0x5b02a)
/* 0005aff2 */ SH_LOCALREF Title                        ; stack:  0 ->  0 (0)
/* 0005aff8 */ (SH_S_ASSIGN_STR0 0)                     ; stack:  0 ->  0 (0)
/* 0005affe */ PUSH 3                                   ; stack:  0 ->  1 (+1)
/* 0005b004 */ SH_LOCALREF Index                        ; stack:  1 ->  1 (0)
/* 0005b00a */ SH_LOCALREF Title                        ; stack:  1 ->  1 (0)
/* 0005b010 */ CALLHLL AFAFactory.GetSearchTitleByIndex (args: 3) ; stack:  1 ->  1 (0)
/* 0005b01a */ (SH_LOCAL_S_REF 1)                       ; stack:  1 ->  1 (0)
/* 0005b020 */ RETURN                                   ; stack:  1 ->  1 (0)
/* 0005b022 */ S_PUSH 0 ("")                            ; stack:  1 ->  2 (+1)
/* 0005b028 */ RETURN                                   ; stack:  2 ->  2 (0)
; ENDFUNC AFL_AFA_Flat_GetSearchTitleByIndex

