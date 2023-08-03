#include "main.h"

/**
 * get_endianess - returns pointer
*/

int get_endianness(void)
{
	char *y;
	int x = 1;

	y = (char *)&x;

	return (*y);
}
