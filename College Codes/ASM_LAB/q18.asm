.model small
.stack 100h
.data
    msg1 db 'Hello$'
    msg2 db 'How Are You$'
    msg3 db 'Good to See You$'
.code
main proc
    mov ax,@data
    mov ds,ax

    lea dx,msg1
    mov ah,9
    int 21h

    call enterkey

    lea dx,msg2
    mov ah,9
    int 21h

    call enterkey

    lea dx,msg2
    mov ah,9
    int 21h

    call enterkey

    mov ah,4ch
    int 21h
main endp
enterkey proc
    mov dx,10
    mov ah,2
    int 21h

    mov dx,13
    mov ah,2
    int 21h
ret
end main
