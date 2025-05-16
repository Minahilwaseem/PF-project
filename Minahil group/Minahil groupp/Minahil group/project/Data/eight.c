#include "Data_header.h"

void eight(int size, char symbol, int fillcolor, int outlinecolor, int posi)
{
    for (int i = 1; i <= size; i++)
    {
        position(posi, size);
        for (int j = 1; j <= size; j++)
        {
            if (i == 1 || j == 1 || i == size || j == size || i == size / 2 + 1)
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
