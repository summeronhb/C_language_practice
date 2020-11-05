#include <stdio.h>

int main()
{
	int i = 0;
	int sum = 0, num;
	while ( i < 5 )
	{
		printf("1 이상의 정수를 입력하세요: \n");
		scanf("%d", &num);

		while (num <= 0)
		{
			printf("1 이상의 정수를 입력하세요: \n");
			scanf("%d", &num);

		}
		sum += num;
		i++;

	}
	printf("5개 정수의 합은: %d \n", sum);

}