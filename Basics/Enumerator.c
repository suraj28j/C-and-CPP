#include<stdio.h>
#include<conio.h>

enum boolen isEven(int);

enum boolen
{
    false,true
};

enum boolen isEven(int x)
{
    if(x%2==0)
        return (true);
    else
        return (false);
};

void main()
{
    int num;
    enum boolen result;
    printf("Enter a number : ");
    scanf("%d",&num);
    result = isEven(num);
    if(result == true)
        printf("%d is Even Number",num);
    else
        printf("%d is Odd Number",num);

    getch();
}
