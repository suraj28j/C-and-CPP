#include<stdio.h>
#include<conio.h>
int length(char*);

void main()
{
    char name[10];
    int len;
    printf("Enter Your Name : ");
    gets(name);
    len = length(&name[0]);
    printf("String length is %d ",len);
    getch();
}

int length(char *p)
{
    int i;
    for(i=0;*(p+i)!='\0';i++);
    return(i);
}
