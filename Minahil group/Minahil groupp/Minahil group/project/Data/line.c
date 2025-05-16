#include "Data_header.h"

void line(int size, char symbol, int fillColor, int outlineColor, int posi)
{
    for (int i = 1; i <= size; i++)
    {
        position(posi, size);
        for (int j = 1; j <= 1; j++)
        {
            setConsoleColor(fillColor);
            printf("%c", symbol);
        }
        printf("\n");
    }
    ResetyPosition();
}