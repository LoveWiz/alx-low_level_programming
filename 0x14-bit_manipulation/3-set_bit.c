#include "main.h"

/**
 * set_bit: Reurns 1 or -1
 * @n: pointer to bit number to set
 * @index: index at which to set bit value
 * Returns: 1 if it worked, or -1 if an error occurred
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	set = 1 << index;
	*n = *n | set;

	return (1);
}
