#include<stdio.h> 
#include<stdlib.h>

void main(){
    printf("[---------���� 2021041081---------]\n");

    int **x;  //���������� x����. �ʱ�ȭ �Ǿ� ���� �ʴ�.

    printf("sizeof(x) = %lu\n", sizeof(x));  //x�� ������ ũ��(int) ���
    printf("sizeof(*x) = %lu\n", sizeof(*x));  //�ʱ�ȭ �Ǿ� ���� �ʾƵ� *x�� �ִ� �������ּҴ� int�� 
    printf("sizeof(**x) = %lu\n", sizeof(**x));  //*x�� ����Ű�� �������ּҿ� ����� ������ ���� int��
}