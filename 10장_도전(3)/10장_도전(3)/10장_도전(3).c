#include <stdio.h>

int main()
{
	int n1, n2;
	printf("두 개의 정수를 입력하세요.");
	scanf("%d %d", &n1, &n2);

	for (int i = 2; ((i < n1) && (i < n2)); i++)
	{
		if (n1 % i == 0 && n2 % i == 0)
			printf("%d는 %d와 %d의 최대공약수 입니다.\n", i, n1, n2);
		else
		{
			printf("%d와 %d의 최대공약수는 없습니다.\n", n1, n2);
		}
	}


}