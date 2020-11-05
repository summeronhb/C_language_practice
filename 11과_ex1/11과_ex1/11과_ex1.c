#include <stdio.h>

int main(void)
{
	int arr[5];
	int max, min, sum, i;

	for (i = 0; i < 5; i++)
	{
		printf("입력: ");
		scanf("%d", &arr[i]);
	}

	max = min = sum = arr[0];

	for (i = 1; i < 5; i++)
	{
		sum += arr[i];
		
		if (max < arr[i])
			max = arr[i];
		// else( max > arr[i])-> max값 변경없이 그대로 빠져나간다.

		if (min > arr[i])
			min = arr[i];
	}
	// for 문 빠져나가도, main 함수 전역에서 선언된 변수이므로 값이 그대로 저장되어있다!

	printf("최댓값: %d \n", max);
	printf("최솟값: %d \n", min);
	printf("총 합: %d \n", sum);
	
	return 0;
	
}
