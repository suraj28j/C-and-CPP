#include<stdio.h>
#include<conio.h>
#include<windows.h>

/*
Initial Day

2000 - Sunday => 1
1900 - Monday => 2
1800 - Wednesday => 4
1700 - Friday => 6

*/
void loading(void);
void gotoxy(int,int);
void box(void);

int setInitDay(int);
int countYears(int);
int countDays(int);

int setInitDay(int y)
{
    int initialDay;
    if(y>=2000)
        initialDay = 1;
    else
    {
        if(y>=1900 && y<2000)
            initialDay=2;
        else
        {
            if(y>=1800 && y<1900)
                initialDay = 4;
            else
                initialDay = 6;
        }
    }
    return initialDay;
}

int countYears(int y)
{
    int currentYear,leapYears,years;
    years = y%100-1;
    leapYears = years/4;
    currentYear = (y%100)%4 == 0 ? 1 : 0; // current year is leap year or not
    return (years+leapYears+currentYear);
}

int countDays(int m)
{
    int i,sum=0,months[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    for(i=0; i< m-1; i++)
    {
        sum = sum+months[i];
    }
    return sum;
}

void main()
{
    //loading();
    system("cls");

    int d,m,y,initDay,yearSum,monthSum,total,result;

    while(1)
    {
        box();
        gotoxy(28,2);
        printf("Day Finder v1.0\n");
        gotoxy(24,4);
        printf("Developed by Suraj Kumar");

        gotoxy(3,10);
        printf("Enter Day (1-30) : ");
        scanf("%d",&d);

        gotoxy(3,12);
        printf("Enter Month (1-12) : ");
        scanf("%d",&m);

        gotoxy(3,14);
        printf("Enter Year : ");
        scanf("%d",&y);

        initDay = setInitDay(y);
        yearSum = countYears(y);
        monthSum = countDays(m);
        total = (yearSum+monthSum+d)%7;
        result = initDay+total;
        if(result>7)
            result = result%7;

        switch(result)
        {
        case 1:
            gotoxy(45,14);
            printf("It's Sunday");
            break;
        case 2:
            gotoxy(45,14);
            printf("It's Monday");
            break;
        case 3:
            gotoxy(45,14);
            printf("It's Tuesday");
            break;
        case 4:
            gotoxy(45,14);
            printf("It's Wednesday");
            break;
        case 5:
            gotoxy(45,14);
            printf("It's Thursday");
            break;
        case 6:
            gotoxy(45,14);
            printf("It's Friday");
            break;
        case 7:
            gotoxy(45,14);
            printf("It's Saturday");
            break;
        default :
            printf("Something Wrong !");
        }

        gotoxy(3,16);
        printf("Press any key to start again..");
        getch();

        system("CLS");
    }

    getch();
}



void gotoxy(int x,int y)
{
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}

void loading()
{
    int i,j;
    gotoxy(45,12);
    printf("Loading.....");
    gotoxy(45,13);
    for(i=1; i<=25; i++)
    {
        for(j=0; j<=100000000; j++);
        printf("%c",178);
    }
}

void box()
{
    int i,j;
    for(i=0; i<25; i++)
    {
        for(j=0; j<70; j++)
        {
            if(i==0 || i==6 || i==24)
                printf("%c",205);
            else
            {
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
