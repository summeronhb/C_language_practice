#include <stdio.h>

int main()
{
	int a, z;
	int result = 99;

	for (a = 0; a < 10; a++)
	{
		for (z = 0; z < 10; z++)
		{
			if ((a * 10 + z) + (z * 10 + a) != result)
				continue;
			printf("a는 %d z는 %d AZ는 %d ZA는 %d 이므로 AZ + ZA 는 99이다. \n", a, z, 10 * a + z, 10*z +a);
		}

	}
}