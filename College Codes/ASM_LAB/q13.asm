;stack
.model small
.stack 100h
.data
.code
main proc
    mov ax,2

    push ax ; registers or variables used in this must contain 16 bit
    pop ax

    add ax,48
    mov dx,ax

    mov ah,2
    int 21h

    mov ah,4ch
    int 21h
main endp
end main