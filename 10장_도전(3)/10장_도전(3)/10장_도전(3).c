#include <stdio.h>

int main()
{
	int n1, n2;
	printf("�� ���� ������ �Է��ϼ���.");
	scanf("%d %d", &n1, &n2);

	for (int i = 2; ((i < n1) && (i < n2)); i++)
	{
		if (n1 % i == 0 && n2 % i == 0)
			printf("%d�� %d�� %d�� �ִ����� �Դϴ�.\n", i, n1, n2);
		else
		{
			printf("%d�� %d�� �ִ������� �����ϴ�.\n", n1, n2);
		}
	}


}