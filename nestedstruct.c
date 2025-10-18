#include<stdio.h>
typedef struct name
    {
        char fname[30];
    }n;
    typedef struct mark
    {
        int m1;
        int m2;
        int m3;
    }m;
    typedef struct studentRecord
    {
        n nm;
        m mk;
        int id;
        int age;
    }strec;
int main()
{
    strec student;
    printf("Here you can save your student record\n");
    printf("one student record you can save\n");
    printf("Enter your name\n");
    scanf("%[^\n]",student.nm.fname);
    printf("Enter your marks now");
    printf("Enter m1");
    scanf("%d",student.mk.m1);
    printf("Enter m2");
    scanf("%d",student.mk.m2);
    printf("Enter m1");
    scanf("%d",student.mk.m3);
    printf("Enter your student id");
    scanf("%d",student.id);
    printf("Enter your age");
    scanf("%d",student.age);


    printf("showing result");
    
    printf("name:%d",student.nm.fname);
    printf("marks::%d",student.mk.m1);
    printf("marks::%d",student.mk.m2);
    printf("marks::%d",student.mk.m3);
    printf("ID::%d",student.id);
    printf("Age::%d",student.age);
    return 0;
}