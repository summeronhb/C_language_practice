#include <stdio.h>
#include <math.h>

void function(int);

int main() {
	int n;
	printf("��� n �Է�: ");
	scanf("%d", &n);

	function(n);
}

void function(int n) {
	static int k;
	for (k = 0; pow(2,k) <= n; k++) {
	}
	printf("������ �����ϴ� k�� �ִ���: %d \n", k-1);
}

