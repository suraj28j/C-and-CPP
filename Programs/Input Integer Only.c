#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
    char ch;
    printf("Enter Number : ");
    while(1)
    {
        ch = getch();
        if(47<ch && 58>ch)
        {
            printf("%c",ch);
        }
        else
        {
            if(ch==8)
            {
                printf("\b");
                printf(" ");
                printf("\b");
            }
            else
            {
                if(ch==27)
                exit(0);
            }
        }

    }
}


