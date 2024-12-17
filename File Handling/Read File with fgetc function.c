#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
    char ch;
    FILE *fp;

    fp = fopen("test.txt","r+");

    if(fp==NULL)
    {
        printf("File cannot open");
        exit(1);
    }

    ch = fgetc(fp);
    while(!feof(fp))
    {
        printf("%c",ch);
        ch = fgetc(fp);
    }

    fclose(fp);
    getch();
}
