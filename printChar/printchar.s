	.file	"printchar.c"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	jmp	.L2
.L3:
	movl	-4(%rbp), %eax
	movl	%eax, %edi
	call	putchar
.L2:
	call	getchar
	movl	%eax, -4(%rbp)
	cmpl	$-1, -4(%rbp)
	jne	.L3
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (GNU) 4.8.2 20140120 (Red Hat 4.8.2-16)"
	.section	.note.GNU-stack,"",@progbits
