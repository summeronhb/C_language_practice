#include <stdio.h>

int main()
{
	int num=0;
	double input = 0.0;
	float total =0.0;
	

	for (; input >= 0.0;)
	{
		total += input;
		printf("실수를 입력하세요: ");
		scanf("%lf", &input);
		num++;
	}
	printf("입력하신 실수의 평균은 %lf 입니다. ", total/(num-1));
	


}