#include<stdio.h>
#include<conio.h>

void main()
{
    int i,num1,num2;
    printf("Enter 1st Number : ");
    scanf("%d",&num1);
    printf("Enter 2nd Number : ");
    scanf("%d",&num2);
    i = num1<num2 ? num1 : num2;
    for(i; i>0; i--)
    {
        if( num1%i == 0 && num2%i ==0)
            break;
    }
    printf("HCF of %d and %d is %d",num1,num2,i);
    getch();
}
