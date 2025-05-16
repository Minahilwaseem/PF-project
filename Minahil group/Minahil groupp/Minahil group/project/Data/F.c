#include "Data_header.h"

void F(int size, char symbol, int outlineColor, int fillColor, int posi)
{

    for (int i = 1; i <= size * 2; i++)
    {
        position(posi, size);
        for (int j = 1; j <= size; j++)
        {
            if (i == 1 || j == 1 || i == size)
            {

                setConsoleColor(outlineColor);
                printf(" %c", symbol);
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