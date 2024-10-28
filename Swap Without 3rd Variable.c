#include<stdio.h>
#include<conio.h>

void main(){
    int num1,num2;
    printf("Enter 1st Number : ");
    scanf("%d",&num1);
    printf("Enter 2nd Number : ");
    scanf("%d",&num2);
    num1 = num1+num2;
    num2 = num1-num2;
    num1 = num1-num2;
    printf("1st Number is %d \n2nd Number is %d",num1,num2);
    getch();
}
