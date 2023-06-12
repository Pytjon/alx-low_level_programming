#include "main.h"
/**
 * get_endianness - checls the endianness of the machine
 * Return: 0(big), 1(little)
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	return (*c);
}
