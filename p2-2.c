#include <stdio.h>

void print1 (int *ptr, int rows);  //print1 함수 선언

int main(){
    printf("[---------배기원 2021041081---------]\n");
    
    int one[] = {0, 1, 2, 3, 4};  //one배열 선언 및 초기화
    
    printf("one     = %p\n", one);  //배열의 이름은 주소이므로 one배열의 주소 출력
    printf("&one    = %p\n", &one);  //배열의 주소 출력
    printf("&one[0] = %p\n", &one[0]);  //인덱스 0의 주소는 배열의 시작주소
    printf("\n");

    print1(&one[0], 5);  //배열을 참조에 의한 호출로 넘겨줌

    return 0; 
}

void print1 (int *ptr, int rows){
    /* print out a one-dimensional array using a pointer */

    int i;
    printf ("Address \t Contents\n");  
    for (i = 0; i < rows; i++)  //참조에 의한 호출로 ptr에 i*(4byte)만큼 이동하여 해당 주소 간접 참조로 저장된 값을 출력
        printf("%p \t  %5d\n", ptr + i, *(ptr + i));  
    printf("\n");
}