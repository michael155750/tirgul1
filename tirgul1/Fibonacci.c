#include "Fibonacci.h"
#include <stdlib.h>
#include <limits.h>

/*data base for fibonnaci numbers*/
static ull_t *s_val;
const size_t INIT_SIZE = 2;
/*position of fibonacci number*/
static size_t s_index = 1;

ull_t Fibonacci(size_t n)
{
	if (s_index + 1 == INIT_SIZE)
	{
		s_val = (ull_t *)malloc(INIT_SIZE*sizeof(ull_t));
		if (!s_val)
		{
			printf("not enough memory!\n");
			exit(-1);
		}
		s_val[0] = 0;
		s_val[1] = 1;
	}

	if (n <= s_index)
	{
		return s_val[n];
	}

	s_val = (ull_t *)realloc(s_val,(n + 1) * sizeof(ull_t));
	if (!s_val)
	{
		printf("not enough memory!\n");
		exit(-1);
	}
	for (size_t i = s_index + 1; i <= n; ++i)
	{
		s_val[i] = s_val[i - 1] + s_val[i - 2];
		if (s_val[i] < s_val[i - 1] || s_val[i - 1] == 0)
		{
			s_val[i] = 0;
		}
	}
	
    return s_val[n];
}
