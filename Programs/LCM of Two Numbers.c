#include<stdio.h>
#include<conio.h>

void main()
{
    int i,num1,num2;
    printf("Enter 1st Number :- ");
    scanf("%d",&num1);
    printf("Enter 2nd Numbers :- ");
    scanf("%d",&num2);
    for(i=num2>num1?num2:num1 ; i<=num1*num2 ; i++)
    {
        if(i%num1==0 && i%num2==0)
            break;
    }

    printf("LCM of %d and %d is %d",num1,num2,i);
    getch();
}
