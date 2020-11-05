#include <stdio.h>
#include "ArrayList.h"

int main(void) {
    List list; //���� ����Ʈ ����
    int data;
    ListInit(&list); //����Ʈ �ʱ�ȭ

    //������ ����
    LInsert(&list, 11); LInsert(&list, 11);
    LInsert(&list, 22); LInsert(&list, 22);
    LInsert(&list, 33);

    printf("���� �������� ��: %d\n", LCount(&list));

    //������ ��ȸ
    if (LFirst(&list, &data)) { //ù ��° �����͸� ��ȸ
        printf("%d ", data);
        while (LNext(&list, &data)) {
            printf("%d ", data);
        }
    }
    printf("\n");

    //������ ��ȸ(����)
    if (LLast(&list, &data)) {
        printf("%d ", data);
        while (Toward_First(&list, &data)) {
            printf("%d ", data);
        }
    }
    printf("\n");

    //������ ����
    if (LFirst(&list, &data)) {
        if (data == 22)
            LRemove(&list);

        while (LNext(&list, &data)) {
            if (data == 22)
                LRemove(&list);
        }
    }

    printf("���� �������� ��: %d\n", LCount(&list));

    //������ ��ȸ
    if (LFirst(&list, &data)) {
        printf("%d ", data);

        while (LNext(&list, &data)) {
            printf("%d ", data);
        }
    }
    printf("\n");

    //������ ��ȸ(����)    
    if (LLast(&list, &data)) {
        printf("%d ", data);
        while (Toward_First(&list, &data)) {
            printf("%d ", data);
        }
    }
    printf("\n");
    return 0;
}
