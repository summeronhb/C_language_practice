#include <stdio.h>

int main()
{
	int num1, num2;
	num1 = printf("12345\n");
	num2 = printf("I love my home\n");
	printf("%d %d\n", num1, num2); // \n을 포함하여 문자열의 길이를 반환
	return 0;
}