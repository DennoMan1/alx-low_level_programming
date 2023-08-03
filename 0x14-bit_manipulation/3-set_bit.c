#include "main.h"

/**
 * set_bit - sets a bit at a given index to 1
 * @j: pointer to the number to change
 * @index: index of the bit to set to 1
 *
 * Return: 1 for success, else -1 for failure
 */
int set_bit(unsigned long int *j, unsigned int index)
{
	if (index > 63)
		return (-1);

	*j = ((1UL << index) | *j);
	return (1);
}
