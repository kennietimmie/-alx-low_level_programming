#include "main.h"
#include <stdlib.h>

/**
 * _strdup - allocate space and copy string
 * @str: string to copy.
 *
 * Return: if successful pointer to copied string otherwise NULL
 */
char *_strdup(char *str)
{
	char *cstr;
	int i = 0;

	if (str == NULL)
		return (NULL);
	while (*(str + i) != '\0')
		i++;
	cstr = malloc(sizeof(char) * i);
	i = 0;
	if (cstr != NULL)
		while (*(str + i) != '\0')
		{
			*(cstr + i) = *(str + i);
			i++;
		}
	else
		return (NULL);
	return (cstr);
}

