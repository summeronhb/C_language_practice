#include <stdio.h>

void TimeExchange(int);

int main()
{
	int sec;
	printf("�ʸ� �Է��Ͻÿ�. ");
	scanf("%d", &sec);

	TimeExchange(sec);

}

void TimeExchange(int sec)
{
	int hour, min;

	hour = sec / 3600;
	sec = sec % 3600;
	min = sec / 60;
	sec = sec % 60;

	printf("[h:%d, m:%d, s:%d] \n", hour, min, sec);


}