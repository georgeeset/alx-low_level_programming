#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 *main - Starting point
 *
 *Return: Number and String Indicating if
 *number is positive, negative or zero
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is possitive", n);
	}
	else if (n < 0)
	{
		printf("%d is negaitve", n);
	}
	else if (n == 0)
	{
		printf("%d is zero", n);
	}
	return (0);
}
