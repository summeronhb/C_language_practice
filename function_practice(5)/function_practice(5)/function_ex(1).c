#include <stdio.h>

int MaxNum(int, int, int);
int MinNum(int, int, int);

int main()
{
	int num1, num2, num3;

	printf("세 개의 정수를 입력하세요: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	printf("%d, %d, %d 중에서 가장 큰 수는 %d 입니다. \n", num1, num2, num3, MaxNum(num1, num2, num3));
	printf("%d, %d, %d 중에서 가장 작은 수는 %d 입니다. \n", num1, num2, num3, MinNum(num1, num2, num3));

}

int MaxNum(num1, num2, num3)
{
	if (num1 > num2)
		return (num1 > num3) ? num1 : num3;

	else
		return (num2 > num3) ? num2 : num3;
}

int MinNum(int num1, int num2, int num3)
{
	if (num1 > num2)
		return (num2 < num3) ? num2 : num3;

	else
		return (num1 < num3) ? num1 : num3;

}