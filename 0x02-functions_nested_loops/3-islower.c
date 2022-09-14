#include "main.h"

/**
 * _slower - enrty point, int ipnut type and int arg
 *
 * @c: checks for lowercase character and returns different int
 *
 * Return 1 or 0
 */
int _islower(int c)
{
	if (c > 96 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}
