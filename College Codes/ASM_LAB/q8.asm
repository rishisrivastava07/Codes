;loop printing 0 to 9

.model small
.stack 100h
.data
.code
main proc
    mov cl,10
    mov dl,48

label1:
    mov ah,2
    int 21h

    inc dl

loop label1

    mov ah,4ch
    int 21h
main endp
end main