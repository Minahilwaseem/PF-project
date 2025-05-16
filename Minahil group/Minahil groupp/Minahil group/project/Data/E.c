#include "Data_header.h"

void E(int size, char symbol, int outlineColor, int fillColor,int posi)
{

    int i, j;
    for (i = 0; i < size; i++)
    {position(posi, size);
        setConsoleColor(outlineColor);
        printf("%c", symbol);
        for (j = 0; j < size; j++)
        {
            if ((i == 0 || i == size - 1) || (i == size / 2 && j <= size / 2))
            {
                setConsoleColor(outlineColor);
                printf("%c", symbol);
            }

            else
            {
                continue;
            }
        }
        printf("\n");
    }
    ResetyPosition();
}