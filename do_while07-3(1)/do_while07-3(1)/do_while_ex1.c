#include <stdio.h>

int main(void)
{
	int num = 1;
	int sum = 0;

	while (num != 0)
	{ 

		printf("�����Է�(0 to quit): ");
		scanf("%d", &num);
		sum += num;
		
	}
	printf("�հ�: %d", sum);
	

}