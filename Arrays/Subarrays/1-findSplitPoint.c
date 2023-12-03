#include "main.h"

/**
 * FindSplitPoint - a function that split an array
 * @array: (int), the array
 * @length: (int), the length
 *
 * Description: This function split an array into two others,
 * and the sum of the values of these two is perfectly equals
 * Return: 1 on failure, 0 on success
 */

int FindSplitPoint(int array[], int length)
{
	int i = 0, j = 0, sum = 0, middleSum = 0, firstIndex = 0;

	for (; i < length; i++)
		sum += array[i];

	/* Verification if the sum of all the numbers is an even number*/
	if (!((sum / 2) * 2 == sum))
	{
		printf("Not possible!");
		return (1);
	}

	for (i = 0; i < length; i++)
	{
		middleSum += array[i];

		/* Verification to know if the subarrays researched exist*/
		if (middleSum > sum / 2)
			break;
		if (middleSum == sum / 2)
		{
			firstIndex = i;
			break;
		}
	}

	/* Get out the program if there is no elligible subarrays*/
	if (firstIndex == 0)
	{
		printf("Not possible!");
		return (1);
	}

	printf("VOici l'index : %d\n", firstIndex);


	int subarrayOne[firstIndex + 1];
	int subarrayTwo[length - firstIndex - 1];

	for (i = 0; i <= firstIndex; i++)
		subarrayOne[i] = array[i];

	for (j = 0; i < length; i++, j++)
		subarrayTwo[j]  = array[i];

	ShowIntegerArray(subarrayOne, firstIndex + 1);
	printf("---------");
	ShowIntegerArray(subarrayTwo, length - firstIndex - 1);

	return (0);
}
