#include <stdio.h>

int AbsoCompare(int num1, int num2);
int GetAbsoValue(int num);

int main(void)
{
	int num1, num2;
	printf("절댓값 크기를 비교하고 싶은 두 정수를 입력하세요. ");
	scanf("%d %d", &num1, &num2);

	printf("%d와 %d 중 절댓값이 큰 수는 : %d \n", num1, num2, AbsoCompare(num1, num2));

}

int AbsoCompare(int num1, int num2) {
	if (GetAbsoValue(num1) < GetAbsoValue(num2))
		return num2;
	else
		return num1;

}

int GetAbsoValue(int num) {
	if (num < 0)
		return -num;
	else
		return num;
}