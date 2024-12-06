#include<stdio.h>
#include<conio.h>

void main()
{
    int i,a[5],*p;
    p = &a[0];
    for(i=0;i<5;i++)
    {
        printf("Enter %d Number : ",i+1);
        scanf("%d",p+i);
    }
    for(i=0;i<5;i++)
    {
        printf("%d ",*(p+i));
    }
    getch();
}
