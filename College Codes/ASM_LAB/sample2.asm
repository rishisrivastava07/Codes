.model small
.stack 100h
.data
    num1 db 0x12, 0x34 ; first BCD number
    num2 db 0x56, 0x78 ; second BCD number
    result db 0 ; result of the addition
.code
main proc
    ; initialize pointers and carry flag
    mov si, offset num1
    mov di, offset num2
    mov cl, 0

next_digit:
    ; get the least significant digit of each number
    mov al, [si]
    and al, 0Fh
    add al, [di]
    add al, cl

; calculate the carry flag
    mov bl, al
    shr bl, 4
    mov cl, bl

; store the result
    and al, 0Fh
    mov [result], al

; move the pointers to the next digit
    inc si
    inc di
    inc result

; repeat until all digits have been processed
    cmp si, offset num1 + 2
    jl next_digit

; exit program
    mov ah,4ch
    int 21h

main endp
end start
