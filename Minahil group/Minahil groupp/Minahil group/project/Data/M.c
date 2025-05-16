#include "Data_header.h"

void M(int size, char symbol, int fillColor, int outlineColor,int posi)
{
    for (int i = 1; i <= size; i++)
    {
        position(posi, size);
        for (int j = 1; j <= size; j++)
        {
            if (j == 1 || j == size || (i <= size / 2 + 1 && i == j) || (i <= size / 2 + 1 && i + j == size + 1))
            {
                setConsoleColor(fillColor);
                printf("%c ", symbol);
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