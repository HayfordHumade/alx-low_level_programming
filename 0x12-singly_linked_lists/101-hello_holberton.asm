section .data
	hello db "Hello, Holberton", 2

section .text
	global main

main:
	mov rax, 1
	mov rdi, 1
	mov rsi, hello
	mov rdx, 17
	syscall
