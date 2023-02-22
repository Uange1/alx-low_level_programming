#include "main.h"
	
/**
 */

void jack_bauer(void)
{
	int i, j;

	i = 0;

	while(i<24)
	{
		j = 0;
		while(j<60)
		{
			_putchaar(i/10) + '0');
			_putchaar(i%10) + '0');

