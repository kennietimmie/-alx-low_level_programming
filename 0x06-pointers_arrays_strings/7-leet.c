#include "main.h"
/**
 * leet - encodes a string.
 * @s: pointer to string.
 *
 * Return: pointer to s.
 */
char *leet(char *s)
{
	int s_count, l_count;
	char letters[] = "aAeEoOtTlL";
	char nums[] = "4433007711";

	s_count = 0;
	while (s[s_count] != '\0')
	{
		l_count = 0;
		while (l_count < 10)
		{
			if (letters[l_count] == s[s_count])
			{
				s[s_count] = nums[l_count];
			}
			l_count++;
		}
		s_count++;
	}
	return (s);
}
