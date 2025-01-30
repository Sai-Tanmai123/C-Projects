//Student Report
#include<stdio.h>
#include <windows.h>
#include "Lines.h"
COORD pos={0,0};
main()
{
    system("cls");
    system("color F1");
    drawline('-');
    gotoxy(51,3);
    printf("Student Marks List");
    gotoxy(0,4);
    drawline('-');
    gotoxy(58,7);
    printf("Name");
    gotoxy(10,7);
    printf("Roll No");
    gotoxy(103,7);
    printf("Average");
    gotoxy(0,8);
    drawline('~');
    gotoxy(50,11);
    printf("Data to Be Displayed\n");
    gotoxy(0,12);
    drawline('*');
    gotoxy(56,15);
    printf("Thank You :)\n");
    gotoxy(0,16);
    drawline('^');
    printf("\n");
}
gotoxy (int x,int y)
{
    pos.X=x;
    pos.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}
