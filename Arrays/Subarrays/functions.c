#include "main.h"


/**
 * ShowIntegerArray - show a table
 * @array: (int) the array
 * @length: (int) the lenght of the array
 *
 * Description: This function display an array
 * Return: An integer
 */

int ShowIntegerArray(int array[], int length)
{
	int i = 0;

	for (; i < length; i++)
	{
		printf(" [%d] ", array[i]);

		(i + 1 == length)? printf("") : printf("-");
	}

	return (0);
}
