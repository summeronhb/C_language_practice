#include <stdio.h>

int main()
{
	char str[50];
	int idx = 0;

	// �Է¹��� ���ڿ��� �迭�� ����
	printf("���ڿ� �Է�: ");
	scanf("%s", str);
	printf("�Է� ���� ���ڿ�: %s \n", str);

	printf("���� �������: ");
	while (str[idx] != '\0')
	{
		printf("%c", str[idx]);
		idx++;
	}
	printf('\n');
}