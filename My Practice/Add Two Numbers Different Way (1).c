#include<stdio.h>
#include<conio.h>

int main()
{
    int n1,n2;
    printf("Enter 1st Number :- ");
    scanf("%d",&n1);
    printf("Enter 2nd Number :- ");
    scanf("%d",&n2);
    while(n2!=0)
    {
        n1++;
        n2--;
    }
    printf("Sum of These Numbers are %d",n1);
    getch();
    return 0;
}
