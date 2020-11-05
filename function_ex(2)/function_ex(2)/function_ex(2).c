#include <stdio.h>

double CelToFah(double Cel);
double FahToCel(double Fah);

double main()
{
	int opt;
	printf("1. 섭씨를 화씨로 변경 2.화씨를 섭씨로 변경 \n");
	printf("번호 입력:  ");
	scanf("%d", &opt);

	if (opt == 1)
	{
		double Cel;
		printf("섭씨 온도를 입력하세요. ");
		scanf("%lf", &Cel);
		printf("섭씨 %lf는 화씨 %lf 입니다.\n", Cel, CelToFah(Cel));
	}
	else if(opt == 2)
	{
		double Fah;
		printf("화씨 온도를 입력하세요. ");
		scanf("%lf", &Fah);
		printf("화씨 %lf는 섭씨 %lf 입니다.\n", Fah, FahToCel(Fah));

	}
	else
		printf("선택 오류입니다.\n");
}

double CelToFah(double Cel)
{
	return 1.8 * Cel + 32;
}

double FahToCel(double Fah)
{
	return (Fah - 32) / 1.8;
}