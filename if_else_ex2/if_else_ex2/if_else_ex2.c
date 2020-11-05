#include <stdio.h>

int main()
{
	int num1, num2;
	int result;

	printf("두 수를 입력하세요: ");
	scanf("%d %d", &num1, &num2);

	if (num1 >= num2)
		result = num1 - num2;
	else
		result = num2 - num1;

	printf("두 수의 차는 %d 입니다. \n", result);

}