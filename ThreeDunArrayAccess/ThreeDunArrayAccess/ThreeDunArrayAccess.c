#include <stdio.h>

int main()
{
	int mean = 0, i,j;
	int record[3][3][2] = {
		{
			{70,80}, //A�б� �л�1�� ����
			{94,90},
			{70,85}
		},
		{
			{83,90},
			{95,60},
			{90,82}
		},
		{
			{98,89},
			{99,94},
			{91,87}
		}

	};

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 2; j++)
		{
			mean += record[0][i][j];
		}
	}
	printf("A�б� ��ü ���: %g \n", (double)mean / 6);

	mean = 0; //�ٽ� �ʱ�ȭ ���־�� �Ѵ�!!

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 2; j++)
		{
			mean += record[1][i][j];
		}
	}
	printf("B�б� ��ü ���: %g \n", (double)mean / 6);

	mean = 0;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 2; j++)
		{
			mean += record[2][i][j];
		}
	}
	printf("C�б� ��ü ���: %g \n", (double)mean / 6);

	
}