/**
 * swap_int - swaps the values of two integers
 *		using two input parameters
 *
 * @a: integer
 * @b: integer
 *
 * Return:
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
