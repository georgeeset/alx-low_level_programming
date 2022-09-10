#include <stdio.h>

/**
* main - entry point
* Return: 0
* prints all all small letters
*/
int main(void)
{
	unsigned char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar("/n");
	return (0);
}
