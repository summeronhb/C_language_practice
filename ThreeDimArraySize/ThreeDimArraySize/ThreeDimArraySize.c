#include <stdio.h>

int main()
{
	int arr1[2][3][4];
	double arr2[5][5][5];
	printf("2높이 3행 4열: %d \n", sizeof(arr1));
	printf("5높이 5행 5열: %d \n", sizeof(arr2));
	return 0;
}