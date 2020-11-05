#include <stdio.h>

int main()
{
	int arr1[3] = { 1,2,3 };
	double arr2[3] = { 1.1, 2.2, 3.3 };

	printf("%d %g \n", *arr1, *arr2); // 1, 1.1
	
	//*arr1이 의미하는 것은 arr1 배열의 첫번째 요소
	*arr1 +=100;
	*arr2 += 120.5;
	// 101, 121.6
	printf("%d %g \n", *arr1, *arr2);
	return 0;

}