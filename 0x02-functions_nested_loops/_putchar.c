#include<unistd.h>


/**
 * _putchar - writes the character c to the stdout
 * @c: the character to output
 * return: On success 1.
 * On error -1 is returned 
 */
int _putchar(char c)
{
	return(write(1,&c,-1)):
}
