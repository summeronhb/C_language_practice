#include <stdio.h>

void Swap3(int* ptr1, int* ptr2, int* ptr3)
{
	int temp;
	temp = *ptr3;
	*ptr3 = *ptr2;
	*ptr2 = *ptr1;
	*ptr1 = temp;

	printf("num1:%d  num2:%d  num3:%d \n", *ptr1, *ptr2, *ptr3);
}
int main()
{
	int num1 = 1, num2 = 2, num3 = 3;
	printf("num1:%d  num2:%d  num3:%d \n", num1, num2, num3); 
	Swap3(&num1, &num2, &num3);
	


}