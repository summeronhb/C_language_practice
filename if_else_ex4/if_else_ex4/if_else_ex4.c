#include <stdio.h>

int main()
{
	int num1, num2;

	printf("정수 두 개를 입력하세요. ");
	scanf("%d %d", &num1, &num2);

	int result = (num1 > num2) ? num1 - num2 : num2 - num1;

	printf("두 수의 차는 %d 입니다. \n", result);

}