#include <stdio.h>

int main()
{
	int opt;
	double num1, num2;
	double result = 0;

	printf("1. ���� 2. ���� 3. ���� 4. ������ \n");
	printf("� ������ ���ϳ���? �����Է�: ");
	scanf("%d", &opt);

	printf("�� ���� �Է��ϼ���.");
	scanf("%lf %lf", &num1, &num2);

	if (opt == 1)
		result = num1 + num2;
	else if (opt == 2)
		result = num1 - num2;
	else if (opt == 3)
		result = num1 * num2;
	else if (opt == 4)
		result = num1 / num2;
	else
		printf("���� ���ڸ� �߸� �Է��Ͽ����ϴ�.");

	
	printf("����� %lf �Դϴ�. \n", result);

}