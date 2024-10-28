#include<stdio.h>
#include<conio.h>

void main(){
    int num1,num2,temp;
    printf("Enter 1st Number : ");
    scanf("%d",&num1);
    printf("Enter 2nd Number : ");
    scanf("%d",&num2);
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("1st Number is %d \n2nd Number is %d",num1,num2);
    getch();
}
