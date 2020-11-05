#include <stdio.h>

int main()
{
	int i, j;
	int sum;
	int arr[5][5];

	for (i = 0; i < 4; i++)
	{
		sum = 0;
		for (j = 0; j < 4; j++)
		{
			printf("%d 학생 점수 입력: ", i);
			scanf("%d", &arr[i][j]);
			sum += arr[i][j];
		}
		arr[i][4] = sum;
	}

	for (j = 0; j < 5; j++)
	{
		sum = 0;
		for (i = 0; i < 4; i++)
		{
			sum += arr[i][j];
		}
		arr[4][j] = sum;
	}

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%d   ", arr[i][j]);
		}
		printf("\n");
	}

	

}