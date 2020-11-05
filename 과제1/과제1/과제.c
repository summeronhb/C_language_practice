#include <stdio.h>
#include "ArrayList.h"

int main(void) {
    List list; //순차 리스트 선언
    int data;
    ListInit(&list); //리스트 초기화

    //데이터 삽입
    LInsert(&list, 11); LInsert(&list, 11);
    LInsert(&list, 22); LInsert(&list, 22);
    LInsert(&list, 33);

    printf("현재 데이터의 수: %d\n", LCount(&list));

    //데이터 조회
    if (LFirst(&list, &data)) { //첫 번째 데이터를 조회
        printf("%d ", data);
        while (LNext(&list, &data)) {
            printf("%d ", data);
        }
    }
    printf("\n");

    //데이터 조회(역순)
    if (LLast(&list, &data)) {
        printf("%d ", data);
        while (Toward_First(&list, &data)) {
            printf("%d ", data);
        }
    }
    printf("\n");

    //데이터 삭제
    if (LFirst(&list, &data)) {
        if (data == 22)
            LRemove(&list);

        while (LNext(&list, &data)) {
            if (data == 22)
                LRemove(&list);
        }
    }

    printf("현재 데이터의 수: %d\n", LCount(&list));

    //데이터 조회
    if (LFirst(&list, &data)) {
        printf("%d ", data);

        while (LNext(&list, &data)) {
            printf("%d ", data);
        }
    }
    printf("\n");

    //데이터 조회(역순)    
    if (LLast(&list, &data)) {
        printf("%d ", data);
        while (Toward_First(&list, &data)) {
            printf("%d ", data);
        }
    }
    printf("\n");
    return 0;
}
