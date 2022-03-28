#include <stdio.h> 

struct student1 {  //student1 구조 데이터 타입 정의
    char lastName; 
    int  studentId; 
    char grade;
};

typedef struct {  //typedef 문장으로 구조 데이터 타입 정의 및 student2 구조체 변수 선언
    char lastName; 
    int  studentId; 
    char grade;
} student2; 

int main() {
    printf("[---------배기원 2021041081---------]\n");

    struct student1 st1 = {'A', 100, 'A'};  //student1타입 st1 구조체 변수 선언 및 초기화

    printf("st1.lastName = %c\n", st1.lastName);  //st1의 lastName에 저장된 값(A) 출력
    printf("st1.studentId = %d\n", st1.studentId); //st1의 studentId에 저장된 값(100) 출력
    printf("st1.grade = %c\n", st1.grade);  //st1의 grade에 저장된 값(A) 출력


    student2 st2 = {'B', 200, 'B'};  //student2타입 st2 구조체 변수 선언 및 초기화

    printf("\nst2.lastName = %c\n", st2.lastName);  //위 st1과 같은 형식으로 st2 출력
    printf("st2.studentId = %d\n", st2.studentId);
    printf("st2.grade = %c\n", st2.grade);


    student2 st3; 
    
    st3 = st2;  //오류 발생! 전체 구조는 동등하지 않음.
                //구조체의 멤버끼리는 동등함 (ex> st3.studentId = st2.studentId)
                //문자열 타입 멤버는 strcpy 함수로 카피&비교 가능

    printf("\nst3.lastName = %c\n", st3.lastName);
    printf("st3.studentId = %d\n", st3.studentId);
    printf("st3.grade = %c\n", st3.grade);

    /* equality test */
    if(st3 == st2)      /* not working */  //위 34~36줄 주석 참고
        printf("equal\n");
    else
        printf("not equal\n"); 
        
    return 0;
}