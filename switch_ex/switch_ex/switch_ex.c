#include <stdio.h>

int main()
{
	int n;
	printf("������ �Է��ϼ���: ");
	scanf("%d", &n);

	switch (n/10) 
	{
	case 0:
		printf("0�̻� 10�̸� \n");
		break;

	case 1: 
		printf("10�̻� 20�̸� \n");
		break;

	case 2:
		printf("20�̻� 30�̸� \n");
		break;
	
	default:
		printf("30�̻� \n");
	} 

	return 0;
}