#include <stdio.h>

int main(void)
{
	int num, i=1;
	printf("양의 정수를 입력하세요: \n");
	scanf("%d", &num);

	while (i < num +1 )
	{
		printf("Hello world! %d \n", i);
		i++;
	}


}