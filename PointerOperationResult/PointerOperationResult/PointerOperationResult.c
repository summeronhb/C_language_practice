#include <stdio.h>

int main()
{
	int* ptr1 = 0x0010;
	double* ptr2 = 0x0010;

	/* 포인터변수에 합을 진행하는 것의 의미는 
	size of(포인터형)을 더하는 것이다.
	*/
	printf("%p %p \n", ptr1 + 1, ptr1 + 2);
	printf("%p %p \n", ptr2 + 1, ptr2 + 2);

	//값의 저장은 증감연산자의 경우에만 해당된다.
	printf("%p %p \n", ptr1, ptr2);
	ptr1++;
	ptr2++;
	printf("%p %p \n", ptr1, ptr2);
	return 0;

}