#include <stdio.h>

int main()
{
	int num1 = 10, num2 = 20, num3 = 30;
	int* arr[3] = { &num1, &num2, &num3 };
	// 포인터 변수도 변수이므로 배열을 담을 수 있다.
	// 단, 포인터 변수는 주소값을 전달받는 것이므로 주소값을 인자로 한다?!

	printf("%d \n", *arr[0]); //*arr[0] => arr[0]의 주소값을 *참조한다. 그러므로 num1값이다.
	printf("%d \n", *arr[1]); // 배열요소가 가리키는 주소의 값을 출력한다.
	printf("%d \n", *arr[2]);

	// 10, 20, 30 으로 출력된다.

	return 0;
}