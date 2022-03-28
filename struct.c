#include <stdio.h> 

struct student1 {  //student1 ���� ������ Ÿ�� ����
    char lastName; 
    int  studentId; 
    char grade;
};

typedef struct {  //typedef �������� ���� ������ Ÿ�� ���� �� student2 ����ü ���� ����
    char lastName; 
    int  studentId; 
    char grade;
} student2; 

int main() {
    printf("[---------���� 2021041081---------]\n");

    struct student1 st1 = {'A', 100, 'A'};  //student1Ÿ�� st1 ����ü ���� ���� �� �ʱ�ȭ

    printf("st1.lastName = %c\n", st1.lastName);  //st1�� lastName�� ����� ��(A) ���
    printf("st1.studentId = %d\n", st1.studentId); //st1�� studentId�� ����� ��(100) ���
    printf("st1.grade = %c\n", st1.grade);  //st1�� grade�� ����� ��(A) ���


    student2 st2 = {'B', 200, 'B'};  //student2Ÿ�� st2 ����ü ���� ���� �� �ʱ�ȭ

    printf("\nst2.lastName = %c\n", st2.lastName);  //�� st1�� ���� �������� st2 ���
    printf("st2.studentId = %d\n", st2.studentId);
    printf("st2.grade = %c\n", st2.grade);


    student2 st3; 
    
    st3 = st2;  //���� �߻�! ��ü ������ �������� ����.
                //����ü�� ��������� ������ (ex> st3.studentId = st2.studentId)
                //���ڿ� Ÿ�� ����� strcpy �Լ��� ī��&�� ����

    printf("\nst3.lastName = %c\n", st3.lastName);
    printf("st3.studentId = %d\n", st3.studentId);
    printf("st3.grade = %c\n", st3.grade);

    /* equality test */
    if(st3 == st2)      /* not working */  //�� 34~36�� �ּ� ����
        printf("equal\n");
    else
        printf("not equal\n"); 
        
    return 0;
}