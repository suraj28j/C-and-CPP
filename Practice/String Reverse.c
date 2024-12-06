#include<conio.h>
#include<stdio.h>

void reverse(char *);

void main()
{
    char name[10];
    int i;
    printf("Enter Your Name : ");
    gets(name);
    reverse(&name[0]);
    for(i=0;name[i]!='\0';i++)
    {
        printf("%c",name[i]);
    }
    getch();
}

void reverse(char *p)
{
    int i,l,temp;
    for(l=0;p[l]!='\0';l++);
    for(i=0;i<l/2;i++)
    {
        temp = *(p+i);
        *(p+i) = *(p+l-1-i);
        *(p+l-1-i) = temp;
    }

}
