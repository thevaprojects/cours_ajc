	.file	"main.c"
	.text
	.section	.rodata
.LC1:
	.string	"livre %d : %s %s %d \n"
	.align 32
.LC0:
	.string	"gun"
	.zero	26
	.string	"aeo"
	.zero	46
	.value	1956
	.string	"run"
	.zero	26
	.string	"peo"
	.zero	46
	.value	1958
	.string	"gin"
	.zero	26
	.string	"keo"
	.zero	46
	.value	1956
	.string	"bun"
	.zero	26
	.string	"rai"
	.zero	46
	.value	1955
	.string	"gun"
	.zero	26
	.string	"lru"
	.zero	46
	.value	1956
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
	subq	$448, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	leaq	-432(%rbp), %rax
	leaq	.LC0(%rip), %rdx
	movl	$51, %ecx
	movq	%rax, %rdi
	movq	%rdx, %rsi
	rep movsq
	movq	%rsi, %rdx
	movq	%rdi, %rax
	movzwl	(%rdx), %ecx
	movw	%cx, (%rax)
	leaq	2(%rax), %rax
	leaq	2(%rdx), %rdx
	movl	$0, -440(%rbp)
	jmp	.L2
.L3:
	movl	-440(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rdx, %rax
	addq	%rax, %rax
	addq	%rbp, %rax
	subq	$352, %rax
	movzwl	(%rax), %eax
	movswl	%ax, %esi
	leaq	-432(%rbp), %rcx
	movl	-440(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rdx, %rax
	addq	%rax, %rax
	addq	$16, %rax
	addq	%rcx, %rax
	leaq	14(%rax), %rcx
	leaq	-432(%rbp), %rdi
	movl	-440(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rdx, %rax
	addq	%rax, %rax
	leaq	(%rdi,%rax), %rdx
	movl	-440(%rbp), %eax
	movl	%esi, %r8d
	movl	%eax, %esi
	leaq	.LC1(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	addl	$1, -440(%rbp)
.L2:
	cmpl	$4, -440(%rbp)
	jle	.L3
	movl	$9, -436(%rbp)
	movl	$0, %eax
	movq	-8(%rbp), %rsi
	xorq	%fs:40, %rsi
	je	.L5
	call	__stack_chk_fail@PLT
.L5:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 8.2.0-7ubuntu1) 8.2.0"
	.section	.note.GNU-stack,"",@progbits
