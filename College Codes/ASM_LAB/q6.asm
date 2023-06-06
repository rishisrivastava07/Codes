;accessing data from .data 
.model small
.stack 100h
.data
    var1 db '1'
    var2 db ?
    var3 db 'Hello World$'
.code
main proc
    mov ax,@data
    mov ds,ax

    ;mov dl,var1 ; both dl and db are of 8 bits

    ;mov ah,2
    ;int 21h

    ;mov ah,1
    ;int 21h

    ;mov var2,al

    ;mov dl,var2
    ;mov ah,2
    ;int 21h

    mov dx,offset var3
    ;lea dx,var3
    mov ah,9
    int 21h

    mov ah,4ch
    int 21h
main endp
end main