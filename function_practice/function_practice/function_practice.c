#include <stdio.h>

int Add (int num1, int num2)
{
	return num1 + num2;
}

int main()
{
	int result;
	result = Add(4, 3);
	printf("�������1: %d \n", result);

	result = Add(5, 10);
	printf("�������2: %d \n", result);

	return 0;

}