#include <stdio.h>

void print1 (int *ptr, int rows);  //print1 �Լ� ����

int main(){
    printf("[---------���� 2021041081---------]\n");
    
    int one[] = {0, 1, 2, 3, 4};  //one�迭 ���� �� �ʱ�ȭ
    
    printf("one     = %p\n", one);  //�迭�� �̸��� �ּ��̹Ƿ� one�迭�� �ּ� ���
    printf("&one    = %p\n", &one);  //�迭�� �ּ� ���
    printf("&one[0] = %p\n", &one[0]);  //�ε��� 0�� �ּҴ� �迭�� �����ּ�
    printf("\n");

    print1(&one[0], 5);  //�迭�� ������ ���� ȣ��� �Ѱ���

    return 0; 
}

void print1 (int *ptr, int rows){
    /* print out a one-dimensional array using a pointer */

    int i;
    printf ("Address \t Contents\n");  
    for (i = 0; i < rows; i++)  //������ ���� ȣ��� ptr�� i*(4byte)��ŭ �̵��Ͽ� �ش� �ּ� ���� ������ ����� ���� ���
        printf("%p \t  %5d\n", ptr + i, *(ptr + i));  
    printf("\n");
}