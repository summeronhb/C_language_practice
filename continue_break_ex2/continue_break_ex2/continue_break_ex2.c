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
			printf("a�� %d z�� %d AZ�� %d ZA�� %d �̹Ƿ� AZ + ZA �� 99�̴�. \n", a, z, 10 * a + z, 10*z +a);
		}

	}
}