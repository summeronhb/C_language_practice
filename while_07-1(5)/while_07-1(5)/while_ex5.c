#include <stdio.h>

int main()
{
	int n, score, sum=0, i=0;
	float result;

	printf("총 학생은 몇명인가요? ");
	scanf("%d", &n);
 
	while (i < n)
	{
		printf("점수를 입력하세요: ");
		scanf("%d", &score);
		sum += score;
		i++;
	}

	result = (float)sum / n;
	printf("우리반 학생들의 평균은: %f \n", result);
	

}