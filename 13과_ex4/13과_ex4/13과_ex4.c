#include <stdio.h>

int main()
{
	int arr[6] = { 1,2,3,4,5,6 };
	int* fptr = arr;
	int* bptr = &arr[5];
	int i, temp;

	for (i = 0; i < 3; i++)
	{
		temp = *fptr;
		//temp = 1
		*fptr = *bptr;
		//arr[0] = 6
		*bptr = temp;
		//arr[5] = 1;
		fptr += 1;
		bptr -= 1;
	}

	for (i = 0; i < 6; i++)
		printf(" %d", arr[i]);
	

}