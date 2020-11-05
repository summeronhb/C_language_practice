#include <stdio.h>

int main(void)
{
	char str[50] = "I like C programming!";
	printf("string: %s \n", str);

	// 9번째 요소에 널 문자 삽입
	str[8] = '\0';
	printf("string: %s \n", str);

	//'\0'의 아스키 코드는 0이므로 0을 대입해도 됨!
	str[6] = 0;
	printf("string: %s \n", str);

	str[1] = '\0';
	printf("string: %s \n", str);

	return 0;


	


}