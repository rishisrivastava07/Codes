;program to reverse a string
.model small
.stack 100h
.data
    msg db 'Rishi'
.code
main proc
    mov ax,@data
    mov ds,ax

    lea si,msg

    mov cx,5
l1
    push [si]

    inc si 
    loop l1

    mov cx,5
l2:
    pop dx
    mov ah,2
    int 21h

    loop l2

    mov ah,4ch
    int 21h
main endp
end main