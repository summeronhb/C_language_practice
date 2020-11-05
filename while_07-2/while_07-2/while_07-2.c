#include <stdio.h>

int main(void)
{
	int i = 2, j = 1;
	int result;
	while (i < 10)
	{	
		while ( j < 10)
		{
			result = i * j;
			printf("%d x %d = %d \n", i, j, result);
			j++;
		}
		i++;

	}


}