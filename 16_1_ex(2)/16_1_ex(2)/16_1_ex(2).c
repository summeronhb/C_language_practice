#include <stdio.h>

int main()
{
	int i, j;
	int arrA[2][4] = {
		{1,2,3,4},
		{5,6,7,8}
	};

	int arrB[4][2];

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 4; j++)
			arrB[j][i] = arrA[i][j];
	}

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 4; j++)
			printf("%d ", arrA[i][j]);
	printf("\n");
	}

	printf("\n");

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 2; j++)
			printf("%d ", arrB[i][j]);
	printf("\n");
	}


}