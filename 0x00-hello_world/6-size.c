#include <stdio.h>

/**
 * main - Entry point
 * Return:Always 0 (Success)
 */
int main(void)
{
	int i;
	long int I;
	long long int l;
	float f;
	char c;

	printf("Size of a char:%lu byte(s)\n", sizeof(c));
	printf("Size of an int:%lu byte(s)\n", sizeof(i));
	printf("Size of a long int:%lu byte(s)\n", sizeof(I));
	printf("Size of a long long int:%lu byte(s)\n", sizeof(l));
	printf("Size of a float:%lu byte(s)\n", sizeof(f));

	return (0);
}
