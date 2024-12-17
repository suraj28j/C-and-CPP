#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
    char ch[10];
    FILE *fp;
    fp = fopen("test.txt","r");
    if(fp==NULL)
    {
        printf("can not open file");
    }

    //fgets(ch,10,fp);
    //printf("%s",ch); // only 10 character print

    while(fgets(ch,2,fp)!=NULL)
    {
        printf("%s",ch);
    }


    fclose(fp);
    getch();
}
