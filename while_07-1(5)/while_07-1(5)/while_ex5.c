#include <stdio.h>

int main()
{
	int n, score, sum=0, i=0;
	float result;

	printf("�� �л��� ����ΰ���? ");
	scanf("%d", &n);
 
	while (i < n)
	{
		printf("������ �Է��ϼ���: ");
		scanf("%d", &score);
		sum += score;
		i++;
	}

	result = (float)sum / n;
	printf("�츮�� �л����� �����: %f \n", result);
	

}