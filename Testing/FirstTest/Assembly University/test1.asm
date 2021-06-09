TITLE geia
INCLUDE Irvine32.inc

;p EQU 8d 

.data

    ;ela label word
        ;test1 word 5
        ;test2 byte 4

    ;align 2
    ;ela word 55
    ;flags BYTE ?
    ;ela BYTE 10110010b
    ;x SDWORD 16d
    ;y SDWORD 154d
    ;z1 SDWORD -17d
    ;w SDWORD ?

.code

main PROC

    mov eax, 0
    
    ;mov ax, ela
    
    ;mov eax, sizeof geia
    
    ;mov eax, lengthof geia

    ;mov ax, TYPE geia

    ;mov eax, 0
    ;mov ah, byte ptr [geia + 1]
    ;mov al, 6

    ;mov eax, offset geia + 2
    ;call WriteInt
    
    ;mov ax, word ptr geia

    ;mov eax, 5d
    ;neg eax

    ;mov eax, 5
    ;inc eax

    ;mov eax, 5
    ;xchg ebx, eax
    
    ;lahf
    ;mov flags, ah
    
    ;movzx eax, ela
    
    ;mov eax, x
    ;mov ebx, y
    ;add ebx, x
    ;mov eax, 0
    ;mov eax, 50d
    ;add eax, x
    ;add eax, y
    ;add eax, z1
    ;sub eax, p
    ;sub ebx, eax
    ;mov eax, ebx
    ;call WriteInt
    exit
main ENDP
END main