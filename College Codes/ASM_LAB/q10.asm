;program to print the input number is equal or not to given number in program

.model small
.stack 100h
.data
    msg1 db 'Number are Equal$'
    msg2 db 'Number are not Equal$'
.code
main proc
    mov ax,@data
    mov ds,ax

    mov dl,'3'

    mov ah,1
    int 21h

    cmp al,dl
    je l1

    mov dx,10
    mov ah,2
    int 21h

    mov dx,13
    mov ah,2
    int 21h

    lea dx,msg2
    mov ah,9
    int 21h

    mov ah,4ch
    int 21h

l1:

    mov dx,10
    mov ah,2
    int 21h

    mov dx,13
    mov ah,2
    int 21h

    lea dx,msg1
    mov ah,9
    int 21h

    mov ah,4ch
    int 21h

main endp
end main