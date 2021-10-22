title EKSETASTIKH

include Irvine32.inc

.data
	A dword 5, 0, 10, 6
	B dword 1, 2 ,4
	m dword (sizeof A / dword) - 1
	n dword (sizeof B / dword) - 1 
	P dword 6
	p_ptr dword ?
	msg1 byte "First polynomial is n:", 0
	msg2 byte "nSecond polynomial is n:", 0
	msg3 byte "x^", 0
	msg4 byte " ", 0
	msg5 byte "nProduct polynomial is n:", 0

.code
main PROC
	push offset A
	push m
	call printPoly

	push offset A
	push n
	call printPoly

	add esp, 20

	push offset A
	push m
	push offset B
	push n
	push offset P
	push offset p_ptr
	call multiply

	add esp, 32

	mov edx, offset msg5
	call WriteString
	;push n + m + 1
	;call printPoly

	exit
main ENDP

multiply PROC
	push ebp
	mov ebp, esp
	pushad

	mov ebx, [ebp + 8]
	add ebx, [ebp + 16]
	add ebx, [ebp + 24]
	mov [ebx], ebx

	mov ecx, [ebp + 12] + 1 ; p + 1
	mov eax, 0
	;ll1:
		
	;loop ll1

	mov ecx, [ebp + 24] ; n 
	mov eax, 0
	;ll2:
		
	;loop ll2

	popad
	mov esp, ebp
	pop ebp
	ret
multiply ENDP

printPoly PROC
	push ebp
	mov ebp, esp
	pushad

	mov ecx, [ebp + 8]
	add ecx, 1
	mov ebx, [ebp + 12]
	mov esi, 0
	l1:
		call CRLF
		mov edx, offset msg1
		call WriteString
		mov eax, [ebx + esi]
		call WriteInt

		call CRLF
		cmp ecx, 0
		jne eee

		eee:
			mov edx, offset msg3
			call WriteString
			mov eax, ecx
			call WriteInt

		cmp ecx, [ebp + 8] - 1
		jne eee2

		eee2:
			mov edx, offset msg4
			call WriteString

		add ebx, 4
	loop l1

	popad
	mov esp, ebp
	pop ebp
	ret
printPoly ENDP
end main