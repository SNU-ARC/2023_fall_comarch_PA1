#include "digitsum.h"

int digitsum(const int lhs_, const int rhs_)
{
	int lhs = lhs_;
	int rhs = rhs_;
	int sum = 0;
	
	while(lhs != 0)
	{
		sum += lhs%10;
		lhs = lhs/10;
	}
	while(rhs != 0)
	{
		sum += rhs%10;
		rhs = rhs/10;
	}
	return sum;
}
