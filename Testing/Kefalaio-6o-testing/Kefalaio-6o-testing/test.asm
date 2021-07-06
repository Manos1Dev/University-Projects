title testing

include Irvine32.inc

.data
	testing DWORD ?

.code
main PROC
	;mov eax, 1000d
	;mov ebx, 1000d
	;mov ecx, 1000d
	;call Function
	;call WriteInt

	;------------------------------

	mov eax, 0
	push eax
	call Function
	call WriteInt
	pop eax
	call WriteInt

	exit
main ENDP

Function PROC
	;add eax, ebx
	;add eax, ecx
	;ret

	;------------------------------

	add eax, 1500d
	ret
Function ENDP
end main