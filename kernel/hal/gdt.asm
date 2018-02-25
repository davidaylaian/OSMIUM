;******************************************************
; Copyright 2018 David Aylaian
; https://github.com/davidaylaian/OSMIUM/
; Licensed under the Apache License 2.0
;******************************************************

;******************************************************
; the global descriptor table is a table of 8-byte wide
; descriptors that describe memory segments
;******************************************************

gdt:
	; offset 0
	; null descriptor
	dq 0x0

	; offset 8
	; code descriptor
	dw 0xFFFF
	dw 0x0
	db 0x0
	db 0b10011010
	db 0b11001111
	db 0x0

	; offset 16
	; data descriptor
	dw 0xFFFF
	dw 0x0
	db 0x0
	db 0b10010010
	db 0b11001111
	db 0x0

;******************************************************
; the gdt reigster tells the cpu where to find the gdt
;******************************************************

gdtr:
	.size dw gdtr - gdt - 1
	.base dd gdt

global gdt_load
gdt_load:
	lgdt [gdtr]
	mov ax, 16
	mov ds, ax
	mov es, ax
	mov fs, ax
	mov gs, ax
	mov ss, ax
	jmp 8:gdt_load2
gdt_load2:
	ret
