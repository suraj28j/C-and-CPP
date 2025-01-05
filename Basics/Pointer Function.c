#include<stdio.h>
#include<conio.h>

void increment(int);
int sum(int,int);

void main()
{
    void (*p)(int); // pointer function
    p = increment;
    p(5);

    int (*q)(int,int); // pointer function
    q = sum;
    printf("\nSum is %d",q(2,3));
    getch();
}

void increment(int x)
{
    printf("Increased value is %d",++x);
}

int sum(int x,int y)
{
    return (x+y);
}
