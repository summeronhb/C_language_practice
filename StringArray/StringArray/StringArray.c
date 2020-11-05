#include <stdio.h>

int main()
{	
	// 문자열의 주소 값을 저장할 수 있는 배열로 char형 포인트 배열
	char* strArr[3] = { "Simple", "String", "Array" };
	/* 문자열에 문자형 요소의 주소값 3개를 저장할 수 있다.
	 문자열을 저장할 메모리 공간이 마련되어 있나? 아니요. 
	자동으로 메모리에 저장된 후, 그 주소값이 저장되는 것이다.*/

	printf("%s \n", strArr[0]);
	printf("%s \n", strArr[1]);
	printf("%s \n", strArr[2]);


	
}