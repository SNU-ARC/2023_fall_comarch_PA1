#include "fibonacci.h"

int fibonacci(const unsigned int n)
{
	if(n <= 2) return 1;
	return (fibonacci(n-1) + fibonacci(n-2));
}
