#include "main.h"
#include "stdio.h"

/**
 *puts2 -function
 *@str:char pointer
 *Description:a function that prints every other character of string
 *Return:nothing
 */
void puts2(char *str)
{
	if (str != NULL)
	{
		int i = 0;

		while (str[i] != '\0')
		{
			if (i % 2 == 0)
				_putchar(str[i]);
			i++;
		}
		_putchar('\n');
	}
}
