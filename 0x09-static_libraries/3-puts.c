/**
 * _puts - Print string with newline
 * @str: String
 *
 * Return: void
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	if (!*str)
		_putchar(10);
}

