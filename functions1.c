#include "main.h"
/**
  * printUnsigned - print Unsigned
  * @number:unsigned int
  * Return: length number
 **/
int printUnsigned(unsigned int number)
{
	int count = 0;

	if (number > 9)
		count += printUnsigned(number / 10);
	putchar('0' + (number % 10));
	count++;
	return (count);
}
