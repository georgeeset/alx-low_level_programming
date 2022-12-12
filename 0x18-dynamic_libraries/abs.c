#include "main.h"

/**
 * _abs - calculate absolute value
 * of an integer.
 *
 * @i: input integer.
 *
 * Return: intger absolute value
 */

int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	return (i * -1);
}
