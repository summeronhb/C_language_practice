#include <stdio.h>

int main()
{
	int n, i;
	int result=1;

	printf("n! 'n'�� �� ���� �Է��Ͻÿ�: ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		result *= i;
		
	}

	printf("%d!�� ����? %d \n", n, result);


}