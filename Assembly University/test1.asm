TITLE geia
INCLUDE Irvine32.inc

integer EQU <"Press any key to continue...">

.data
    manos byte "malaka", 0 
    constant DWORD 74h
    msg TEXTEQU %integer
    ;test1 SWORD 

.code

main PROC 
    mov edx, offset manos
    ;add eax, 2
    call WriteString
    mov edx, offset msg
    call WriteInt
    exit
main ENDP
END main