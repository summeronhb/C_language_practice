#include <stdio.h>

int Multi(int, int);
int NumCom(int, int);

int main()
{
	int n1, n2;

	printf("�� ���� ������ �Է��ϸ� �� ���� ��� �������� ��µ˴ϴ�: ");
	scanf("%d %d", &n1, &n2);

	printf("%d �ܿ��� %d �� ������ �������Դϴ�.\n", n1, n2);
	Multi(n1, n2);
	

}

int NumCom(n1, n2)
{
	int a, b;
	if (n1 < n2)
	{
		return a = n1, b = n2;
	}
		
	else
		return a = n2, b = n1;
}

int Multi(n1, n2)
{
	int a=0, b=0, result=0;
	int NumCom(n1, n2);

	for (int i = a; i <= b; i++)
	{
		int j;
		for (j = 1; j < 10; j++)
		{
			int result = 0;
			result = i * j;
			printf("%d x %d = %d \n", i, j, result);

		}
		printf("\n");

	}
}


