#include <stdio.h>

int main(void)
{
	int num;

	printf("16진수로 바꾸고자 하는 정수를 입력하세요: ");
	scanf("%d", &num);
	printf("%d의 16진수는 %x \n", num, num);
}