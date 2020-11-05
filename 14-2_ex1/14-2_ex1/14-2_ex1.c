#include <stdio.h>

void ShowAllData(const int* arr, int len)
{
	//*arr이 가리키는 값은 첫번째 요소로 값이 변하지 않는다.
	int i;
	for (i = 0; i < len; i++)
		printf("%d", arr[i]);
}

int main()
{
	int arr[3] = { 1,2,3 };
	ShowAllData(arr, sizeof(arr)/sizeof(int));
	//*arr = 1; 값이 변하지 않는다!


}