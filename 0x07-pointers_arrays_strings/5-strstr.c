#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: the string to be searched
 * @needle: The substring to be located
 *
 * Return: If the substring is located - a pointer
 * to the beginning of the located substring
 * if the substring is not located, NULL.
 */

char *_strstr(char *haystack, char *needle)
{
	char *bhaystack;
	char *pneedle;

	while (*haystack != '\0')
	{
		bhaystack = haystack;
		pneedle = needle;

		while (*haystack != '\0' && *pneedle != '\0' && *haystack == *pneedled)
		{
			haystack++;
			pneedle++;
		}
		if (!*pneedle)
			return (bhaystack);
	}
	return (0);
}
