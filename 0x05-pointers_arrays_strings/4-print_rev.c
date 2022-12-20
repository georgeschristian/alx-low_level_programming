#include "main.h"
#include <stdio.h>

/**
 * rev_string -function
 * @s:pointer
 * Description:a function that reverses a string.
 * Return:nothing
 */
void print_rev(char *s)
{
	if (s != NULL)
	{
		int t = 0;
		int i;

		while (s[t] != '\0')
			t++;
		i = t - 1;

		while (i >= 0)
		{
			_putchar(s[i]);
			i--;
		}
		_putchar('\n');
	}
}
