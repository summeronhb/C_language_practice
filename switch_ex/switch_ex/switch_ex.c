#include <stdio.h>

int main()
{
	int n;
	printf("정수를 입력하세요: ");
	scanf("%d", &n);

	switch (n/10) 
	{
	case 0:
		printf("0이상 10미만 \n");
		break;

	case 1: 
		printf("10이상 20미만 \n");
		break;

	case 2:
		printf("20이상 30미만 \n");
		break;
	
	default:
		printf("30이상 \n");
	} 

	return 0;
}