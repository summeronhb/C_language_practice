#include <stdio.h>

int main(void)
{
	char nu = '\0';
	char sp = ' ';
	char str[] = "Good morning!";

	printf("�迭 str�� ũ��: %d \n", sizeof(str));
	printf("�� ���� ������ ���: %c \n", str[13]);
	printf("�� ���� ������ ���: %d \n", str[13]);

	// �迭 str�� ����� ���ڿ� �����ʹ� ���� ����!
	str[12] = '?'; 
	printf("���ڿ� ���: %s \n", str);


	printf("%d %d \n", nu, sp);
	return 0;
}