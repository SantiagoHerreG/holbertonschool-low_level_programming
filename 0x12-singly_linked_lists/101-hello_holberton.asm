extern printf

section .data

    message db "Hello, Holberton", 10, 0

section .text

global main
main:
    push    rbp

    mov     rdi,message
    mov     rax,0
    call    printf

    pop     rbp

    mov     rax,0
    ret

