#include <stdio.h>

void Swap(int n1, int n2)
{
	int temp = n1;
	n1 = n2;
	n2 = temp;

	printf("%d %d \n", n1, n2);
}

int main()
{
	int num1 = 10;
	int num2 = 20;

	Swap(num1, num2);
	/* num1�� num2�� "��"�� �����Ͽ� �Լ��� ���ڿ� ������ ��,
	���� num1�� num2 ��ü�� ���޵Ǵ� ���� �ƴϹǷ� �Լ� ȣ�� �� 
	������ ������ ����. */

	printf("%d %d \n", num1, num2);
}