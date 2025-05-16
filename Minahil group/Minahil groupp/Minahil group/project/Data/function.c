#include "Data_header.h"
#include <windows.h>

void setConsoleColor(int color)
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);
}

void gotoxy(int x, int y)
{
    COORD pos;
    pos.X = x;
    pos.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

int y = 9;

void position(int posi, int size)
{

    int x;
    if (posi == 108)
    {
        x = 0;
        y++;
        gotoxy(x, y);
    }
    if (posi == 109)
    {
        x = 55;
        y++;
        gotoxy(x, y);
    }
    if (posi == 114)
    {
        x = 120 - size;
        y++;
        gotoxy(x, y);
    }
}

void ResetyPosition()
{
    y = 9;
}