include Irvine32.inc

.data
	a1 dword 5
	a2 dword 6

.code
main PROC
mov eax, a1
mov ebx, a2
	cmp eax, ebx
	exit
main ENDP
end main