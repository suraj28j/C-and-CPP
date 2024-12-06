#include<stdio.h>
#include<conio.h>

void main()
{
    char name[5] = "Suraj";
    int i;
    for(i = 0;name[i]!='\0';i++)
    {
    printf("%c",name[i]);
    }

    char user[15];
    printf("Enter Username :- ");

    //scanf("%s",&user[0]);
    //scanf("%s",user);
    // [ Note :- scanf can not get multi words string.Space treat as delimiter (data separator) ]

    gets(user);

    printf("Username is %s",user);
    //puts(user);

    getch();
}
