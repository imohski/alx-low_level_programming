#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Description print A-Z and a-z
 *
 * Return: Always 0
 */
int main(void)
{
	char abc = 'a';
	char ABC = 'A';

	/*print a-z*/
	while (abc <= 'z')
	{
		putchar(abc);
		++abc;
	}

	/*print A-Z*/
	while (ABC <= 'Z')
	{
		putchar(ABC);
		++ABC;
	}
	putchar('\n');

	return (0);
}
