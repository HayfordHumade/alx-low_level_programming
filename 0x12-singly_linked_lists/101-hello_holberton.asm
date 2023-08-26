section .data
	hello db "Hello, Holberton", 0

section .text
	global _start

	extern printf

_start:
	sub rsp, 8

	mov rdi, hello
	call printf

	add rsp, 8

	mov rax, 60
	xor rdi, rdi
	syscall

