#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - creates a passpword for the sum of 2772
 * Return: 0;
 */
int main(void)
{
	int keynumber, symbol, checksum;

	srand(time(NULL));
	checksum = 2772;
	keynumber = 0;
	while (keynumber < (checksum - 122))
	{
		symbol = (rand() % (122 - 97 + 1)) + 97;/*to print lower case letter*/
		printf("%c", symbol);
		keynumber = keynumber + symbol;
	}
	symbol = checksum - keynumber;
	printf("%c", symbol);
	return (0);
}
