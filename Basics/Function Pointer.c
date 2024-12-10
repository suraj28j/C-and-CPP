#include<stdio.h>
#include<conio.h>

void fun1(void);
void fun2(int);
int fun3(void);
int fun4(int);

void main()
{
    // function pointer take nothing return nothing
    void (*p)();
    p = fun1;
    p();

    // function pointer take something return nothing
    void (*q)(int);
    q = fun2;
    q(2);


    // function pointer take nothing return something
    int result;
    int (*r)(void);
    r = fun3;
    result = r();
    printf("\nFunction %d",result);


     // function pointer take something return something
    int res;
    int (*s)(int);
    s = fun4;
    res = s(3);
    printf("\nFunction %d",res);

    getch();
}

void fun1()
{
    printf("Function 1");
}

void fun2(int x)
{
    printf("\nFunction %d",x);
}

int fun3()
{
    int x = 3;
    return x;
}

int fun4(int a)
{
    int b = 1;
    return a+b;
}
