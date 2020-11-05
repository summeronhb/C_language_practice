#include <stdio.h>

int main()
{
	double kr, eng, math;
	double average;

	printf("국어, 영어, 수학 성적을 입력하세요: ");
	scanf("%lf %lf %lf", &kr, &eng, &math);
	average = (kr + eng + math) / 3.0;

	printf("전체 평균은 %lf 입니다. \n", average);

	if (average >= 90)
		printf("A 학점입니다. \n");
	else if (average >= 80)
		printf("B 학점입니다. \n");
	else if (average >= 70)
		printf("C 학점입니다. \n");
	else if (average >= 50)
		printf("D 학점입니다. \n");
	else
		printf("F 학점입니다. \n");


}