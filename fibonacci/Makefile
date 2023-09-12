cc = riscv32-unknown-elf-gcc
target = fibonacci

c_srcs = main.c
asm_srcs = fibonacci_asm.s
objects = $(c_srcs:.c=.o) $(asm_srcs:.s=.o)

c_flags = -Wall -Werror -std=c99
ld_flags = 

all: $(target)

$(target):	$(objects)
		$(cc) $(objects) -o $(target)

.c.o:
	$(cc) $(c_flags) -c $< -o $@

.s.o:
	$(cc) -c $< -o $@

clean:
	rm -f $(objects) $(target)

#Usage:
# $> make
# $> spike /opt/riscv/bin/pk ./fibonacci 4 #Try different numbers!
