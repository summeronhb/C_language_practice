#include <stdio.h>

int main()
{
	int arr[3] = { 11,22,33 }; 
	int* ptr = arr; // ptr은 arr를 가리키는 포인터이다.
	// int * ptr = arr[0]; 과 같은 문장이다.
	// arr 상수가 가진 값을 대입한다는 뜻이다.
	printf("%d %d %d \n", *ptr, *(ptr + 1), *(ptr + 2));
	/* ptr+1은 ptr이 가르키는 주소값에다가 size of(int)*1 만큼 더한 것인데,
	앞에 *는 값을 말하므로 arr[1]값을 불러오는 것이다.*/

	printf("%d ", *ptr); ptr++; // *ptr은 arr[0]을 가리킨다.
	printf("%d ", *ptr); ptr++; // {33}를 가리킨다.
	printf("%d ", *ptr); ptr--; // {22}를 가리킨다.
	printf("%d ", *ptr); ptr--; // 원래대로 돌아옴.
	printf("%d ", *ptr); printf("\n");
	return 0;


}