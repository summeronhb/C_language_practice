#include <stdio.h>

void Swap(int n1, int n2)
{
	int temp = n1;
	n1 = n2;
	n2 = temp;

	printf("%d %d \n", n1, n2);
}

int main()
{
	int num1 = 10;
	int num2 = 20;

	Swap(num1, num2);
	/* num1과 num2의 "값"만 복사하여 함수의 인자에 전달할 뿐,
	변수 num1과 num2 자체가 전달되는 것이 아니므로 함수 호출 후 
	변수의 역할을 없다. */

	printf("%d %d \n", num1, num2);
}