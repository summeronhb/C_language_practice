#include <stdio.h>

int main()
{
	int* ptr1 = 0x0010;
	double* ptr2 = 0x0010;

	/* �����ͺ����� ���� �����ϴ� ���� �ǹ̴� 
	size of(��������)�� ���ϴ� ���̴�.
	*/
	printf("%p %p \n", ptr1 + 1, ptr1 + 2);
	printf("%p %p \n", ptr2 + 1, ptr2 + 2);

	//���� ������ ������������ ��쿡�� �ش�ȴ�.
	printf("%p %p \n", ptr1, ptr2);
	ptr1++;
	ptr2++;
	printf("%p %p \n", ptr1, ptr2);
	return 0;

}