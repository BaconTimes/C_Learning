	.section	__TEXT,__text,regular,pure_instructions
	.macosx_version_min 10, 12
	.globl	_main
	.p2align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## BB#0:
	pushq	%rbp
Ltmp0:
	.cfi_def_cfa_offset 16
Ltmp1:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp2:
	.cfi_def_cfa_register %rbp
	subq	$64, %rsp
	movq	___stack_chk_guard@GOTPCREL(%rip), %rax
	movq	(%rax), %rax
	movq	%rax, -8(%rbp)
	movl	$0, -52(%rbp)
	movl	$1, -56(%rbp)
LBB0_1:                                 ## =>This Inner Loop Header: Depth=1
	cmpl	$10, -56(%rbp)
	jg	LBB0_4
## BB#2:                                ##   in Loop: Header=BB0_1 Depth=1
	movslq	-56(%rbp), %rax
	movl	$0, -48(%rbp,%rax,4)
## BB#3:                                ##   in Loop: Header=BB0_1 Depth=1
	movl	-56(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -56(%rbp)
	jmp	LBB0_1
LBB0_4:
	leaq	L_.str(%rip), %rdi
	leaq	-56(%rbp), %rdx
	leaq	-48(%rbp), %rax
	addq	$40, %rax
	movq	%rax, %rsi
	movb	$0, %al
	callq	_printf
	movl	-52(%rbp), %ecx
	movq	___stack_chk_guard@GOTPCREL(%rip), %rdx
	movq	(%rdx), %rdx
	movq	-8(%rbp), %rsi
	cmpq	%rsi, %rdx
	movl	%eax, -60(%rbp)         ## 4-byte Spill
	movl	%ecx, -64(%rbp)         ## 4-byte Spill
	jne	LBB0_6
## BB#5:
	movl	-64(%rbp), %eax         ## 4-byte Reload
	addq	$64, %rsp
	popq	%rbp
	retq
LBB0_6:
	callq	___stack_chk_fail
	.cfi_endproc

	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"%p --- %p\n"


.subsections_via_symbols
