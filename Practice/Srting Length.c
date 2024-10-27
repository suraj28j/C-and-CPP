#include<stdio.h>
#include<conio.h>

int main()
{
    char str[100];
    int i;
    printf("Enter a String :- ");
    scanf("%s",&str);
    for(i=0;str[i]!='\0';i++);
    printf("String Length is %d",i);
    getch();
    return 0;
}
