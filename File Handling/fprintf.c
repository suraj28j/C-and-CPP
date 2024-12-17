#include<stdio.h>
#include<conio.h>

void main()
{
    int num1,num2;
    FILE *fp;
    fp = fopen("sum.txt","w");
    printf("Enter 1st Number : ");
    scanf("%d",&num1);
    printf("Enter 2nd Number : ");
    scanf("%d",&num2);

    fprintf(fp,"Sum of %d and %d is %d",num1,num2,num1+num2);
    fclose(fp);
    getch();
}
