#include <stdio.h>

int main()
{
	int arr[3] = { 11,22,33 }; 
	int* ptr = arr; // ptr�� arr�� ����Ű�� �������̴�.
	// int * ptr = arr[0]; �� ���� �����̴�.
	// arr ����� ���� ���� �����Ѵٴ� ���̴�.
	printf("%d %d %d \n", *ptr, *(ptr + 1), *(ptr + 2));
	/* ptr+1�� ptr�� ����Ű�� �ּҰ����ٰ� size of(int)*1 ��ŭ ���� ���ε�,
	�տ� *�� ���� ���ϹǷ� arr[1]���� �ҷ����� ���̴�.*/

	printf("%d ", *ptr); ptr++; // *ptr�� arr[0]�� ����Ų��.
	printf("%d ", *ptr); ptr++; // {33}�� ����Ų��.
	printf("%d ", *ptr); ptr--; // {22}�� ����Ų��.
	printf("%d ", *ptr); ptr--; // ������� ���ƿ�.
	printf("%d ", *ptr); printf("\n");
	return 0;


}