#include "main.h"
#include <stdio.h>

/**
 * swap_int - function
 * @a:integer pointer
 * @b:integer pointer
 * Description:a function that swap the values of two integers
 */
void swap_int(int *a, int *b)
{
	if (a != NULL && b != NULL)
	{
		int t = *a;
		*a = *b;
		*b = t;
	}
}
