#include <stdio.h>

int MaxNum(int, int, int);
int MinNum(int, int, int);

int main()
{
	int num1, num2, num3;

	printf("�� ���� ������ �Է��ϼ���: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	printf("%d, %d, %d �߿��� ���� ū ���� %d �Դϴ�. \n", num1, num2, num3, MaxNum(num1, num2, num3));
	printf("%d, %d, %d �߿��� ���� ���� ���� %d �Դϴ�. \n", num1, num2, num3, MinNum(num1, num2, num3));

}

int MaxNum(num1, num2, num3)
{
	if (num1 > num2)
		return (num1 > num3) ? num1 : num3;

	else
		return (num2 > num3) ? num2 : num3;
}

int MinNum(int num1, int num2, int num3)
{
	if (num1 > num2)
		return (num2 < num3) ? num2 : num3;

	else
		return (num1 < num3) ? num1 : num3;

}