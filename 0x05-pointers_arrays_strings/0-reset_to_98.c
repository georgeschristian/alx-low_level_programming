#include "main.h"
#include <stdio.h>

/**
 *reset_to_98 -function
 *@n:integer pointer
 *Description:a function that takes a pointer to an int as parameter
 *Returns:nothing
 */

void reset_to_98(int*n)
{
	if (n != NULL)
		*n = 98;
}
