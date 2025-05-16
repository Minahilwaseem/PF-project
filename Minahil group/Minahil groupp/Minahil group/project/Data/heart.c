#include "Data_header.h"

void heart(int size, char symbol, int fillColor, int outlineColor,int posi)
{
    // upper part of the heart
    for (int i = size / 2; i <= size; i += 2)
    {
        position(posi, size);
        for (int j = 1; j < size - i; j += 2)

            printf(" ");
        for (int j = 1; j <= i; j++)
        {
            if (i == size / 2 + 1 || j == 1 || j == i)
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
        for (int j = 1; j <= size - i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            if (i == size / 2 + 1 || j == 1 || j == i)
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
    // lower part of heart
    for (int i = size; i >= 1; i--)
    {position(posi, size);
        for (int j = i; j < size; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= (i * 2) - 1; j++)
        {
            if (i == 1 || j == 1 || j == (i * 2) - 1)
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


void hollowheart(int size, char symbol, int fillColor, int outlineColor,int posi)
{
    // upper part of the heart
    for (int i = size / 2; i <= size; i += 2)
    {position(posi, size);
        for (int j = 1; j < size - i; j += 2)

            printf(" ");
        for (int j = 1; j <= i; j++)
        {
            if (i == size / 2 + 1 || j == 1 || j == i)
            {
                setConsoleColor(outlineColor);
                printf("%c", symbol);
            }
            else
            {
                printf(" ");
            }
        }
        for (int j = 1; j <= size - i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            if (i == size / 2 + 1 || j == 1 || j == i)
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
    // lower part of heart
    for (int i = size; i >= 1; i--)
    {position(posi, size);
        for (int j = i; j < size; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= (i * 2) - 1; j++)
        {
            if (i == 1 || j == 1 || j == (i * 2) - 1)
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