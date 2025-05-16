#include "Data_header.h"


void L(int size, char symbol, int outlineColor, int fillColor,int posi)
{

    for (int i = 1; i <= size; i++)
    {
         position(posi, size);
        for (int j = 1; j <= size; j++)
        {
            if (i == size || j == 1)
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