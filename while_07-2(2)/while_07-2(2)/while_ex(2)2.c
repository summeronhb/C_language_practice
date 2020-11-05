#include <stdio.h>

int main()
{
	int i = 1, n;
	char a = 'o', b = '*';

	while (i < 6)
	{
		n = 1;
		while (n < i)
		{
			printf("%c", a);
			n++;
		}

		printf("%c \n", b);
		i++;
	}
}