#include <stdio.h>

int main()
{
	int n, i;
	int result=1;

	printf("n! 'n'에 들어갈 값을 입력하시오: ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		result *= i;
		
	}

	printf("%d!의 값은? %d \n", n, result);


}