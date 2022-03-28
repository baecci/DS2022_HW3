#include <stdio.h> 

struct student {  //student 구조 데이터 타입 정의
    char lastName[13];   /* 13 bytes */
    int studentId;       /* 4 bytes */ 
    short grade;         /* 2 bytes */
};

int main() {
    printf("[---------배기원 2021041081---------]\n");

    struct student pst;  //student 타입 구조체 변수 pst 선언

    printf("size of student = %ld\n", sizeof(struct student));  //19byte+(padding처리로 인해 lastname에 3byte, grade에 2byte) 총 24byte 출력
    printf("size of int = %ld\n", sizeof(int));  //int형 크기 출력
    printf("size of short = %ld\n", sizeof(short));  //short형 타입의 크기 출력

    return 0; 
}