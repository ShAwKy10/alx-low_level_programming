#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: 'This program checks the value of the variable n'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
        int n;
	int m;
	int flag;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
	flag = n;
        /* your code goes there */

        if (n > 0)
        {
                while (flag >= 10)
		{
			flag = flag - 10;
		}

		m = flag;
        }

        else if (n < 0)
        {
                while (flag <= -10)
		{
			flag = flag + 10;
		}

		m = flag;
        }

        else
        {
                m = 0;
        }

	printf ("Last digit of %d is %d ", n, m);

	if (m == 0)
	{
		printf("and is 0\n");
	}
	
	else if (m > 5)
	{
		printf("and is greater than 5\n");
	}

	else if ((m < 6) && (m != 0))
	{
		printf("and is less than 6 and not 0\n");
	}

        return (0);
}
