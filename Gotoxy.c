//Goto XY
#include<stdio.h>
#include <windows.h>
COORD pos={0,0};
main()
{
    system("color F1");
    gotoxy(30,1);
    printf("Welcome to C Language");
    gotoxy(30,2);
    printf("``````` `` ` ````````");
    printf("\n");
}

gotoxy (int x,int y)
{
    pos.X=x;
    pos.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}
