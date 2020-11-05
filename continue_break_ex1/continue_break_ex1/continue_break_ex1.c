#include <stdio.h>

int main()
{
	int i, j;
	int result=0;

	for (i = 2; i < 9; i ++)
	{
		if (i % 2 != 0)
			continue;
		for (j = 1; j <= i; j++)
		{
			result = i * j;
			printf("%d x %d = %d \n", i, j, result);
			
		}
		printf("\n");
		

	}
	

}