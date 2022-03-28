#include <stdio.h>

#define MAX_SIZE 100

float sum(float [], int);  //sum�Լ� ����
float input[MAX_SIZE], answer;  //�Ǽ��� �迭�� ���� �������� ����
int i;

void main(void) {
    printf("[---------���� 2021041081---------]\n");
    
    for(i=0; i < MAX_SIZE; i++)  //�迭 �ʱ�ȭ
        input[i] = i;

    /* for checking call by reference */ 
    printf("address of input = %p\n", input);  //input�迭 �ּ� ���

    answer = sum(input, MAX_SIZE);  //input�迭�� �ּҸ� �Ѱ���
    printf("The sum is: %f\n", answer);  
}

float sum(float list[], int n) {
    printf("value of list = %p\n", list);  //������ ���� ȣ��� list�迭�� input�� �ּҸ� ���
    printf("address of list = %p\n\n", &list);  //�Ű�ü�� list�迭 ��ü�� �ּ� ���

    int i;
    float tempsum = 0; 
    for(i = 0; i < n; i++)  //Max�� n�� ���� ���� ȣ��� ����. (������ ���� ������� �ʴ´�) 
        tempsum += list[i];  //������ ���� ȣ��� input �� ��� ���Ͽ� ���� �� ���

    return tempsum;
}