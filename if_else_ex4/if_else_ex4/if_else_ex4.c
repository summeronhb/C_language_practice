#include <stdio.h>

int main()
{
	int num1, num2;

	printf("���� �� ���� �Է��ϼ���. ");
	scanf("%d %d", &num1, &num2);

	int result = (num1 > num2) ? num1 - num2 : num2 - num1;

	printf("�� ���� ���� %d �Դϴ�. \n", result);

}