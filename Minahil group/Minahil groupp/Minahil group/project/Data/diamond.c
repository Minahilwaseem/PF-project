#include "Data_header.h"

void diamond(int size, char symbol, int outlineColor, int fillColor, int posi)
{

    // Upper half of the diamond
    for (int i = 1; i <= size; i++)
    {
        position(posi, size);
        for (int j = 1; j <= size - i; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if (j == 1 || j == 2 * i - 1)
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
    // Lower half of thediamond
    for (int i = size - 1; i >= 1; i--)
    {
        position(posi, size);
        for (int j = 1; j <= size - i; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if (j == 1 || j == 2 * i - 1)
                setConsoleColor(outlineColor);
            else
                setConsoleColor(fillColor);
            printf("%c", symbol);
        }

        printf("\n");
    }
    ResetyPosition();
}

void hollowdiamond(int size, char symbol, int fillColor, int outlineColor, int posi)
{

    // Upper half of the diamond
    for (int i = 1; i <= size; i++)
    {
        position(posi, size);
        for (int j = 1; j <= size - i; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if (j == 1 || j == 2 * i - 1 || i == 1)
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
    // Lower half of thediamond
    for (int i = size - 1; i >= 1; i--)
    {
        position(posi, size);
        for (int j = 1; j <= size - i; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if (j == 1 || j == 2 * i - 1 || i == 1)
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