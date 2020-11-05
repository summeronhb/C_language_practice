#include <stdio.h>

int main(void)
{
	int n=1, sum=0;
	while (n != 0)
	{
		printf("정수를 입력하세요: ");
		scanf("%d", &n);
		sum += n;
		
	}
	printf("총 합은: %d \n", sum);


}