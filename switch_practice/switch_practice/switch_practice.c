#include <stdio.h>

int main()
{
	char sel;
	printf("M ����, A ����, E ���� \n");
	printf("�Է�: ");
	scanf("%c", &sel);

	switch (sel) // �б� ���� �������� switch �� ����Ѵ�.
	{
	case 'M': case 'm':
		printf("Morning \n");
		break;
		
	case 'A': case 'a':
		printf("Afternoon \n");
		break;

	case 'E': case 'e':
		printf("Evening \n");
		break;

	}
	
	return 0;


}