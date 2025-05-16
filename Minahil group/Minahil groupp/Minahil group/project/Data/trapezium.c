#include "Data_header.h"

void trapezium(int size, char symbol, int fillColor, int outlineColor, int posi)
{
    for (int i = 1; i <= size; i++)
    {
        position(posi, size);
        for (int j = 1; j <= size - i; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= 2 * i + 1; j++)
        {
            if (i == size || i == 1 || j == 1 || j == 2 * i + 1)
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

void hollowtrapezium(int size, char symbol, int fillColor, int outlineColor, int posi)
{
    for (int i = 1; i <= size; i++)
    {
        position(posi, size);
        for (int j = 1; j <= size - i; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= 2 * i + 1; j++)
        {
            if (i == size || i == 1 || j == 1 || j == 2 * i + 1)
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