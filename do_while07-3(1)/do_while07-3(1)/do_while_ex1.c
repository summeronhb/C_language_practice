#include <stdio.h>

int main(void)
{
	int num = 1;
	int sum = 0;

	while (num != 0)
	{ 

		printf("정수입력(0 to quit): ");
		scanf("%d", &num);
		sum += num;
		
	}
	printf("합계: %d", sum);
	

}