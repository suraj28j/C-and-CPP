#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

void main()
{
    int i;
    FILE *fp;
    char s[] = "My name is Suraj";

    fp = fopen("test.txt","w");

    if(fp==NULL)
    {
        printf("File cannot open");
        exit(1);
    }
    for(i=0; i<strlen(s); i++)
    {
        fputc(s[i],fp);
    }
    fclose(fp);
    getch();
}
