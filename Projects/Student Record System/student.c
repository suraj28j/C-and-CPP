#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>

void loading(void);
void gotoxy(int,int);
void box(void);

void reg(void);
void login(void);
void modify(void);
void del(void);

struct student{
    int id;
    char pwd[12],name[20],branch[15];
    float mark;
};

void main(){
    loading();
    system("cls");

    int s;
    while(1){
        box();
        gotoxy(24,2);
        printf("STUDENT RECORD SYSTEM\n");
        gotoxy(14,3);
        printf("Govind Ballabh Pant Polytechnic, Lucknow");
        gotoxy(28,4);
        printf("Batch : 2010");

        gotoxy(3,10);
        printf("1. New Registration");
        gotoxy(3,12);
        printf("2. Login");
        gotoxy(3,14);
        printf("3. Modify");
        gotoxy(3,16);
        printf("4. Delete");
        gotoxy(3,18);
        printf("5. Exit");
        gotoxy(3,20);
        printf("Choose your option...");
        scanf("%d",&s);
        switch(s){
            case 1: reg();
            break;
            case 2: login();
            break;
            case 3: modify();
            break;
            case 4: del();
            break;
            case 5: exit(1);
            default:gotoxy(3,22);
            printf("Enter right key");
            getch();
        }
        system("CLS");
    }


    getch();
}

void gotoxy(int x,int y){
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}

void loading(){
    int i,j;
    gotoxy(45,12);
    printf("Loading.....");
    gotoxy(45,13);
    for(i=1;i<=25;i++)
    {
        for(j=0;j<=100000000;j++);
        printf("%c",178);
    }
}

void box(){
    int i,j;
    for(i=0;i<25;i++){
        for(j=0;j<70;j++){
                if(i==0 || i==6 || i==24){
                    printf("%c",205);
                }
                else{
                    if(j==0 || j==68)
                        printf("%c",186);
                    if(j==34 && i>6)
                        printf("%c",186);
                    else
                        printf(" ");
                }
        }
        printf("\n");
    }
    gotoxy(0,0);
    printf("%c",201);
    gotoxy(69,0);
    printf("%c",187);
    gotoxy(0,6);
    printf("%c",204);
    gotoxy(0,24);
    printf("%c",200);
    gotoxy(35,6);
    printf("%c",203);
    gotoxy(69,6);
    printf("%c",185);
    gotoxy(35,24);
    printf("%c",202);
    gotoxy(69,24);
    printf("%c",188);
}

// Registration
void reg(){
    struct student s1;
    char ch;
    int i=0;

    FILE *fp;
    fp = fopen("project1.dat","ab+");

    gotoxy(40,10);
    printf("Id : ");
    scanf("%d",&s1.id);

    gotoxy(40,12);
    printf("Name : ");
    fflush(stdin);
    gets(s1.name);

    gotoxy(40,14);
    printf("Password : ");
    while(1){
        ch=getch();
        if(ch==13){
            s1.pwd[i]='\0';
            break;
        }
        else{
            if(ch==8){
                if(i>0){
                    i--;
                    printf("\b \b");
                }
            }
            else{
                if(ch==9 || ch==32)
                    continue;
                else{
                    s1.pwd[i]=ch;
                    i++;
                    printf("%c",ch);
                }
            }
        }
    }

    gotoxy(40,16);
    printf("Branch : ");
    fflush(stdin);
    gets(s1.branch);

    gotoxy(40,18);
    printf("Mark : ");
    scanf("%f",&s1.mark);

    fwrite(&s1,sizeof(s1),1,fp);
    fclose(fp);

    gotoxy(40,20);
    printf("Registration successful");
    getch();
}

// Loging
void login(){
    struct student s1;
    int id,i=0;
    char ch,pwd[12];

    FILE *fp;
    fp = fopen("project1.dat","rb");

    gotoxy(40,10);
    printf("Id : ");
    scanf("%d",&id);

    gotoxy(40,12);
    printf("Password : ");
    while(1){
        ch=getch();
        if(ch==13){
            pwd[i]='\0';
            break;
        }
        else{
            if(ch==8){
                if(i>0){
                    i--;
                    printf("\b \b");
                }
            }
            else{
                if(ch==9 || ch==32)
                    continue;
                else{
                    pwd[i]=ch;
                    i++;
                    printf("*");
                }
            }
        }
    }

    i=0;
    while(fread(&s1,sizeof(s1),1,fp)!=0){
        if(id==s1.id && strcmp(pwd,s1.pwd)==0){
            gotoxy(40,14);
            printf("Name : %s",s1.name);
            gotoxy(40,16);
            printf("Branch : %s",s1.branch);
            gotoxy(40,18);
            printf("Mark : %0.2f",s1.mark);
            i++;
            break;
            }
        }
        if(i==0){
            gotoxy(40,14);
            printf("Id or Password wrong");
            }

    getch();
}

// Modify
void modify(){
    struct student s1;
    char ch,pwd[12];
    int i,id;
    FILE *fp;
    fp = fopen("project1.dat","rb+");

    gotoxy(40,10);
    printf("Id : ");
    scanf("%d",&id);

    gotoxy(40,12);
    printf("Password : ");
    while(1){
        ch=getch();
        if(ch==13){
            pwd[i]='\0';
            break;
        }
        else{
            if(ch==8){
                if(i>0){
                    i--;
                    printf("\b \b");
                }
            }
            else{
                if(ch==9 || ch==32)
                    continue;
                else{
                    pwd[i]=ch;
                    i++;
                    printf("*");
                }
            }
        }
    }


    i=0;
    rewind(fp);
    while(fread(&s1,sizeof(s1),1,fp)!=0){
        if(id==s1.id && strcmp(pwd,s1.pwd)==0){

            gotoxy(40,14);
            printf("Name : ");
            fflush(stdin);
            gets(s1.name);

            gotoxy(40,16);
            printf("Branch : ");
            fflush(stdin);
            gets(s1.branch);

            gotoxy(40,18);
            printf("Mark : ");
            scanf("%f",&s1.mark);

            long long ln = sizeof(s1);
            fseek(fp,-ln,SEEK_CUR);

            fwrite(&s1,sizeof(s1),1,fp);
            fclose(fp);

            gotoxy(40,20);
            printf("Updated Successfully");
            i++;
        }
    }
    if(i==0){
            gotoxy(40,14);
            printf("Email Id or Password wrong");
        }
    getch();
}

// Delete
void del(){
    struct student s1;
    int id,i;
    char ch,pwd[12];

    FILE *fp, *tp;
    fp = fopen("project1.dat","r");
    tp = fopen("temp.dat","w");


    gotoxy(40,10);
    printf("Id : ");
    scanf("%d",&id);

    gotoxy(40,12);
    printf("Password : ");
    while(1){
        ch=getch();
        if(ch==13){
            pwd[i]='\0';
            break;
        }
        else{
            if(ch==8){
                if(i>0){
                    i--;
                    printf("\b \b");
                }
            }
            else{
                if(ch==9 || ch==32)
                    continue;
                else{
                    pwd[i]=ch;
                    i++;
                    printf("*");
                }
            }
        }
    }

    while(fread(&s1,sizeof(s1),1,fp)==1){
        if(id==s1.id && strcmp(pwd,s1.pwd)==0){
                gotoxy(40,14);
                printf("Data Matched");
        }
        else
            fwrite(&s1,sizeof(s1),1,tp);
    }

    fclose(fp);
    fclose(tp);
    remove("project1.dat");
    rename("temp.dat","project1.dat");

    gotoxy(40,14);
    printf("Data Deleted Successfully");

    getch();
}
