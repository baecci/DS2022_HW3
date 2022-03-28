#include <stdio.h> 
#include <stdlib.h>

void main() {
    printf("[---------배기원 2021041081---------]\n");

    int list[5]; //배열 선언
    int *plist[5] = {NULL,}; //포인터 배열 선언 후 초기화

    plist[0] = (int *)malloc(sizeof(int)); //plist 배열 인덱스 0을 int형으로 동적 할당
    
    list[0] = 1;
    list[1] = 100; 

    *plist[0] = 200;

    printf("value of list[0]         = %d\n", list[0]);  //인덱스 0의 값을 출력
    printf("address of list[0]       = %p\n", &list[0]);  //인덱스 0 즉, 배열의 주소 출력
    printf("value of list            = %p\n", list);  //배열의 이름은 주소
    printf("address of list (&list)  = %p\n", &list);  //배열의 주소 출력

    printf("----------------------------------------\n\n");
    printf("value of list[1]   = %d\n", list[1]);
    printf("address of list[1] = %p\n", &list[1]);  //인덱스 1의 주소 출력
    printf("value of *(list+1) = %d\n", *(list + 1));  //배열의 데이터 타입 크기만큼(int=4byte) 주소 이동 후 간접 참조 
    printf("address of list+1  = %p\n", list+1);  //데이터 타입의 크기만큼 주소 이동하여 출력

    printf("--------------------------------------\n\n");
    printf("value of *plist[0] = %d\n", *plist[0]);  //간접 참조하여 인덱스 0의 값을 출력
    printf("&plist[0]          = %p\n", &plist[0]);  //포인터 배열 인덱스 0의 주소 출력
    printf("&plist             = %p\n", &plist);  
    printf("plist              = %p\n", plist);  //배열의 이름은 주소
    printf("plist[0]           = %p\n", plist[0]);  //인덱스 0에 동적 할당되므로 주소가 매번 바뀜
    printf("plist[1]           = %p\n", plist[1]);  //Null로 초기화 되어있음
    printf("plist[2]           = %p\n", plist[2]);
    printf("plist[3]           = %p\n", plist[3]);
    printf("plist[4]           = %p\n", plist[4]);

    free(plist[0]); //동적 할당 해제
}