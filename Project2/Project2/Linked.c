#include <stdio.h>

int main2(void)
{
	int arr1[4] = { 1,2,3,4 };
	int arr2[] = { 1,2,3,4,5,6,7 };
	int arr3[5] = { 1,2 };
	int ar1Len, ar2Len, ar3Len, i;

	printf("arr1�� ����Ʈ ������ ũ��: %d \n", sizeof(arr1));
	printf("arr2�� ����Ʈ ������ ũ��: %d \n", sizeof(arr2));
	printf("arr3�� ����Ʈ ������ ũ��: %d \n", sizeof(arr3));
	
	
	//sizeof�� ����Ʈ ������ �迭�� ũ���̹Ƿ� �迭�� ���� �����:
	ar1Len = sizeof(arr1)/ sizeof(int); 
	ar2Len = sizeof(arr2)/ sizeof(int);
	ar3Len = sizeof(arr3)/ sizeof(int);

	printf("arr1�� ����: %d \n", ar1Len);
	printf("arr2�� ����: %d \n", ar2Len);
	printf("arr3�� ����: %d \n", ar3Len);

	for (i = 0; i < ar1Len; i++)
		printf("%d ", arr1[i]);
	printf("\n");

	for (i = 0; i < ar2Len; i++)
		printf("%d ", arr2[i]);
	printf("\n");

	for (i = 0; i < ar3Len; i++)
		printf("%d ", arr3[i]);
	printf("\n");

		
	return 0;



	

}