	.option nopic
	.attribute arch, "rv32i2p1_m2p0"
	.attribute unaligned_access, 0
	.attribute stack_align, 16
	.text
	.align	2
	.globl	digitsum
	.type	digitsum, @function
	
digitsum:

	#------Your code starts here------
	#LHS: a0, RHS: a1

	#Load return value to reg a0
	#------Your code ends here------

	#Ret
	jr	ra
	.size	digitsum, .-digitsum
	.ident	"GCC: (g2ee5e430018) 12.2.0"
