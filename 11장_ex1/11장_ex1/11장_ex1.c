#include <stdio.h>

int main()
{
	char str[50];
	int i=0;

	printf("���ܾ �Է��ϼ���.");
	scanf("%s", str);

	while (str[i] != 0)
		i++;

	printf("�Է��Ͻ� ���ܾ� ���̴� %d �Դϴ�. \n", i);
}