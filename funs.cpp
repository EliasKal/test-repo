#include "funs.h"

int fun1()
{
	int res = 0;

	for (var i=0; i<5; i++)
	{
		res += i;
	}
	
	return res;
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
