title test

include Irvine32.inc

.data

	arr byte "elare", 0

	;-------------------------------

	;val1 SDWORD 8
	;val2 SDWORD -15
	;val3 SDWORD 20

	;-------------------------------

	;test1 byte "abc", 0
	;test1 BYTE 5
	;ela word 5, 6, 7, 8, 9


.code

main PROC

	mov ecx, sizeof arr / 2
	mov ebx, 0
	;mov ebx, 

	l1: 
		mov ah, arr[ecx]
	loop l1

	;-------------------------------

	;mov eax, 0
	;mov eax, val2
	;add eax, 7
	;sub eax, val3
	;add eax, val1
	;call WriteInt

	;-------------------------------

	;mov eax, offset test1
	;mov al, [eax]

	;mov eax, 4 * TYPE ela
	;mov bx, ela[eax]

	;mov eax, 0
	;mov ecx, SIZEOF test1
	;l1:
		;mov bh, test1[eax]
		;inc eax
	;loop l1

exit
main ENDP
end main