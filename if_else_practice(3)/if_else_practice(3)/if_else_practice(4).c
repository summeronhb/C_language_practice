#include <stdio.h>

int main()
{
	int opt;
	double num1, num2;
	double result = 0;

	printf("1. 덧셈 2. 뺄셈 3. 곱셈 4. 나눗셈 \n");
	printf("어떤 연산을 원하나요? 숫자입력: ");
	scanf("%d", &opt);

	printf("두 수를 입력하세요.");
	scanf("%lf %lf", &num1, &num2);

	if (opt == 1)
		result = num1 + num2;
	else if (opt == 2)
		result = num1 - num2;
	else if (opt == 3)
		result = num1 * num2;
	else if (opt == 4)
		result = num1 / num2;
	else
		printf("연산 숫자를 잘못 입력하였습니다.");

	
	printf("결과는 %lf 입니다. \n", result);

}