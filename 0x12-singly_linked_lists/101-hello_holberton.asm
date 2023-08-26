section .data
	; text to be printed & new line indicated by ascii character 10
	hello db "Hello, Holberton", 10

section .text
	; start running assembly code at main
	global main

main:
	; sets value to 1 in rax register which calls 'sys_write'
	mov rax, 1
	; file descriptor 1 (stdout)
	mov rdi, 1

	; loads the address of hello into the rsi register
	mov rsi, hello
	; sets the length of hello & new line
	mov rdx, 17

	; triggers system call to print message
	syscall
