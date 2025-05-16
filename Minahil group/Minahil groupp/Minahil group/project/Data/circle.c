#include "Data_header.h"

void circle(int size, char symbol, int fillColor, int outlineColor, int posi)
{
    for (int i = -size; i <= size; i++)
    {
        position(posi, size);
        for (int j = -size; j <= size; j++)
        {
            if (j * j + i * i <= size * size)
            {
                if (j * j + i * i == size * size || (j * j + i * i >= (size - 1) * (size - 1)))
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
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    ResetyPosition();
}

void hollowcircle(int size, char symbol, int fillColor, int outlineColor, int posi)
{
    for (int i = -size; i <= size; i++)
    {
        position(posi, size);
        for (int j = -size; j <= size; j++)
        {
            if (j * j + i * i <= size * size)
            {
                if (j * j + i * i == size * size || (j * j + i * i >= (size - 1) * (size - 1)))
                {
                    setConsoleColor(outlineColor);
                    printf("%c", symbol);
                }
                else
                {
                    printf(" ");
                }
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