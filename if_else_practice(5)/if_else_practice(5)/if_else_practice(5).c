#include <stdio.h>

int main(void)
{
	int num, abs;
	printf("���� �Է�: ");
	scanf("%d", &num);

	abs = (num > 0) ? num : -num; //abs�� �ʱ�ȭ
	printf("%d�� ������ %d�Դϴ�. \n", num, abs);
	return 0;

}