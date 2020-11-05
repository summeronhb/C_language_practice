#include <stdio.h>

int Add (int num1, int num2)
{
	return num1 + num2;
}

int main()
{
	int result;
	result = Add(4, 3);
	printf("µ¡¼À°á°ú1: %d \n", result);

	result = Add(5, 10);
	printf("µ¡¼À°á°ú2: %d \n", result);

	return 0;

}