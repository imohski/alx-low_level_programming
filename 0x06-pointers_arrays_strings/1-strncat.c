#include "main.h"
<<<<<<< HEAD

/**
 * _strncat - concatinate 2 strings.
 * *@dest: first string.
 * *@src: second string.
 * *@n: the number of bytes to use from src.
 * *Return: string.
=======
/**
 * _strncat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes used from src.
 * Return: the pointer to dest.
>>>>>>> 7fc1439042afd9eab29b10369f56935674207582
 */
char *_strncat(char *dest, char *src, int n)
{
<<<<<<< HEAD
	int i = 0, k = 0;

	while (dest[i] != '\0')
		i++;
	while (src[k] != '\0' && n > k)
	{
		dest[i] = src[k];
		k++;
		i++;
	}
	if (n > 0)
	{
		dest[i] = '\0';
	}
=======
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

>>>>>>> 7fc1439042afd9eab29b10369f56935674207582
	return (dest);
}
