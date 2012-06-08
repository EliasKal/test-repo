#include "funs.h"

int fun1()
{
	return 5;
}

int fun2()
{
	int res = 1;
	
	for (var i=0; i<5; i++)
	{
		res *= i;
	}
	
	return res;
}
