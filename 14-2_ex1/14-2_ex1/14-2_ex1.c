#include <stdio.h>

void ShowAllData(const int* arr, int len)
{
	//*arr�� ����Ű�� ���� ù��° ��ҷ� ���� ������ �ʴ´�.
	int i;
	for (i = 0; i < len; i++)
		printf("%d", arr[i]);
}

int main()
{
	int arr[3] = { 1,2,3 };
	ShowAllData(arr, sizeof(arr)/sizeof(int));
	//*arr = 1; ���� ������ �ʴ´�!


}