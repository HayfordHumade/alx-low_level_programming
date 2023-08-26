section .data
	hello db "Hello, Holberton", 0

section .text
	global main

main:
	mov rax, 1
	mov rdi, 1
	mov rsi, hello
	mov rdx, 17
	syscall
