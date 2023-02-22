#include "main.h"

/**
 * _islower - check if char is lowercase
 * @c: is the char to be chacked
 * Return: 1 if car is lowercase, otherwise 0.
 */

int _islower(intc)
{
	if(c >= 'a' && c <= 'z')
		return(1);
	else
		return(0);

}
