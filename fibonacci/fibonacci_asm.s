	.option nopic
	.attribute arch, "rv32i2p1_m2p0"
	.attribute unaligned_access, 0
	.attribute stack_align, 16
	.text
	.align	2
	.globl	fibonacci
	.type	fibonacci, @function
	
fibonacci:

	#------Your code starts here------
	# fibonacci number : a0

	# Load return value to reg a0
	#------Your code ends here------

	jr	ra
	.size	fibonacci, .-fibonacci
	.ident	"GCC: (g2ee5e430018) 12.2.0"
