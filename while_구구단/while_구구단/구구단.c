#include <stdio.h>

int main(void)
{
	int x = 7, y = 1;
	int result;

	printf("¸î ´Ü? %d \n", x);

	while( y < 10 )
	{
		result = x * y;
		printf("%d x %d = %d \n ", x, y, result);
		y++;
	}

}