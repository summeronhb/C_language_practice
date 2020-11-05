#include <stdio.h>

int main(void)
{
	int num, abs;
	printf("정수 입력: ");
	scanf("%d", &num);

	abs = (num > 0) ? num : -num; //abs의 초기화
	printf("%d의 절댓값은 %d입니다. \n", num, abs);
	return 0;

}