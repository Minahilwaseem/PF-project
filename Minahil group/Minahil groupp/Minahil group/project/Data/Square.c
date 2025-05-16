#include "Data_header.h"

void square(int size, char symbol, int fillColor, int outlineColor, int posi)
{

    for (int i = 1; i <= size; i++)
    {
        position(posi, size);
        for (int j = 1; j <= size; j++)
        {
            if (i == 1 || j == 1 || i == size || j == size)
            {
                setConsoleColor(outlineColor);
                printf("%c", symbol);
            }
            else
            {
                setConsoleColor(fillColor);
                printf("%c", symbol);
            }
        }
        printf("\n");
    }
    ResetyPosition();
}

void hollowsquare(int size, char symbol, int fillColor, int outlineColor, int posi)
{

    for (int i = 1; i <= size; i++)
    {
        position(posi, size);
        for (int j = 1; j <= size; j++)
        {
            if (i == 1 || i == size || j == 1 || j == size)
            {
                setConsoleColor(outlineColor);
                printf("%c", symbol);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    ResetyPosition();
}