#include <stdio.h>

// 변수의 주소값을 인자로 전달 받아서 해당 변수에 직접 접근하는 형태
void Swap(int *ptr1, int *ptr2)
{
	int temp;

	temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;

	printf("n1:%d n2:%d \n", *ptr1, *ptr2);

}

int main()
{
	int num1 = 10;
	int num2 = 20;
	printf("num1:%d num2:%d \n", num1, num2);

	Swap(&num1, &num2);
	printf("num1:%d num2:%d \n", num1, num2);

}