/**
 * _strncat - concatenates two string limit to n byte size.
 * @dest: destination string.
 * @src: source string.
 * @n: bytes size.
 *
 * Return: pointer to destination.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len  = 0, src_len = 0;

	while (dest[dest_len])
	{
		dest_len++;
	}
	while (src_len < n)
	{
		dest[dest_len] = src[src_len];
		if (src[src_len] == '\0')
		{
			break;
		}
		src_len++;
		dest_len++;
	}
	return (dest);
}
