#include <stdio.h>

int main()
{
	int a, b;
	int sum = 0;

	printf("���۰� �� �Է�: ");
	scanf("%d %d", &a, &b);

	for (; a <= b; a++)
	{
		sum += a;

	}

	printf("����: %d", sum);


}