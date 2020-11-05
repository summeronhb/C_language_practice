#include <stdio.h>

int main()
{
	int sum = 0, num=0;

	do
	{
		sum += num;
		num = num + 2;
	}
	while (num <101);

	printf("ÇÕ°è: %d \n", sum);

}