#include "Data_header.h"

void D(char symbol, int outlineColor, int size, int fillColor,int posi)
{
     position(posi, size);
    int i, j;
    for (i = 0; i < size; i++)
    {
        setConsoleColor(outlineColor);
        printf("%c", symbol);
        for (j = 0; j < size; j++)
        {
            if ((i == 0 || i == size - 1) && j < size - 1)
            {
                setConsoleColor(outlineColor);
                printf("%c", symbol);
            }
            else if (j == size - 1 && i != 0 && i != size - 1)
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