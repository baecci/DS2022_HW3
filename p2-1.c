#include <stdio.h>

#define MAX_SIZE 100

float sum(float [], int);  //sum함수 선언
float input[MAX_SIZE], answer;  //실수형 배열과 변수 전역으로 선언
int i;

void main(void) {
    printf("[---------배기원 2021041081---------]\n");
    
    for(i=0; i < MAX_SIZE; i++)  //배열 초기화
        input[i] = i;

    /* for checking call by reference */ 
    printf("address of input = %p\n", input);  //input배열 주소 출력

    answer = sum(input, MAX_SIZE);  //input배열의 주소를 넘겨줌
    printf("The sum is: %f\n", answer);  
}

float sum(float list[], int n) {
    printf("value of list = %p\n", list);  //참조에 의한 호출로 list배열이 input의 주소를 출력
    printf("address of list = %p\n\n", &list);  //매개체인 list배열 자체의 주소 출력

    int i;
    float tempsum = 0; 
    for(i = 0; i < n; i++)  //Max를 n이 값에 의한 호출로 받음. (원본의 값은 변경되지 않는다) 
        tempsum += list[i];  //참조에 의한 호출로 input 값 모두 합하여 리턴 후 출력

    return tempsum;
}