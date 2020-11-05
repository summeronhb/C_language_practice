#include <stdio.h>

int main()
{
	int arr[3] = { 0,1,2 };

	// %p는 주소값의 출력에 사용되는 것이다.
	printf("배열의 이름: %p \n", arr);
	printf("첫번째 요소의 주소: %p \n", &arr[0]);
	printf("두번째 요소의 주소: %p \n", &arr[1]);
	printf("세번째 요소의 주소: %p \n", &arr[2]);
	/*arr = &arr[i]; 컴파일 에러가 난다.
	왜냐하면, arr는 포인트 상수이므로 값 변경이 불가능하다.
	*/

	// 배열의 이름은 배열 첫번째 요소의 주소값이다. 포인터이다! 
}