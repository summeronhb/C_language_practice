#include <stdio.h>

int main()
{
	int num=0;
	double input = 0.0;
	float total =0.0;
	

	for (; input >= 0.0;)
	{
		total += input;
		printf("�Ǽ��� �Է��ϼ���: ");
		scanf("%lf", &input);
		num++;
	}
	printf("�Է��Ͻ� �Ǽ��� ����� %lf �Դϴ�. ", total/(num-1));
	


}