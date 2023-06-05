	.file	"\347\237\251\351\230\265\350\277\220\347\256\227.cpp"
	.text
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.section	.rodata
.LC0:
	.string	"\350\276\223\345\205\245\350\241\214\346\225\260\344\270\216\345\210\227\346\225\260\357\274\232"
.LC1:
	.string	"\350\276\223\345\205\245\344\275\240\347\232\204\347\237\251\351\230\265\357\274\232"
	.text
	.globl	_Z12CreateMatrixv
	.type	_Z12CreateMatrixv, @function
_Z12CreateMatrixv:
.LFB1731:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$72, %rsp
	.cfi_offset 3, -24
	movq	%fs:40, %rax
	movq	%rax, -24(%rbp)
	xorl	%eax, %eax
	leaq	.LC0(%rip), %rax
	movq	%rax, %rsi
	leaq	_ZSt4cout(%rip), %rax
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	leaq	-76(%rbp), %rax
	movq	%rax, %rsi
	leaq	_ZSt3cin(%rip), %rax
	movq	%rax, %rdi
	call	_ZNSirsERi@PLT
	movq	%rax, %rdx
	leaq	-72(%rbp), %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	_ZNSirsERi@PLT
	movl	-76(%rbp), %eax
	cltq
	salq	$3, %rax
	movq	%rax, %rdi
	call	malloc@PLT
	movq	%rax, -56(%rbp)
	movl	$0, -68(%rbp)
	jmp	.L2
.L3:
	movl	-72(%rbp), %eax
	cltq
	salq	$2, %rax
	movl	-68(%rbp), %edx
	movslq	%edx, %rdx
	leaq	0(,%rdx,8), %rcx
	movq	-56(%rbp), %rdx
	leaq	(%rcx,%rdx), %rbx
	movq	%rax, %rdi
	call	malloc@PLT
	movq	%rax, (%rbx)
	addl	$1, -68(%rbp)
.L2:
	movl	-76(%rbp), %eax
	cmpl	%eax, -68(%rbp)
	jl	.L3
	leaq	.LC1(%rip), %rax
	movq	%rax, %rsi
	leaq	_ZSt4cout(%rip), %rax
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	movl	$0, -64(%rbp)
	jmp	.L4
.L7:
	movl	$0, -60(%rbp)
	jmp	.L5
.L6:
	movl	-64(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	movq	-56(%rbp), %rax
	addq	%rdx, %rax
	movq	(%rax), %rdx
	movl	-60(%rbp), %eax
	cltq
	salq	$2, %rax
	addq	%rdx, %rax
	movq	%rax, %rsi
	leaq	_ZSt3cin(%rip), %rax
	movq	%rax, %rdi
	call	_ZNSirsERf@PLT
	addl	$1, -60(%rbp)
.L5:
	movl	-72(%rbp), %eax
	cmpl	%eax, -60(%rbp)
	jl	.L6
	addl	$1, -64(%rbp)
.L4:
	movl	-76(%rbp), %eax
	cmpl	%eax, -64(%rbp)
	jl	.L7
	movl	-72(%rbp), %eax
	movl	%eax, -44(%rbp)
	movl	-76(%rbp), %eax
	movl	%eax, -48(%rbp)
	movq	-56(%rbp), %rax
	movq	%rax, -40(%rbp)
	movq	-48(%rbp), %rax
	movq	-40(%rbp), %rdx
	movq	-24(%rbp), %rcx
	subq	%fs:40, %rcx
	je	.L9
	call	__stack_chk_fail@PLT
.L9:
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1731:
	.size	_Z12CreateMatrixv, .-_Z12CreateMatrixv
	.globl	_Z10InitMatrixii
	.type	_Z10InitMatrixii, @function
_Z10InitMatrixii:
.LFB1732:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$88, %rsp
	.cfi_offset 3, -24
	movl	%edi, -84(%rbp)
	movl	%esi, -88(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -24(%rbp)
	xorl	%eax, %eax
	movl	-84(%rbp), %eax
	cltq
	salq	$3, %rax
	movq	%rax, %rdi
	call	malloc@PLT
	movq	%rax, -56(%rbp)
	movl	$0, -68(%rbp)
	jmp	.L11
.L12:
	movl	-88(%rbp), %eax
	cltq
	salq	$2, %rax
	movl	-68(%rbp), %edx
	movslq	%edx, %rdx
	leaq	0(,%rdx,8), %rcx
	movq	-56(%rbp), %rdx
	leaq	(%rcx,%rdx), %rbx
	movq	%rax, %rdi
	call	malloc@PLT
	movq	%rax, (%rbx)
	addl	$1, -68(%rbp)
.L11:
	movl	-68(%rbp), %eax
	cmpl	-84(%rbp), %eax
	jl	.L12
	movl	$0, -64(%rbp)
	jmp	.L13
.L16:
	movl	$0, -60(%rbp)
	jmp	.L14
.L15:
	movl	-64(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	movq	-56(%rbp), %rax
	addq	%rdx, %rax
	movq	(%rax), %rdx
	movl	-60(%rbp), %eax
	cltq
	salq	$2, %rax
	addq	%rdx, %rax
	pxor	%xmm0, %xmm0
	movss	%xmm0, (%rax)
	addl	$1, -60(%rbp)
.L14:
	movl	-60(%rbp), %eax
	cmpl	-88(%rbp), %eax
	jl	.L15
	addl	$1, -64(%rbp)
.L13:
	movl	-64(%rbp), %eax
	cmpl	-84(%rbp), %eax
	jl	.L16
	movl	-88(%rbp), %eax
	movl	%eax, -44(%rbp)
	movl	-84(%rbp), %eax
	movl	%eax, -48(%rbp)
	movq	-56(%rbp), %rax
	movq	%rax, -40(%rbp)
	movq	-48(%rbp), %rax
	movq	-40(%rbp), %rdx
	movq	-24(%rbp), %rcx
	subq	%fs:40, %rcx
	je	.L18
	call	__stack_chk_fail@PLT
.L18:
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1732:
	.size	_Z10InitMatrixii, .-_Z10InitMatrixii
	.globl	_Z3add6MatrixS_
	.type	_Z3add6MatrixS_, @function
_Z3add6MatrixS_:
.LFB1733:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rsi, %rax
	movq	%rdi, %r8
	movq	%r8, %rsi
	movq	%r9, %rdi
	movq	%rax, %rdi
	movq	%rsi, -32(%rbp)
	movq	%rdi, -24(%rbp)
	movq	%rdx, -48(%rbp)
	movq	%rcx, -40(%rbp)
	movl	$0, -8(%rbp)
	jmp	.L20
.L23:
	movl	$0, -4(%rbp)
	jmp	.L21
.L22:
	movq	-24(%rbp), %rdx
	movl	-8(%rbp), %eax
	cltq
	salq	$3, %rax
	addq	%rdx, %rax
	movq	(%rax), %rdx
	movl	-4(%rbp), %eax
	cltq
	salq	$2, %rax
	addq	%rdx, %rax
	movss	(%rax), %xmm1
	movq	-40(%rbp), %rdx
	movl	-8(%rbp), %eax
	cltq
	salq	$3, %rax
	addq	%rdx, %rax
	movq	(%rax), %rdx
	movl	-4(%rbp), %eax
	cltq
	salq	$2, %rax
	addq	%rdx, %rax
	movss	(%rax), %xmm0
	movq	-24(%rbp), %rdx
	movl	-8(%rbp), %eax
	cltq
	salq	$3, %rax
	addq	%rdx, %rax
	movq	(%rax), %rdx
	movl	-4(%rbp), %eax
	cltq
	salq	$2, %rax
	addq	%rdx, %rax
	addss	%xmm1, %xmm0
	movss	%xmm0, (%rax)
	addl	$1, -4(%rbp)
.L21:
	movl	-28(%rbp), %eax
	cmpl	%eax, -4(%rbp)
	jl	.L22
	addl	$1, -8(%rbp)
.L20:
	movl	-32(%rbp), %eax
	cmpl	%eax, -8(%rbp)
	jl	.L23
	movq	-32(%rbp), %rax
	movq	-24(%rbp), %rdx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1733:
	.size	_Z3add6MatrixS_, .-_Z3add6MatrixS_
	.globl	_Z3sub6MatrixS_
	.type	_Z3sub6MatrixS_, @function
_Z3sub6MatrixS_:
.LFB1734:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rsi, %rax
	movq	%rdi, %r8
	movq	%r8, %rsi
	movq	%r9, %rdi
	movq	%rax, %rdi
	movq	%rsi, -32(%rbp)
	movq	%rdi, -24(%rbp)
	movq	%rdx, -48(%rbp)
	movq	%rcx, -40(%rbp)
	movl	$0, -8(%rbp)
	jmp	.L26
.L29:
	movl	$0, -4(%rbp)
	jmp	.L27
.L28:
	movq	-24(%rbp), %rdx
	movl	-8(%rbp), %eax
	cltq
	salq	$3, %rax
	addq	%rdx, %rax
	movq	(%rax), %rdx
	movl	-4(%rbp), %eax
	cltq
	salq	$2, %rax
	addq	%rdx, %rax
	movss	(%rax), %xmm0
	movq	-40(%rbp), %rdx
	movl	-8(%rbp), %eax
	cltq
	salq	$3, %rax
	addq	%rdx, %rax
	movq	(%rax), %rdx
	movl	-4(%rbp), %eax
	cltq
	salq	$2, %rax
	addq	%rdx, %rax
	movss	(%rax), %xmm1
	movq	-24(%rbp), %rdx
	movl	-8(%rbp), %eax
	cltq
	salq	$3, %rax
	addq	%rdx, %rax
	movq	(%rax), %rdx
	movl	-4(%rbp), %eax
	cltq
	salq	$2, %rax
	addq	%rdx, %rax
	subss	%xmm1, %xmm0
	movss	%xmm0, (%rax)
	addl	$1, -4(%rbp)
.L27:
	movl	-28(%rbp), %eax
	cmpl	%eax, -4(%rbp)
	jl	.L28
	addl	$1, -8(%rbp)
.L26:
	movl	-32(%rbp), %eax
	cmpl	%eax, -8(%rbp)
	jl	.L29
	movq	-32(%rbp), %rax
	movq	-24(%rbp), %rdx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1734:
	.size	_Z3sub6MatrixS_, .-_Z3sub6MatrixS_
	.globl	_Z9calRowCol6MatrixS_ii
	.type	_Z9calRowCol6MatrixS_ii, @function
_Z9calRowCol6MatrixS_ii:
.LFB1735:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rsi, %rax
	movq	%rdi, %r10
	movq	%r10, %rsi
	movq	%r11, %rdi
	movq	%rax, %rdi
	movq	%rsi, -32(%rbp)
	movq	%rdi, -24(%rbp)
	movq	%rdx, -48(%rbp)
	movq	%rcx, -40(%rbp)
	movl	%r8d, -52(%rbp)
	movl	%r9d, -56(%rbp)
	movl	$0, -12(%rbp)
	movl	-28(%rbp), %eax
	movl	%eax, -4(%rbp)
	movl	$0, -8(%rbp)
	jmp	.L32
.L33:
	pxor	%xmm1, %xmm1
	cvtsi2ssl	-12(%rbp), %xmm1
	movq	-24(%rbp), %rdx
	movl	-52(%rbp), %eax
	cltq
	salq	$3, %rax
	addq	%rdx, %rax
	movq	(%rax), %rdx
	movl	-8(%rbp), %eax
	cltq
	salq	$2, %rax
	addq	%rdx, %rax
	movss	(%rax), %xmm2
	movq	-40(%rbp), %rdx
	movl	-8(%rbp), %eax
	cltq
	salq	$3, %rax
	addq	%rdx, %rax
	movq	(%rax), %rdx
	movl	-56(%rbp), %eax
	cltq
	salq	$2, %rax
	addq	%rdx, %rax
	movss	(%rax), %xmm0
	mulss	%xmm2, %xmm0
	addss	%xmm1, %xmm0
	cvttss2sil	%xmm0, %eax
	movl	%eax, -12(%rbp)
	addl	$1, -8(%rbp)
.L32:
	movl	-8(%rbp), %eax
	cmpl	-4(%rbp), %eax
	jl	.L33
	movl	-12(%rbp), %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1735:
	.size	_Z9calRowCol6MatrixS_ii, .-_Z9calRowCol6MatrixS_ii
	.globl	_Z3Mul6MatrixS_
	.type	_Z3Mul6MatrixS_, @function
_Z3Mul6MatrixS_:
.LFB1736:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$80, %rsp
	movq	%rsi, %rax
	movq	%rdi, %r10
	movq	%r10, %rsi
	movq	%r11, %rdi
	movq	%rax, %rdi
	movq	%rsi, -64(%rbp)
	movq	%rdi, -56(%rbp)
	movq	%rdx, -80(%rbp)
	movq	%rcx, -72(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movl	-76(%rbp), %edx
	movl	-64(%rbp), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	_Z10InitMatrixii
	movq	%rax, -32(%rbp)
	movq	%rdx, -24(%rbp)
	movl	$0, -40(%rbp)
	jmp	.L36
.L39:
	movl	$0, -36(%rbp)
	jmp	.L37
.L38:
	movl	-36(%rbp), %r8d
	movl	-40(%rbp), %ecx
	movq	-80(%rbp), %rax
	movq	-72(%rbp), %rdx
	movq	-64(%rbp), %rdi
	movq	-56(%rbp), %rsi
	movl	%r8d, %r9d
	movl	%ecx, %r8d
	movq	%rdx, %rcx
	movq	%rax, %rdx
	call	_Z9calRowCol6MatrixS_ii
	movl	%eax, %edx
	movq	-24(%rbp), %rcx
	movl	-40(%rbp), %eax
	cltq
	salq	$3, %rax
	addq	%rcx, %rax
	movq	(%rax), %rcx
	movl	-36(%rbp), %eax
	cltq
	salq	$2, %rax
	addq	%rcx, %rax
	pxor	%xmm0, %xmm0
	cvtsi2ssl	%edx, %xmm0
	movss	%xmm0, (%rax)
	addl	$1, -36(%rbp)
.L37:
	movl	-76(%rbp), %eax
	cmpl	%eax, -36(%rbp)
	jl	.L38
	addl	$1, -40(%rbp)
.L36:
	movl	-64(%rbp), %eax
	cmpl	%eax, -40(%rbp)
	jl	.L39
	movq	-32(%rbp), %rax
	movq	-24(%rbp), %rdx
	movq	-8(%rbp), %rcx
	subq	%fs:40, %rcx
	je	.L41
	call	__stack_chk_fail@PLT
.L41:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1736:
	.size	_Z3Mul6MatrixS_, .-_Z3Mul6MatrixS_
	.section	.rodata
.LC3:
	.string	"\346\225\260\345\200\274:"
	.text
	.globl	_Z6numMul6Matrixi
	.type	_Z6numMul6Matrixi, @function
_Z6numMul6Matrixi:
.LFB1737:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$56, %rsp
	.cfi_offset 3, -24
	movq	%rdi, %rcx
	movq	%rsi, %rax
	movq	%rax, %rbx
	movq	%rcx, -48(%rbp)
	movq	%rbx, -40(%rbp)
	movl	%edx, -52(%rbp)
	leaq	.LC3(%rip), %rax
	movq	%rax, %rsi
	leaq	_ZSt4cout(%rip), %rax
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	%rax, %rdx
	movl	-52(%rbp), %eax
	movl	%eax, %esi
	movq	%rdx, %rdi
	call	_ZNSolsEi@PLT
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	movl	$0, -24(%rbp)
	jmp	.L43
.L46:
	movl	$0, -20(%rbp)
	jmp	.L44
.L45:
	movq	-40(%rbp), %rdx
	movl	-24(%rbp), %eax
	cltq
	salq	$3, %rax
	addq	%rdx, %rax
	movq	(%rax), %rdx
	movl	-20(%rbp), %eax
	cltq
	salq	$2, %rax
	addq	%rdx, %rax
	movss	(%rax), %xmm1
	pxor	%xmm0, %xmm0
	cvtsi2ssl	-52(%rbp), %xmm0
	movq	-40(%rbp), %rdx
	movl	-24(%rbp), %eax
	cltq
	salq	$3, %rax
	addq	%rdx, %rax
	movq	(%rax), %rdx
	movl	-20(%rbp), %eax
	cltq
	salq	$2, %rax
	addq	%rdx, %rax
	mulss	%xmm1, %xmm0
	movss	%xmm0, (%rax)
	addl	$1, -20(%rbp)
.L44:
	movl	-44(%rbp), %eax
	cmpl	%eax, -20(%rbp)
	jl	.L45
	addl	$1, -24(%rbp)
.L43:
	movl	-48(%rbp), %eax
	cmpl	%eax, -24(%rbp)
	jl	.L46
	movq	-48(%rbp), %rax
	movq	-40(%rbp), %rdx
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1737:
	.size	_Z6numMul6Matrixi, .-_Z6numMul6Matrixi
	.section	.rodata
.LC4:
	.string	"  "
	.text
	.globl	_Z11printMatrix6Matrix
	.type	_Z11printMatrix6Matrix, @function
_Z11printMatrix6Matrix:
.LFB1738:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, %rax
	movq	%rsi, %rcx
	movq	%rcx, %rdx
	movq	%rax, -32(%rbp)
	movq	%rdx, -24(%rbp)
	movl	$0, -8(%rbp)
	jmp	.L49
.L52:
	movl	$0, -4(%rbp)
	jmp	.L50
.L51:
	movq	-24(%rbp), %rdx
	movl	-8(%rbp), %eax
	cltq
	salq	$3, %rax
	addq	%rdx, %rax
	movq	(%rax), %rdx
	movl	-4(%rbp), %eax
	cltq
	salq	$2, %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	movd	%eax, %xmm0
	leaq	_ZSt4cout(%rip), %rax
	movq	%rax, %rdi
	call	_ZNSolsEf@PLT
	movq	%rax, %rdx
	leaq	.LC4(%rip), %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	addl	$1, -4(%rbp)
.L50:
	movl	-28(%rbp), %eax
	cmpl	%eax, -4(%rbp)
	jl	.L51
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rax
	movq	%rax, %rsi
	leaq	_ZSt4cout(%rip), %rax
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	addl	$1, -8(%rbp)
.L49:
	movl	-32(%rbp), %eax
	cmpl	%eax, -8(%rbp)
	jl	.L52
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1738:
	.size	_Z11printMatrix6Matrix, .-_Z11printMatrix6Matrix
	.section	.rodata
	.align 8
.LC5:
	.string	"*************************************\n"
	.align 8
.LC6:
	.string	"*              \350\217\234\345\215\225                 *\n"
	.align 8
.LC7:
	.string	"*          1.\347\237\251\351\230\265\347\233\270\345\212\240               *\n"
	.align 8
.LC8:
	.string	"*          2.\347\237\251\351\230\265\347\233\270\345\207\217               *\n"
	.align 8
.LC9:
	.string	"*          3.\347\237\251\351\230\265\347\233\270\344\271\230               *\n"
	.align 8
.LC10:
	.string	"*          4.\347\237\251\351\230\265\346\225\260\344\271\230               *\n"
	.align 8
.LC11:
	.string	"*          5.\351\200\200\345\207\272                   *\n"
.LC12:
	.string	"\350\257\267\350\276\223\345\205\245\347\237\251\351\230\2651"
.LC13:
	.string	"\350\257\267\350\276\223\345\205\245\347\237\251\351\230\2652"
.LC14:
	.string	"\344\270\244\347\237\251\351\230\265\344\270\272"
.LC15:
	.string	"\350\241\214\345\210\227\344\270\215\345\220\214"
.LC16:
	.string	"\347\273\223\346\236\234\344\270\272\357\274\232"
.LC17:
	.string	"\345\217\202\346\225\260\351\224\231\350\257\257"
.LC18:
	.string	"\350\257\267\350\276\223\345\205\245\347\237\251\351\230\265"
.LC19:
	.string	"\350\257\267\350\276\223\345\205\245\346\225\260\345\200\274"
.LC20:
	.string	"\347\237\251\351\230\265\344\270\272\357\274\232"
.LC21:
	.string	"\346\225\260\345\200\274\344\270\272\357\274\232"
.LC22:
	.string	"\346\214\211\345\233\236\350\275\246\347\273\247\347\273\255...."
.LC23:
	.string	"cls"
	.text
	.globl	main
	.type	main, @function
main:
.LFB1739:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$72, %rsp
	.cfi_offset 3, -24
	movq	%fs:40, %rax
	movq	%rax, -24(%rbp)
	xorl	%eax, %eax
	movl	$0, -68(%rbp)
.L70:
	leaq	.LC5(%rip), %rax
	movq	%rax, %rsi
	leaq	_ZSt4cout(%rip), %rax
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	leaq	.LC6(%rip), %rax
	movq	%rax, %rsi
	leaq	_ZSt4cout(%rip), %rax
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	leaq	.LC7(%rip), %rax
	movq	%rax, %rsi
	leaq	_ZSt4cout(%rip), %rax
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	leaq	.LC8(%rip), %rax
	movq	%rax, %rsi
	leaq	_ZSt4cout(%rip), %rax
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	leaq	.LC9(%rip), %rax
	movq	%rax, %rsi
	leaq	_ZSt4cout(%rip), %rax
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	leaq	.LC10(%rip), %rax
	movq	%rax, %rsi
	leaq	_ZSt4cout(%rip), %rax
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	leaq	.LC11(%rip), %rax
	movq	%rax, %rsi
	leaq	_ZSt4cout(%rip), %rax
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	leaq	.LC5(%rip), %rax
	movq	%rax, %rsi
	leaq	_ZSt4cout(%rip), %rax
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	leaq	-68(%rbp), %rax
	movq	%rax, %rsi
	leaq	_ZSt3cin(%rip), %rax
	movq	%rax, %rdi
	call	_ZNSirsERi@PLT
	movl	-68(%rbp), %eax
	cmpl	$1, %eax
	je	.L54
	movl	-68(%rbp), %eax
	cmpl	$2, %eax
	je	.L54
	movl	-68(%rbp), %eax
	cmpl	$3, %eax
	jne	.L55
.L54:
	leaq	.LC12(%rip), %rax
	movq	%rax, %rsi
	leaq	_ZSt4cout(%rip), %rax
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	call	_Z12CreateMatrixv
	movq	%rax, -64(%rbp)
	movq	%rdx, -56(%rbp)
	leaq	.LC13(%rip), %rax
	movq	%rax, %rsi
	leaq	_ZSt4cout(%rip), %rax
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	call	_Z12CreateMatrixv
	movq	%rax, -48(%rbp)
	movq	%rdx, -40(%rbp)
	leaq	.LC14(%rip), %rax
	movq	%rax, %rsi
	leaq	_ZSt4cout(%rip), %rax
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	movq	-64(%rbp), %rdx
	movq	-56(%rbp), %rax
	movq	%rdx, %rdi
	movq	%rax, %rsi
	call	_Z11printMatrix6Matrix
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rax
	movq	%rax, %rsi
	leaq	_ZSt4cout(%rip), %rax
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	movq	-48(%rbp), %rdx
	movq	-40(%rbp), %rax
	movq	%rdx, %rdi
	movq	%rax, %rsi
	call	_Z11printMatrix6Matrix
	movl	-68(%rbp), %eax
	cmpl	$3, %eax
	je	.L56
	cmpl	$3, %eax
	jg	.L73
	cmpl	$1, %eax
	je	.L58
	cmpl	$2, %eax
	je	.L59
	jmp	.L73
.L58:
	movl	-60(%rbp), %edx
	movl	-44(%rbp), %eax
	cmpl	%eax, %edx
	jne	.L60
	movl	-64(%rbp), %edx
	movl	-48(%rbp), %eax
	cmpl	%eax, %edx
	je	.L61
.L60:
	leaq	.LC15(%rip), %rax
	movq	%rax, %rsi
	leaq	_ZSt4cout(%rip), %rax
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	nop
	jmp	.L63
.L61:
	leaq	.LC16(%rip), %rax
	movq	%rax, %rsi
	leaq	_ZSt4cout(%rip), %rax
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	movq	-48(%rbp), %rax
	movq	-40(%rbp), %rdx
	movq	-64(%rbp), %rdi
	movq	-56(%rbp), %rsi
	movq	%rdx, %rcx
	movq	%rax, %rdx
	call	_Z3add6MatrixS_
	movq	%rax, %rcx
	movq	%rdx, %rbx
	movq	%rdx, %rax
	movq	%rcx, %rdi
	movq	%rax, %rsi
	call	_Z11printMatrix6Matrix
	jmp	.L63
.L59:
	movl	-60(%rbp), %edx
	movl	-44(%rbp), %eax
	cmpl	%eax, %edx
	jne	.L64
	movl	-64(%rbp), %edx
	movl	-48(%rbp), %eax
	cmpl	%eax, %edx
	je	.L65
.L64:
	leaq	.LC17(%rip), %rax
	movq	%rax, %rsi
	leaq	_ZSt4cout(%rip), %rax
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	nop
	jmp	.L63
.L65:
	leaq	.LC16(%rip), %rax
	movq	%rax, %rsi
	leaq	_ZSt4cout(%rip), %rax
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	movq	-48(%rbp), %rax
	movq	-40(%rbp), %rdx
	movq	-64(%rbp), %rdi
	movq	-56(%rbp), %rsi
	movq	%rdx, %rcx
	movq	%rax, %rdx
	call	_Z3sub6MatrixS_
	movq	%rax, %rcx
	movq	%rdx, %rbx
	movq	%rdx, %rax
	movq	%rcx, %rdi
	movq	%rax, %rsi
	call	_Z11printMatrix6Matrix
	jmp	.L63
.L56:
	movl	-60(%rbp), %edx
	movl	-48(%rbp), %eax
	cmpl	%eax, %edx
	je	.L67
	leaq	.LC17(%rip), %rax
	movq	%rax, %rsi
	leaq	_ZSt4cout(%rip), %rax
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	jmp	.L63
.L67:
	leaq	.LC16(%rip), %rax
	movq	%rax, %rsi
	leaq	_ZSt4cout(%rip), %rax
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	movq	-48(%rbp), %rax
	movq	-40(%rbp), %rdx
	movq	-64(%rbp), %rdi
	movq	-56(%rbp), %rsi
	movq	%rdx, %rcx
	movq	%rax, %rdx
	call	_Z3Mul6MatrixS_
	movq	%rax, %rcx
	movq	%rdx, %rbx
	movq	%rdx, %rax
	movq	%rcx, %rdi
	movq	%rax, %rsi
	call	_Z11printMatrix6Matrix
	jmp	.L63
.L73:
	nop
.L63:
	jmp	.L69
.L55:
	movl	-68(%rbp), %eax
	cmpl	$4, %eax
	jne	.L69
	movl	$1, -64(%rbp)
	leaq	.LC18(%rip), %rax
	movq	%rax, %rsi
	leaq	_ZSt4cout(%rip), %rax
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	call	_Z12CreateMatrixv
	movq	%rax, -48(%rbp)
	movq	%rdx, -40(%rbp)
	leaq	.LC19(%rip), %rax
	movq	%rax, %rsi
	leaq	_ZSt4cout(%rip), %rax
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	leaq	-64(%rbp), %rax
	movq	%rax, %rsi
	leaq	_ZSt3cin(%rip), %rax
	movq	%rax, %rdi
	call	_ZNSirsERi@PLT
	leaq	.LC20(%rip), %rax
	movq	%rax, %rsi
	leaq	_ZSt4cout(%rip), %rax
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	movq	-48(%rbp), %rdx
	movq	-40(%rbp), %rax
	movq	%rdx, %rdi
	movq	%rax, %rsi
	call	_Z11printMatrix6Matrix
	leaq	.LC21(%rip), %rax
	movq	%rax, %rsi
	leaq	_ZSt4cout(%rip), %rax
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	movl	-64(%rbp), %eax
	movl	%eax, %esi
	leaq	_ZSt4cout(%rip), %rax
	movq	%rax, %rdi
	call	_ZNSolsEi@PLT
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	movl	-64(%rbp), %edx
	movq	-48(%rbp), %rcx
	movq	-40(%rbp), %rax
	movq	%rcx, %rdi
	movq	%rax, %rsi
	call	_Z6numMul6Matrixi
	movq	%rax, %rcx
	movq	%rdx, %rbx
	movq	%rdx, %rax
	movq	%rcx, %rdi
	movq	%rax, %rsi
	call	_Z11printMatrix6Matrix
.L69:
	leaq	.LC22(%rip), %rax
	movq	%rax, %rsi
	leaq	_ZSt4cout(%rip), %rax
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	call	getchar@PLT
	call	getchar@PLT
	leaq	.LC23(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	movl	-68(%rbp), %eax
	cmpl	$1, %eax
	je	.L70
	movl	-68(%rbp), %eax
	cmpl	$2, %eax
	je	.L70
	movl	-68(%rbp), %eax
	cmpl	$3, %eax
	je	.L70
	movl	-68(%rbp), %eax
	cmpl	$4, %eax
	je	.L70
	movl	$0, %eax
	movq	-24(%rbp), %rdx
	subq	%fs:40, %rdx
	je	.L72
	call	__stack_chk_fail@PLT
.L72:
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1739:
	.size	main, .-main
	.type	_Z41__static_initialization_and_destruction_0ii, @function
_Z41__static_initialization_and_destruction_0ii:
.LFB2244:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	cmpl	$1, -4(%rbp)
	jne	.L76
	cmpl	$65535, -8(%rbp)
	jne	.L76
	leaq	_ZStL8__ioinit(%rip), %rax
	movq	%rax, %rdi
	call	_ZNSt8ios_base4InitC1Ev@PLT
	leaq	__dso_handle(%rip), %rax
	movq	%rax, %rdx
	leaq	_ZStL8__ioinit(%rip), %rax
	movq	%rax, %rsi
	movq	_ZNSt8ios_base4InitD1Ev@GOTPCREL(%rip), %rax
	movq	%rax, %rdi
	call	__cxa_atexit@PLT
.L76:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2244:
	.size	_Z41__static_initialization_and_destruction_0ii, .-_Z41__static_initialization_and_destruction_0ii
	.type	_GLOBAL__sub_I__Z12CreateMatrixv, @function
_GLOBAL__sub_I__Z12CreateMatrixv:
.LFB2245:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$65535, %esi
	movl	$1, %edi
	call	_Z41__static_initialization_and_destruction_0ii
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2245:
	.size	_GLOBAL__sub_I__Z12CreateMatrixv, .-_GLOBAL__sub_I__Z12CreateMatrixv
	.section	.init_array,"aw"
	.align 8
	.quad	_GLOBAL__sub_I__Z12CreateMatrixv
	.hidden	__dso_handle
	.ident	"GCC: (Ubuntu 11.3.0-1ubuntu1~22.04.1) 11.3.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	1f - 0f
	.long	4f - 1f
	.long	5
0:
	.string	"GNU"
1:
	.align 8
	.long	0xc0000002
	.long	3f - 2f
2:
	.long	0x3
3:
	.align 8
4:
