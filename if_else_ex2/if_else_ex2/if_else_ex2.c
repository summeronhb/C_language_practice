#include <stdio.h>

int main()
{
	int num1, num2;
	int result;

	printf("�� ���� �Է��ϼ���: ");
	scanf("%d %d", &num1, &num2);

	if (num1 >= num2)
		result = num1 - num2;
	else
		result = num2 - num1;

	printf("�� ���� ���� %d �Դϴ�. \n", result);

}