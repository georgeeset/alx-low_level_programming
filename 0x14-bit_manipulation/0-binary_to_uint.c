#include "main.h"
/**
 * binary_to_uint - convert string of 1 & 0 to unsigned int
 * @b: string containing binary number
 * Return: converted number or zero if failed
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int ram = 0, raw = 0;
	int ctr = 0;

	if (b)
	{
		while (b[ctr] != '\0')
		{
			if (b[ctr] == '1')
			{
				ram = ram << 1;
				raw = 0x01;
				ram = ram | raw;
			}
			else if (b[ctr] == '0')
			{
				ram = ram << 1;
			}
			else
				return (0);
			ctr++;
		}
	}
	else
		ram = 0;
	return (ram);
}
