#include "main.h"

int _sqrt_recursive(int n, int s)
{
	int ss;
    
	if (n < 0)
		return -1;
	if (n == 0 || n == 1)
		return n;

	ss = (s + n / s) / 2;

	if (ss == s)
		return s;
	else
		return _sqrt_recursive(n, ss);
}

int _sqrt_recursion(int n)
{
	return _sqrt_recursive(n, n); 
}
