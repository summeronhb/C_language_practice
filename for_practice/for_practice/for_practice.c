#include <stdio.h>

int main()
{
	int num;
	int sum=0;

	printf("0부터 num까지의 덧셈, num은? ");
	scanf("%d", &num);

	for (int i = 0; i < num+1; i++)
	{
		sum += i;
	}
	printf("0부터 %d까지의 합은? %d\n", num,sum);

}