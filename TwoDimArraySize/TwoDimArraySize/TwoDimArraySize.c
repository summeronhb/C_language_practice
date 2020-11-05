#include <stdio.h>

int main()
{
	int arr1[3][4];
	int arr2[7][9];

	//int는 4바이트이기 때문에

	printf("3행 4열의 2차원 배열: %d \n", sizeof(arr1));
	printf("7행 9열의 2차원 배열: %d \n", sizeof(arr2));

}