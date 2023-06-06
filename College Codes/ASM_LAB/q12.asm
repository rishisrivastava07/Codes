;string program to input string and print it
.model small
.stack 100h
.data
 var1 db 'hello myself Rishi Srivastava$'
 var2 db 100 dup('$') 
.code
main proc
    mov ax,@data
    mov ds,ax  ;heap memory initialized

    mov si,offset var2
start:
    mov ah,1    ;taking input from the user
    int 21h

    cmp al,13  ;comparing for enter carriage return
    je programend

    mov [si],al
    inc si
    
    jmp start
programend:
    lea dx,var2 ;printing the input string
    
    mov ah,9
    int 21h

    mov ah,4ch
    int 21h
main endp
end main