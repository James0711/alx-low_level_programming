section .data
    message db "Hello, Holberton", 10, 0

section .text
    global main

    extern printf

main:
    mov rdi, message
    mov rax, 0
    call printf

    xor eax, eax
    ret

