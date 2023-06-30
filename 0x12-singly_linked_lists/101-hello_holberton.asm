section .data
	fmt db '%s', 10, 0

section .text
	global main
	extern printf
	global print_list

main:
	xor rax, rax
	ret

print_list:
	push rbp
	mov rbp, rsp
	mov rdi, [rbp+16] ; head
.loop:
	cmp rdi, 0
	je .end
	mov rsi, [rdi]
	mov rdi, fmt
	xor rax, rax
	call printf
	mov rdi, [rdi+16]
	jmp .loop
.end:
	pop rbp
	ret

