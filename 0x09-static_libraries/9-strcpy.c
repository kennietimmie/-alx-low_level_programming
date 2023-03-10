/**
 * _strcpy - Copy string from src to dest.
 * @dest: String destination.
 * @src: String source
 *
 * Return: Always char *
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}

