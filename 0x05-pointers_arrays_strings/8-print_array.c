<<<<<<< HEAD
#include "main.h"
#include <stdio.h>
/**
 * print_array - prints array
 * @a: pointer of array
 * @n: how may times to print
 *
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
=======
#include "main.h"
#include <stdio.h>
/**
 * print_array - prints array
 * @a: pointer of array
 * @n: how many times to prints
 *
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
>>>>>>> 6c3d00b24470fc3a2d9b93da3c10160b84aad559
