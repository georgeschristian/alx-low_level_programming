#include "main.h"
#include <stdio.h>

/**
 *_strlen - function
 *@s:char printer
 *Description:a function that returns the length of a string
 *Returns:leng of @s or 0 if @s is null
 */
int _strlen(char *s)
{
	int i = 0;

	if (s == NULL)
		return (0);
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
