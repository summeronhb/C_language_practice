#include <stdio.h>

int main(void)
{
	int num = 0; //0으로 초기화


	while (num < 5) //비교연산, 실행여부 결정
	{
		printf("Hello World! %d \n", num);
		num++; //while문 내 문장 실행 후, 반복여부 재확인을 위해 이동
	}
}