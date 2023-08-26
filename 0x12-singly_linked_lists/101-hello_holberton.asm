section .data
    hello db 'Hello, Holberton', 0

section .text
    global _start

    extern printf

_start:
    push rbp
    mov rdi, hello
    call printf
    add rsp, 8  ; Clean up the stack
    pop rbp

    ; Exit the program
    mov rax, 60
    xor rdi, rdi
    syscall

