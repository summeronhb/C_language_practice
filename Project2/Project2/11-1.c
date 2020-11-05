#include <stdio.h>
#define INF 10000

int arr[INF];
int num = 0;

void new_first(int data) {
    for (int i = num; i >= 1; i--) 
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = data;
    num ++;
}
void new_end(int data) {
    arr[num] = data;
    num ++;
}

void cut(int data) {
    for (i=1; i<arr[0]; i++)
        A[i] = A[i+1]

}



void show() {
    for (int i = 0; i < num; i++) {
        printf("%d ", arr[i]);
    }
}

int main(void)
{
    new_first(2);
    new_first(1);
    new_end(3);
    new_end(4);
    new_end(5);
    show();
    system("pause");
    return 0;
}