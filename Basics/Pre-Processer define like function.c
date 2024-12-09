#include<stdio.h>
#include<conio.h>
#define sum(a,b) a+b

void main()
{
    int x,y;
    printf("Enter 1st Number : ");
    scanf("%d",&x);
    printf("Enter 2nd Number : ");
    scanf("%d",&y);
    printf("Sum of %d and %d is %d",x,y,sum(x,y));
    getch();
}
