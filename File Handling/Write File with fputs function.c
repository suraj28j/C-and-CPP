#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
    char username[20];
    FILE *fp;
    fp = fopen("test.txt","a");
    if(fp==NULL)
    {
        printf("Can't open file");
    }
    printf("Enter Your Name : ");
    gets(username);
    fputs(username,fp);
    fclose(fp);
    printf("Data saved successfully");
    getch();
}
