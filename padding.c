#include <stdio.h> 

struct student {  //student ���� ������ Ÿ�� ����
    char lastName[13];   /* 13 bytes */
    int studentId;       /* 4 bytes */ 
    short grade;         /* 2 bytes */
};

int main() {
    printf("[---------���� 2021041081---------]\n");

    struct student pst;  //student Ÿ�� ����ü ���� pst ����

    printf("size of student = %ld\n", sizeof(struct student));  //19byte+(paddingó���� ���� lastname�� 3byte, grade�� 2byte) �� 24byte ���
    printf("size of int = %ld\n", sizeof(int));  //int�� ũ�� ���
    printf("size of short = %ld\n", sizeof(short));  //short�� Ÿ���� ũ�� ���

    return 0; 
}