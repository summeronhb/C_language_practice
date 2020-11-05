#include <stdio.h>

int main()
{
	int a, b;
	int sum = 0;

	printf("시작과 끝 입력: ");
	scanf("%d %d", &a, &b);

	for (; a <= b; a++)
	{
		sum += a;

	}

	printf("합은: %d", sum);


}