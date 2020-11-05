#include <stdio.h>

int Multi(int, int);
int NumCom(int, int);

int main()
{
	int n1, n2;

	printf("두 개의 정수를 입력하면 그 사이 모든 구구단이 출력됩니다: ");
	scanf("%d %d", &n1, &n2);

	printf("%d 단에서 %d 단 사이의 구구단입니다.\n", n1, n2);
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


