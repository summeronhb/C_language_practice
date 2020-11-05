#include <stdio.h>

int main()
{
	PrimeNum();
}

void PrimeNum(void)
{
	for (int i = 2; i < 10; i++) {
		for (int j = 2; j < i; j++){
			if (j % i == 0)
				continue;
			else
				printf("%d", i);
		}
	}
}