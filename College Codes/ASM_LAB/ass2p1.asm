.model small
.stack 100h
.data
    arr db 5,3,6,8,4,7,2,7,9,8
.code
main proc
    mov ax,@data
    mov ds,ax

    mov si,offset arr
    mov bl, [si]
    
    mov cx, 9
    inc si
loop1:
    cmp [si],bl
    jge skip1
    mov bl,[si]
skip1:
    inc si
    loop loop1

    add bl,48
    mov dl, bl

    mov ah,2
    int 21h

    mov ah, 4ch
    int 21h
main endp
end main