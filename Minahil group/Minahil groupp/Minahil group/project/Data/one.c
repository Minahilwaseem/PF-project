#include "Data_header.h"

void one(int size, char symbol, int fillcolor, int outlinecolor, int posi)
{
    for (int i = 1; i <= size; i++)
    {
        position(posi, size);
        for (int j = 1; j <= size; j++)
        {
            if (j == size / 2 + 1 || i == size || (i == 2 && j <= size / 2))
            {
                setConsoleColor(fillcolor);
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