#include "main.h"
/**
* _sqrt_recursion_helper - helper function to find the natural square root
*@n: number to find the square root of
*@i: current guess
*
*
*/
int _sqrt_recursion_helper(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt_recursion_helper(n, i + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: number to find the square root of
 *
 * Return: natural square root of n, or -1 if none exists
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_recursion_helper(n, 0));
}
