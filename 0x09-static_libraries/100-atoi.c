/**
 * _atoi - convert array to integer.
 * @s: character
 *
 * Return: numbers from string if is successful otherwise -1.
 */
int _atoi(char *s)
{
	unsigned int i = 0, acc = 1, num = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			num = (num * acc) + (s[i] - 48);
		}
		acc = 10;
		i++;
	}
	return (num);
}

