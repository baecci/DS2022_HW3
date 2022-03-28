#include <stdio.h> 
#include <stdlib.h>

void main() {
    printf("[---------���� 2021041081---------]\n");

    int list[5]; //�迭 ����
    int *plist[5] = {NULL,}; //������ �迭 ���� �� �ʱ�ȭ

    plist[0] = (int *)malloc(sizeof(int)); //plist �迭 �ε��� 0�� int������ ���� �Ҵ�
    
    list[0] = 1;
    list[1] = 100; 

    *plist[0] = 200;

    printf("value of list[0]         = %d\n", list[0]);  //�ε��� 0�� ���� ���
    printf("address of list[0]       = %p\n", &list[0]);  //�ε��� 0 ��, �迭�� �ּ� ���
    printf("value of list            = %p\n", list);  //�迭�� �̸��� �ּ�
    printf("address of list (&list)  = %p\n", &list);  //�迭�� �ּ� ���

    printf("----------------------------------------\n\n");
    printf("value of list[1]   = %d\n", list[1]);
    printf("address of list[1] = %p\n", &list[1]);  //�ε��� 1�� �ּ� ���
    printf("value of *(list+1) = %d\n", *(list + 1));  //�迭�� ������ Ÿ�� ũ�⸸ŭ(int=4byte) �ּ� �̵� �� ���� ���� 
    printf("address of list+1  = %p\n", list+1);  //������ Ÿ���� ũ�⸸ŭ �ּ� �̵��Ͽ� ���

    printf("--------------------------------------\n\n");
    printf("value of *plist[0] = %d\n", *plist[0]);  //���� �����Ͽ� �ε��� 0�� ���� ���
    printf("&plist[0]          = %p\n", &plist[0]);  //������ �迭 �ε��� 0�� �ּ� ���
    printf("&plist             = %p\n", &plist);  
    printf("plist              = %p\n", plist);  //�迭�� �̸��� �ּ�
    printf("plist[0]           = %p\n", plist[0]);  //�ε��� 0�� ���� �Ҵ�ǹǷ� �ּҰ� �Ź� �ٲ�
    printf("plist[1]           = %p\n", plist[1]);  //Null�� �ʱ�ȭ �Ǿ�����
    printf("plist[2]           = %p\n", plist[2]);
    printf("plist[3]           = %p\n", plist[3]);
    printf("plist[4]           = %p\n", plist[4]);

    free(plist[0]); //���� �Ҵ� ����
}