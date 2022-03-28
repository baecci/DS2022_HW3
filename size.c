#include<stdio.h> 
#include<stdlib.h>

void main(){
    printf("[---------배기원 2021041081---------]\n");

    int **x;  //이중포인터 x선언. 초기화 되어 있지 않다.

    printf("sizeof(x) = %lu\n", sizeof(x));  //x의 데이터 크기(int) 출력
    printf("sizeof(*x) = %lu\n", sizeof(*x));  //초기화 되어 있지 않아도 *x에 있는 쓰레기주소는 int형 
    printf("sizeof(**x) = %lu\n", sizeof(**x));  //*x가 가리키는 쓰레기주소에 저장된 쓰레기 값도 int형
}