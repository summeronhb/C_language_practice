#include <stdio.h>

int main()
{
	int i = 2, j;
	int result;

	do 
	{
		j = 1;

		do {
		result = i * j;
		printf("%d x %d = %d \n", i, j, result);
		j++;
		} while (j<10);
		
		i++;
	} while (i < 10);

}