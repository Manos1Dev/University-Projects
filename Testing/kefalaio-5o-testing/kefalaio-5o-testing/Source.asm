title testing
include Irvine32.inc


.data
	ela DWORD 5
	re DWORD 6
	malaka DWORD 7

.code
main PROC
	push ela
	;push re

	call NewFunction

	pop ela
	exit	
main ENDP

NewFunction PROC
	mov ela, 4
	mov re, 5
	ret
NewFunction ENDP
end main