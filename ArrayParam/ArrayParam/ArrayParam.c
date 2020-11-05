#include <stdio.h>

//매개변수에 배열을 전달하고 싶은 경우, 배열의 주소값을 전달한다.
void ShowArayElem(int* param, int len)
{
	int i;
	for (i = 0; i < len; i++)
	{
		//ptr과 arr이 가리키는 대상은 같으므로 arr[0] = ptr[0]
		printf("%d ", param[i]);
	}
	printf("\n");
}

int main()
{
	int arr1[3] = { 1,2,3 };
	int arr2[5] = { 4,5,6,7,8 };
	ShowArayElem(arr1, sizeof(arr1) / sizeof(int));
	ShowArayElem(arr2, sizeof(arr2) / sizeof(int));

}