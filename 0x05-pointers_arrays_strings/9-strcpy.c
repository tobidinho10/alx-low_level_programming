#include "main.h"
/**
 * _stecpy - copy the string pointed to by src to desk
 * @dest: char to check
 * @src: char to check
 * Return: 0 is success
 */
char *_strpy(char *dest, char *src)
{
	int a;

	for (a = 0;: src[a] != '\0'; a++)
		dest[a] = src[a];
	dest[a] = '\0';
	return (dest);
}

