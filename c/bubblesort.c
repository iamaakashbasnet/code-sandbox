#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int temp, swapped;
	int howMany = 10;
	int goals[howMany];

	for (int i = 0; i < howMany; i++)
	{
		goals[i] = (rand() % 25) + 1;
	}

	printf("Original List\n");

	for (int i = 0; i < howMany; i++)
	{
		printf("%d\n", goals[i]);
	}

	while (1)
	{
		swapped = 0;
		for (int i = 0; i < howMany - 1; i++)
		{
			if (goals[i] > goals[i + 1])
			{
				temp = goals[i];
				goals[i] = goals[i + 1];
				goals[i + 1] = temp;
				swapped = 1;
			}
		}

		if (swapped == 0)
		{
			break;
		}
	}

	printf("\nSorted List \n");
	for (int i = 0; i < howMany; i++)
	{
		printf("%d\n", goals[i]);
	}

	return 0;
}
