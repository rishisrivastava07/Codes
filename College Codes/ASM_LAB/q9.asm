;program to print captial letters from A to Z
.model small
.stack 100h
.data
.code
main proc
    mov cl,26
    mov dl,65

print:
    mov ah,2
    int 21h

    inc dl

loop print

    mov ah,4ch
    int 21h
main endp
end main