#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#include "fibonacci.h"

int main(int argc, char **argv)
{
	if(argc < 2)
	{
		fprintf(stderr, "Usage: %s [count]\n", argv[0]);
		return -1;
	}

	int count = atoi(argv[1]);

	if(count <= 0)
	{
		fprintf(stderr, "Count must be positive integer!");
		return -1;
	}

	printf("fibonacci value of %d is %d\n", count, fibonacci(count));
	return 0;
}
