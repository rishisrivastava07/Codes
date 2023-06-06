; program to print two different strings on two different lines
.model small
.stack 100h
.data 
    msg1 db 'Hello$'
    msg2 db 'World$'
.code
main proc
    mov ax,@data
    mov ds,ax

    lea dx,msg1
    mov ah,9
    int 21h

    mov dx,10  ; calling new line feed
    mov ah,2
    int 21h

    mov dx,13  ; calling carriage return
    mov ah,2
    int 21h

    lea dx,msg2
    mov ah,9
    int 21h

    mov ah,4ch
    int 21h

main endp
end main