#include "Data_header.h"

void N(int size, char symbol, int fillColor, int outlineColor, int posi)
{
    for (int i = 1; i <= size; i++)
    {
        position(posi, size);

        for (int j = 1; j <= size; j++)
        {
            if (j == 1 || j == size || i == j)
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