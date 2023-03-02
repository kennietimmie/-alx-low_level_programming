#include "main.h"
/**
 * rot13 - encodes a string. 
 * @s - pointer to string.
 * 
 * Return: pointer to string.
 */
char *rot13(char *s)
{
	int length = 0, limit;
	char arr1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char arr2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (s[length] != '\0')
	{
		for (limit = 0; arr1[limit] != '\0'; limit++)
		{
			if (s[length] == arr1[limit])
			{
				s[length] = arr2[limit];
				break;
			}
		}
		length++;
	}
	return (s);
}
