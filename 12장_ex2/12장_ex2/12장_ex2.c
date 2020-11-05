#include <stdio.h>

int main()
{
	int num1 = 10, num2 = 20;
	int* ptr1, * ptr2;
	ptr1 = &num1;
	ptr2 = &num2;

	*ptr1 += 10; // num1 = 20;
	*ptr2 -= 10; // num2 = 10;

	ptr1 = &num2;
	ptr2 = &num1;

	printf("&ptr1 °ª: %d \n", num2);
	printf("&ptr2 °ª: %d \n", num1);




}