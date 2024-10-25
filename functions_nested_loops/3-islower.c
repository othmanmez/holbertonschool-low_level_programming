#include "main.h"

int _islower(int c)
{
	/* Check if c is in the range of lowercase letters 'a' to 'z'*/
	if (c >= 'a' && c <= 'z')
	{
		return (1); /* Return 1 if c is lowercase*/
	}
	{
		return (0); /* Return 0 otherwise*/

	}
}
