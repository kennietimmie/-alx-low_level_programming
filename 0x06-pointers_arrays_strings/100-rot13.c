#include "main.h"
/**
 * rot13 - encodes a string using rot13 formula. 
 * @s - pointer to string.
 * 
 * Return: pointer to s.
 */
char *rot13(char *s)
{
	int length = 0, key;
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (s[length] != '\0')
	{
		for (key = 0; input[key] != '\0'; key++)
		{
			if (s[length] == input[key])
			{
				s[length] = output[key];
				break;
			}
		}
		length++;
	}
	return (s);
}

