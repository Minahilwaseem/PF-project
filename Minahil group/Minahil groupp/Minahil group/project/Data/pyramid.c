#include "Data_header.h"

void pyramid(int size, char symbol, int fillColor, int outlineColor, int posi)
{
    for (int i = 1; i <= size; i++)
    {
        position(posi, size);
        for (int j = 1; j <= size - i; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= 2 * i - 1; j++)
        {

            if (j == 1 || j == 2 * i - 1 || i == size)
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
    ResetyPosition();
}

void invertedpyramid(int size, char symbol, int fillColor, int outlineColor, int posi)
{
    for (int i = size - 1; i >= 1; i--)
    {
        position(posi, size);
        for (int j = 1; j <= size - i; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if (j == 1 || j == 2 * i - 1 || i == size - 1 || i == 1)
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

void hollowpyramid(int size, char symbol, int fillColor, int outlineColor, int posi)
{
    for (int i = 1; i <= size; i++)
    {
        position(posi, size);
        for (int j = 1; j <= size - i; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= 2 * i - 1; j++)
        {

            if (j == 1 || j == 2 * i - 1 || i == 1 || i == size)
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

void invertedhollowpyramid(int size, char symbol, int fillColor, int outlineColor, int posi)
{
    for (int i = size - 1; i >= 1; i--)
    {
        position(posi, size);
        for (int j = 1; j <= size - i; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if (j == 1 || j == 2 * i - 1 || i == 1 || i == size - 1)
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