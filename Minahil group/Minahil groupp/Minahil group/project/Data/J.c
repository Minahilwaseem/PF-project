#include "Data_header.h"

void J(int size, char symbol, int outlineColor, int fillColor, int posi)
{
    int i, j;
    for (i = 0; i < size; i++)
    {
        position(posi, size);
        for (j = 0; j < size; j++)
        {
            if (i == size - 1 && (j > 0 && j < size - 1))
            {
                setConsoleColor(outlineColor);
                printf("%c", symbol);
            }

            else if ((j == size - 1 && i != size - 1) || (i > (size / 2) - 1 && j == 0 && i != size - 1))
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