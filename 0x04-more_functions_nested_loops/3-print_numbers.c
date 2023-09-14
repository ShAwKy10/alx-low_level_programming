/**
 * print_numbers - Prints numbers follwed by new line
 *
 * Return: void
 */
void print_numbers(void)
{
	int n;
	int newL = '\n';
	int arr[10] = {'0', '1', '2', '3', '4',
			'5', '6', '7', '8', '9'
			};

	for (n = 0; n < 10; n++)
	{
		putchar((char)arr[n]);
	}

	putchar((char)newL);

}
