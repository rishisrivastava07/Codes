;program to swap two numbers using push and pop
.model small
.stack 100h
.data
    msg1 db 'Numbers before swapping$'
    msg2 db 'Numbers after swapping$'
.code
main proc
    mov ax,@data
    mov ds,ax

    lea dx,msg1
    mov ah,9
    int 21h

    mov dx,10
    mov ah,2
    int 21h

    mov dx,13
    mov ah,2
    int 21h

    mov ax,'2'
    mov dx,ax
    mov ah,2
    int 21h
    push ax

    mov ax,'3'
    mov dx,ax
    mov ah,2
    int 21h
    push ax

    mov dx,10
    mov ah,2
    int 21h

    mov dx,13
    mov ah,2
    int 21h

    lea dx,msg2
    mov ah,9
    int 21h

    mov dx,10
    mov ah,2
    int 21h

    mov dx,13
    mov ah,2
    int 21h

    pop ax
    mov dx,ax
    mov ah,2
    int 21h

    pop ax
    mov dx,ax
    mov ah,2
    int 21h

    mov ah,4ch
    int 21h
main endp
end main