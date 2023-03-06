/**
 * _memset - a function that fills
 *         memory with a constant byte
 *
 * Return: A pointer to the filled memory
 *         area @s
*/

char *_memset(char *s, char b, unsigned int n)
{

	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}