#include "Data_header.h"

void rectangle(int size, char symbol, int outlineColor, int fillColor,int posi)
{

    for (int i = 1; i <= size; i++)
    {
        position(posi, size);
        for (int j = 1; j <= size*2; j++)
        {
            if (i == 1 || j == 1 || i == size || j == size*2)
            {

                setConsoleColor(outlineColor);
                printf(" %c", symbol);
            }
            else
            {
                setConsoleColor(fillColor);
                printf(" %c", symbol);
            }
        }
        printf("\n");
    }
    ResetyPosition();
}

void hollowrectangle(int size, char symbol, int outlineColor, int fillColor,int posi)
{

    for (int i = 1; i <= size; i++)
    {
        position(posi, size);
        for (int j = 1; j <= size*2; j++)
        {
            if (i == 1 || j == 1 || i == size || j == size*2)
            {

                setConsoleColor(outlineColor);
                printf(" %c", symbol);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    ResetyPosition();
}