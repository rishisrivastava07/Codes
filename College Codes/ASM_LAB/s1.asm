.model small
.stack 100h
.data
    num1 db 12,34 ; first BCD number
    num2 db 56,78 ; second BCD number
    result db 0 ; result of the addition
.code
main proc
    mov ax,@data
    mov ds,ax

    ; initialize pointers and carry flag
    mov si, 0
    mov di, 0
    mov cl, 0

    next_digit:
    ; get the least significant digit of each number
        mov al, [num1 + si]
        and al, 0Fh
        add al, [num2 + di]
        add al, cl

    ; calculate the carry flag
        mov bl, al
        shr bl, 4
        mov cl, bl

    ; store the result
    and al, 0Fh
    mov [result + si], al

    ; move the pointers to the next digit
    inc si
    inc di

    ; repeat until all digits have been processed
    cmp si, 2
    jl next_digit

    ; exit program
    mov ah,4ch
    int 21h

main endp
end main
