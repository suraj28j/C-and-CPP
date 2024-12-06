#include<stdio.h>
#include<conio.h>

void main()
{
    int i,j,num = 3;
    int binNum[10];
    for(i=0;num!=0;i++)
    {
       binNum[i] = num%2;
       num = num/2;
    }
    for(j=i-1;j>=0;j--)
    {
        printf("%d",binNum[j]);
    }
}
