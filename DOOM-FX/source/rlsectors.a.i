VERSION		EQU	1
REVISION	EQU	146
DATE	MACRO
		dc.b	'9.6.95'
	ENDM
VERS	MACRO
		dc.b	'rlsectors.a 1.146'
	ENDM
VSTRING	MACRO
		dc.b	'rlsectors.a 1.146 (9.6.95)',13,10,0
	ENDM
VERSTAG	MACRO
		dc.b	0,'$VER: rlsectors.a 1.146 (9.6.95)',0
	ENDM
