#include <stdio.h>

int main(void)
{
	int n, i = 9;
	int result;

	printf("�˰� ���� �������� �Է��ϼ���: ");
	scanf("%d", &n);

	while (i > 0)
	{
		result = n * i;
		printf("%d x %d = %d \n", n, i, result);
		i--;

	}

}