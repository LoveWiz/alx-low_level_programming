#include "main.h"

/**
 * get_bit returns value of bit
 * @n: pointer to bit number to set
 * @index: index at which to set bit value
 * Returns: the value of the bit at index index or -1
 * 			if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
