TITLE geia
INCLUDE Irvine32.inc

.data
    count BYTE "geia", 0

.code

main PROC 
    mov eax, OFFSET count
    call WriteString

    exit
main ENDP
END main