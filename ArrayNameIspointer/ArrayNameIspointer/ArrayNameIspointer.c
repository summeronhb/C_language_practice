#include <stdio.h>

int main()
{
	int arr[3] = { 15,25,35 };
	int* ptr = &arr;
	// ptr�� �������̰� arr[0]�� �ּҰ��� �����Ѵ�.

	printf("%d %d \n", ptr[0], arr[0]);
	printf("%d %d \n", ptr[1], arr[1]);
	printf("%d %d \n", ptr[2], arr[2]);
	printf("%d %d \n", *ptr, *arr);
	//*arr�� arr[0]�� ����Ŵ

	return 0;
}