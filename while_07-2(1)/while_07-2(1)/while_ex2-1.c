#include <stdio.h>

int main()
{
	int i = 0;
	int sum = 0, num;
	while ( i < 5 )
	{
		printf("1 �̻��� ������ �Է��ϼ���: \n");
		scanf("%d", &num);

		while (num <= 0)
		{
			printf("1 �̻��� ������ �Է��ϼ���: \n");
			scanf("%d", &num);

		}
		sum += num;
		i++;

	}
	printf("5�� ������ ����: %d \n", sum);

}