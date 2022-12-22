#include "main.h"
#include <stdio.h>

/**
 *print_array -function
 *@a:integer pointer
 *@n:integer
 *Description:a function that n element of an array
 *Return:nothing
 */
void print_array(int *a, int n)
{
	if (a != NULL && n > 0)
	{
		int i;

		for (i = 0; i < n; i++)
		{
			print("%d", a[i]);
			if (i != n - 1)
				print(", ");
		}
	}
	printf("\n");
}
