#include<stdio.h>
#include<conio.h>

void main()
{
    int i,j,k=0;
    for(i=2; i<100; i++)
    {
        for(j=(i-1); j>1; j--)
        {
            if(i%j==0)
                k=1;
        }
        if(k==0)
            printf("%d ",i);
        k=0; // reset k
    }
    getch();
}
