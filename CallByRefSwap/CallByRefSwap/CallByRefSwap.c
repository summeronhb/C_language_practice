#include <stdio.h>

// ������ �ּҰ��� ���ڷ� ���� �޾Ƽ� �ش� ������ ���� �����ϴ� ����
void Swap(int *ptr1, int *ptr2)
{
	int temp;

	temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;

	printf("n1:%d n2:%d \n", *ptr1, *ptr2);

}

int main()
{
	int num1 = 10;
	int num2 = 20;
	printf("num1:%d num2:%d \n", num1, num2);

	Swap(&num1, &num2);
	printf("num1:%d num2:%d \n", num1, num2);

}