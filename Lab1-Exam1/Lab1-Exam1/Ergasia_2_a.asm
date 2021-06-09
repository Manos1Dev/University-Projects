title exam1_lab1

include Irvine32.inc

p EQU 8d

.data
	x SDWORD 16d
	y sdword 154d
	z1 SDWORD -17d
	w SDWORD ? 

.code
main PROC
	mov eax, x
	add eax, y
	call WriteInt
	mov ebx, 50d
	add ebx, x
	add ebx, y
	add ebx, z1
	sub ebx, p
	sub eax, ebx
	call CRLF
	call WriteInt
	mov w, eax
	call GetDateTime
	exit
main ENDP
end main