	.file	"sol_3.c"
	.text
	.globl	_separador
	.def	_separador;	.scl	2;	.type	32;	.endef
_separador:
LFB10:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	cmpl	$32, 8(%ebp)
	je	L2
	cmpl	$9, 8(%ebp)
	je	L2
	cmpl	$10, 8(%ebp)
	jne	L3
L2:
	movl	$1, %eax
	jmp	L5
L3:
	movl	$0, %eax
L5:
	popl	%ebp
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE10:
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC0:
	.ascii "%ld caracteres\12\0"
LC1:
	.ascii "%ld palabras\12\0"
LC2:
	.ascii "%ld l\303\255neas\12\0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB11:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$48, %esp
	call	___main
	movl	$0, 44(%esp)
	movl	$0, 40(%esp)
	movl	$1, 36(%esp)
	movl	$32, 28(%esp)
	call	_getchar
	movl	%eax, 32(%esp)
	jmp	L7
L10:
	addl	$1, 44(%esp)
	cmpl	$10, 32(%esp)
	jne	L8
	addl	$1, 36(%esp)
L8:
	movl	32(%esp), %eax
	movl	%eax, (%esp)
	call	_separador
	testl	%eax, %eax
	jne	L9
	movl	28(%esp), %eax
	movl	%eax, (%esp)
	call	_separador
	testl	%eax, %eax
	je	L9
	addl	$1, 40(%esp)
L9:
	movl	32(%esp), %eax
	movl	%eax, 28(%esp)
	call	_getchar
	movl	%eax, 32(%esp)
L7:
	cmpl	$-1, 32(%esp)
	jne	L10
	movl	44(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC0, (%esp)
	call	_printf
	movl	40(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC1, (%esp)
	call	_printf
	movl	36(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC2, (%esp)
	call	_printf
	movl	$0, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE11:
	.ident	"GCC: (MinGW.org GCC-6.3.0-1) 6.3.0"
	.def	_getchar;	.scl	2;	.type	32;	.endef
	.def	_printf;	.scl	2;	.type	32;	.endef
