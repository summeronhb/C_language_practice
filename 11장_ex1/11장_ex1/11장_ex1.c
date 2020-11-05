#include <stdio.h>

int main()
{
	char str[50];
	int i=0;

	printf("영단어를 입력하세요.");
	scanf("%s", str);

	while (str[i] != 0)
		i++;

	printf("입력하신 영단어 길이는 %d 입니다. \n", i);
}