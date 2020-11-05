#include <stdio.h>

int main()
{
	char str[50];
	int i=0;

	printf("영단어를 입력하세요:  ");
	scanf("%s", str); //str = "abc" 0 1 2 

	while (str[i] != 0)
		i++; //i = 3

	for (i; i >= 0; i--)
	{
		int a, b;
		
		//i=3
		// a+b = i-1

		str[a] = str[b];
		//str[0] = str[2] = c
		//str[1] = str[1] = b
		//str[2] = str[0] = a
		printf("%s", str);
	}



}