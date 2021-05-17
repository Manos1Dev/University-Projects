TITLE geia
INCLUDE Irvine32.inc

.data
    arr word 1, 2, 3, 4, 5, 6
    test word 0

.code

main PROC 
    mov test,[arr + 2]
    call writeInt
    exit
main ENDP
END main