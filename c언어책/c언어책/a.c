#include <stdio.h>

int main(void)
{
	int num, sum;
	
	while(1) {
		printf("���� ���� �Է��ϼ���: \n");
		scanf("%d", &num);

		while (num != 0) {
			sum = 0;
			printf("%d + %d = %d \n", sum, num, ++sum);
		}
	}

	return 0;

}