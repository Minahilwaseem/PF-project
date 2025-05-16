#include "Data_header.h"

void R(int size, char symbol, int fillColor, int outlineColor, int posi)
{
    for (int i = 1; i <= size; i++)
    {
        position(posi, size);
        for (int j = 1; j <= size; j++)
        {
            if ((j == 1 && i > 1) || (i == 1 && j < size) || (j == size && i > 1 && i < size / 2 + 1) || (i == size / 2 + 1 && j < size) || (i == j && i > size / 2 + 1))
            {
                setConsoleColor(fillColor);
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