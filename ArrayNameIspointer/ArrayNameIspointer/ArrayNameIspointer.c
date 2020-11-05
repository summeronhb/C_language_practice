#include <stdio.h>

int main()
{
	int arr[3] = { 15,25,35 };
	int* ptr = &arr;
	// ptr은 포인터이고 arr[0]의 주소값을 저장한다.

	printf("%d %d \n", ptr[0], arr[0]);
	printf("%d %d \n", ptr[1], arr[1]);
	printf("%d %d \n", ptr[2], arr[2]);
	printf("%d %d \n", *ptr, *arr);
	//*arr은 arr[0]을 가르킴

	return 0;
}