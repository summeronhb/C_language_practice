#include <stdio.h>

int main()
{
	int num;
	int sum=0;

	printf("0���� num������ ����, num��? ");
	scanf("%d", &num);

	for (int i = 0; i < num+1; i++)
	{
		sum += i;
	}
	printf("0���� %d������ ����? %d\n", num,sum);

}