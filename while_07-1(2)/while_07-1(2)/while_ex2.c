#include <stdio.h>

int main()
{
	int n, i = 1;
	int result;

	printf("3 X n �� �� n ���� �Է��ϼ���: ");
	scanf("%d", &n);

	while (i < n + 1)
	{
		result = 3 * i;
		printf("%d x %d = %d \n", 3, i, result);
		i++;

	}
}