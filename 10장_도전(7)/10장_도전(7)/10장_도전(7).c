#include <stdio.h>
#include <math.h>

void function(int);

int main() {
	int n;
	printf("상수 n 입력: ");
	scanf("%d", &n);

	function(n);
}

void function(int n) {
	static int k;
	for (k = 0; pow(2,k) <= n; k++) {
	}
	printf("공식을 만족하는 k의 최댓값은: %d \n", k-1);
}

