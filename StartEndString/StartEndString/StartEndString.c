#include <stdio.h>

int main(void)
{
	char str[50] = "I like C programming!";
	printf("string: %s \n", str);

	// 9��° ��ҿ� �� ���� ����
	str[8] = '\0';
	printf("string: %s \n", str);

	//'\0'�� �ƽ�Ű �ڵ�� 0�̹Ƿ� 0�� �����ص� ��!
	str[6] = 0;
	printf("string: %s \n", str);

	str[1] = '\0';
	printf("string: %s \n", str);

	return 0;


	


}