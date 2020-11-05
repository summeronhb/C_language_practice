#include <stdio.h>

void SquareByValue(int n)
{
	n = n * n;

}

void SquareByReference(int *ptr)
{
	*ptr = (*ptr) * (*ptr);

}

int main()
{
	int num;

	printf("정수를 입력하세요: ");
	scanf("%d", &num);

	SquareByValue(num);
	printf("%d \n", num);

	SquareByReference(&num);
	printf("%d \n", num);
	
}