#include <stdio.h>

int main()
{
	int n, i = 1;
	int result;

	printf("3 X n 에 들어갈 n 값을 입력하세요: ");
	scanf("%d", &n);

	while (i < n + 1)
	{
		result = 3 * i;
		printf("%d x %d = %d \n", 3, i, result);
		i++;

	}
}