#include <stdio.h>

int main()
{
	double kr, eng, math;
	double average;

	printf("����, ����, ���� ������ �Է��ϼ���: ");
	scanf("%lf %lf %lf", &kr, &eng, &math);
	average = (kr + eng + math) / 3.0;

	printf("��ü ����� %lf �Դϴ�. \n", average);

	if (average >= 90)
		printf("A �����Դϴ�. \n");
	else if (average >= 80)
		printf("B �����Դϴ�. \n");
	else if (average >= 70)
		printf("C �����Դϴ�. \n");
	else if (average >= 50)
		printf("D �����Դϴ�. \n");
	else
		printf("F �����Դϴ�. \n");


}