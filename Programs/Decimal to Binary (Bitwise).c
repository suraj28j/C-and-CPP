#include<stdio.h>
#include<conio.h>

void main()
{
    int i,j,a[4],num = 5;
    for(i=0;num!=0;i++)
    {
        a[i] = num&1;
        num = num>>1;
    }
   for(j=i-1;j>=0;j--)
   {
       printf("%d",a[j]);
   }
   getch();
}
