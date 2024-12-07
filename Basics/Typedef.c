#include<stdio.h>
#include<conio.h>
#include<string.h>

typedef struct student
{
    int rollNo;
    char name[20];
    float mark;
}STUDENT;

void main()
{
    STUDENT s1;
    s1.rollNo = 28;
    strcpy(s1.name,"Suraj");
    s1.mark = 70.9;
    printf("Roll No is %d\nName %s\nMark %f",s1.rollNo,s1.name,s1.mark);
    getch();
}
