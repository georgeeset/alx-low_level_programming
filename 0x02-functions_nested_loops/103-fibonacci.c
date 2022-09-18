#include <stdio.h>

/**
 * main - Prints the add on the evet-valued
 * fibotcci numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	long int t1, t2, nt, cnt;

	t1 = 1;
	t2 = 2;
	nt = cnt = 0;
	while (nt <= 4000000)
	{
		nt = t1 + t2;
		t1 = t2;
		t2 = nt;
		if ((t1 % 2) == 0)
		{
			cnt += t1;
		}
	}
	printf("%ld\t", cnt);
	return (0);
}
