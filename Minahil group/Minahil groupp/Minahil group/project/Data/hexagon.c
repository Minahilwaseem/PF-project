#include "Data_header.h"

void hexagon(int size, char symbol, int fillColor, int outlineColor,int posi)
{
    // Upper half of the hexago n
    for (int i = 1; i <= size; i++)
    {position(posi, size);
        for (int j = 1; j <= size - i; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= 2 * i + 1; j++)
        {
            if (j == 1 || j == 2 * i + 1 || i == 1)
            {
                setConsoleColor(outlineColor);
            }
            else
            {
                setConsoleColor(fillColor);
            }
            printf("%c", symbol);
        }
        printf("\n");
    }
    // Lower half of the hexagon
    for (int i = size; i >= 1; i--)
    {position(posi, size);
        for (int j = 1; j <= size - i; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= 2 * i + 1; j++)
        {
            if (j == 1 || j == 2 * i + 1 || i == 1)
            {
                setConsoleColor(outlineColor);
            }
            else
            {
                setConsoleColor(fillColor);
            }
            printf("%c", symbol);
        }
        printf("\n");
    }ResetyPosition();
}


void hollowhexagon(int size, char symbol, int fillColor, int outlineColor,int posi)
{
    // Upper half of the hexago n
    for (int i = 1; i <= size; i++)
    {position(posi, size);
        for (int j = 1; j <= size - i; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= 2 * i + 1; j++)
        {
            if (j == 1 || j == 2 * i + 1 || i == 1)
            {
                setConsoleColor(outlineColor);
                printf("%c",symbol);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    // Lower half of the hexagon
    for (int i = size; i >= 1; i--)
    {position(posi, size);
        for (int j = 1; j <= size - i; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= 2 * i + 1; j++)
        {
            if (j == 1 || j == 2 * i + 1 || i == 1)
            {
                setConsoleColor(outlineColor);
                printf("%c",symbol);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }ResetyPosition();
}