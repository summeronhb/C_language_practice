#include <stdio.h>

double CelToFah(double Cel);
double FahToCel(double Fah);

double main()
{
	int opt;
	printf("1. ������ ȭ���� ���� 2.ȭ���� ������ ���� \n");
	printf("��ȣ �Է�:  ");
	scanf("%d", &opt);

	if (opt == 1)
	{
		double Cel;
		printf("���� �µ��� �Է��ϼ���. ");
		scanf("%lf", &Cel);
		printf("���� %lf�� ȭ�� %lf �Դϴ�.\n", Cel, CelToFah(Cel));
	}
	else if(opt == 2)
	{
		double Fah;
		printf("ȭ�� �µ��� �Է��ϼ���. ");
		scanf("%lf", &Fah);
		printf("ȭ�� %lf�� ���� %lf �Դϴ�.\n", Fah, FahToCel(Fah));

	}
	else
		printf("���� �����Դϴ�.\n");
}

double CelToFah(double Cel)
{
	return 1.8 * Cel + 32;
}

double FahToCel(double Fah)
{
	return (Fah - 32) / 1.8;
}