#include <stdio.h>

int main(void)
{
	int n, i = 9;
	int result;

	printf("알고 싶은 구구단을 입력하세요: ");
	scanf("%d", &n);

	while (i > 0)
	{
		result = n * i;
		printf("%d x %d = %d \n", n, i, result);
		i--;

	}

}