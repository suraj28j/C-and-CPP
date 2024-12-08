#include<stdio.h>
#include<conio.h>

void main()
{
    int num=0;
    char ch;
    printf("Enter a number : ");
    while(1)
    {
        ch = getch();
        if(ch>47 && ch<58)
        {
            printf("%c",ch);
            num = num*10+ch-48;
        }
        else
        {
            if(ch==8)
            {
                printf("\b \b");
                num = num/10;
            }
            else
            {
                if(ch==13)
                    break;
            }
        }

    }

    printf("\nYou Enter %d",num);
}
