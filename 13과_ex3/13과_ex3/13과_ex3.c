#include <stdio.h>

int main()
{
	int arr[5] = { 1,2,3,4,5 };
	int* ptr = arr + 4;
	//int* ptr = &arr[4]; 과 같은 코드이다.
	int i;
	int sum = 0;
	for (i = 0; i < 5; i++)
	{
		sum += *(ptr--);
	}
	printf("%d ", sum);
	return 0;
	
}