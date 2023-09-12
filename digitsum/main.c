#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "digitsum.h"

int main(int argc, char **argv)
{
	if(argc < 3)
	{
		fprintf(stderr, "Usage: %s [lhs] [rhs]\n", argv[0]);
		return -1;
	}

	int lhs = atoi(argv[1]);
	int rhs = atoi(argv[2]);

	printf("digitsum of %d, %d = %d\n", lhs, rhs, digitsum(lhs, rhs));
}
