#include "Data_header.h"

void V(int size, char symbol, int fillColor, int outlineColor, int posi)
{

    for (int i = 1; i <= size; i++)
    {
        position(posi, size);
        for (int j = 1; j <= size; j++)
        {
            if (i == j)
            {
                setConsoleColor(fillColor);
                printf("%c", symbol);
            }
            else
            {
                printf(" ");
            }
        }
        for (int k = 1; k <= size; k++)
        {
            if (i + k == size + 1)
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