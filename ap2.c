#include <stdio.h> 
#include <stdlib.h>

void main() {
    printf("[---------���� 2021041081---------]\n");

    int list[5];  //list �迭 ���� 
    int *plist[5];  //������ �迭 plist ����

    list[0] = 10;  
    list[1] = 11;

    plist[0] = (int*)malloc(sizeof(int));  //�ε��� 0�� ���� �Ҵ�

    printf("list[0] \t\t= %d\n", list[0]);  //�ε��� 0�� ���� ���
    printf("address of list \t= %p\n", list);  //�迭�� �̸��� �ּ�
    printf("address of list[0] \t= %p\n", &list[0]);  //�ε��� 0�� �ּ�=�迭�� �ּ�
    printf("address of list + 0 \t= %p\n", list+0);  
    printf("address of list + 1 \t= %p\n", list+1);  //�迭+1*(int�� ũ�� 4byte)��ŭ �ּ� �̵� �� ���
    printf("address of list + 2 \t= %p\n", list+2);
    printf("address of list + 3 \t= %p\n", list+3);
    printf("address of list + 4 \t= %p\n", list+4);
    printf("address of list[4] \t= %p\n", &list[4]);  //�ε��� 4�� �ּ� ���

    free(plist[0]);  //���� �Ҵ� ���� 
}