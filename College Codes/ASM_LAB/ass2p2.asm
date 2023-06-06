.model small
.stack 100h
.data
    arr db 1, 8, 6, 7, 2, 3, 4, 0, 5, 9, '$'
    msg1 db 'Enter the element to search: $'
    msg2 db 'Found at: $'
    msg3 db 'Element not found$'
.code
main proc
    mov ax, @data
    mov ds, ax

    lea dx, msg1
    mov ah, 09h
    int 21h

    mov ah, 01h
    int 21h

    sub al, 48
    mov bl, al

    lea si, arr
    mov cl, 10
l1:
    cmp bl, [si]
    jz found
    inc si
    je notFound
    loop l1

notFound:
    lea dx, msg3
    mov ah, 09h
    int 21h

    jmp exit

found:
    lea dx, msg2
    mov ah, 09h
    int 21h

    xor dh, dh
    mov dl, 10

    sub dl, cl
    
    add dl,48
    mov ah, 02h
    int 21h

exit:
    mov ah, 4ch
    int 21h
main endp
end main