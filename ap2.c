#include <stdio.h> 
#include <stdlib.h>

void main() {
    printf("[---------배기원 2021041081---------]\n");

    int list[5];  //list 배열 선언 
    int *plist[5];  //포인터 배열 plist 선언

    list[0] = 10;  
    list[1] = 11;

    plist[0] = (int*)malloc(sizeof(int));  //인덱스 0에 동적 할당

    printf("list[0] \t\t= %d\n", list[0]);  //인덱스 0의 값을 출력
    printf("address of list \t= %p\n", list);  //배열의 이름은 주소
    printf("address of list[0] \t= %p\n", &list[0]);  //인덱스 0의 주소=배열의 주소
    printf("address of list + 0 \t= %p\n", list+0);  
    printf("address of list + 1 \t= %p\n", list+1);  //배열+1*(int의 크기 4byte)만큼 주소 이동 후 출력
    printf("address of list + 2 \t= %p\n", list+2);
    printf("address of list + 3 \t= %p\n", list+3);
    printf("address of list + 4 \t= %p\n", list+4);
    printf("address of list[4] \t= %p\n", &list[4]);  //인덱스 4의 주소 출력

    free(plist[0]);  //동적 할당 해제 
}