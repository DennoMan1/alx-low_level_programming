#include "main.h"

/**
 * clear_bit - sets the value of a given bit to 0
 * @j: pointer to the number to change
 * @index: index of the bit to clear
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *j, unsigned int index)
{
	if (index > 63)
		return (-1);

	*j = (~(1UL << index) & *j);
	return (1);
}

