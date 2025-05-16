#include "Data_header.h"

void downwardarrow(int size, char symbol, int outlineColor, int fillColor, int posi)
{
    for (int i = 0; i < size; i++)
    {
        position(posi, size);
        for (int k = 0; k < size / 2; k++)
        {
            printf(" ");
        }
        if (size % 2 == 0)
        {
            for (int j = 0; j < size / 2 + 2; j++)
            {
                if (j == 0 || j == (size / 2 + 2) - 1 || i == 0)
                {
                    setConsoleColor(outlineColor);
                }
                else
                {
                    setConsoleColor(fillColor);
                }
                printf("%c", symbol);
            }
        }
        else
        {
            for (int j = 0; j < size / 2 + 3; j++)
            {
                if (j == 0 || j == (size / 2 + 3) - 1 || i == 0)
                {
                    setConsoleColor(outlineColor);
                }
                else
                {
                    setConsoleColor(fillColor);
                }
                printf("%c", symbol);
            }
        }
        printf("\n");
    }
    for (int i = size; i >= 1; i--)
    {
        position(posi, size);
        for (int j = 0; j < size - i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            if (k == 1 || i == size || i == 1 || k == 2 * i - 1)
            {
                setConsoleColor(outlineColor);
            }
            else
            {
                setConsoleColor(fillColor);
            }
            printf("%c", symbol);
        }
        printf("\n");
    }
    ResetyPosition();
}

void uparrow(int size, char symbol, int outlineColor, int fillColor, int posi)
{

    // Upper Part of Arrow
    for (int i = 1; i <= size; i++)
    {
        position(posi, size);
        for (int j = i; j < size; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            if (i == 1 || k == 1 || k == 2 * i - 1 || i == size)
            {
                setConsoleColor(outlineColor);
            }
            else
            {
                setConsoleColor(fillColor);
            }
            printf("%c", symbol);
        }
        printf("\n");
    }
    // Lower part of Arrow
    for (int i = 0; i < size; i++)
    {
        position(posi, size);
        for (int k = 0; k < size / 2; k++)
        {
            printf(" ");
        }
        if (size % 2 == 0)
        {
            for (int j = 0; j < size / 2 + 2; j++)
            {
                if (j == 0 || j == (size / 2 + 2) - 1 || i == size - 1)
                {
                    setConsoleColor(outlineColor);
                }
                else
                {
                    setConsoleColor(fillColor);
                }
                printf("%c", symbol);
            }
        }
        else
        {
            for (int j = 0; j < size / 2 + 3; j++)
            {
                if (j == 0 || j == (size / 2 + 3) - 1 || i == size - 1)
                {
                    setConsoleColor(outlineColor);
                }
                else
                {
                    setConsoleColor(fillColor);
                }
                printf("%c", symbol);
            }
        }
        printf("\n");
    }
    ResetyPosition();
}

void hollowuparrow(int size, char symbol, int outlineColor, int fillColor, int posi)
{

    // Upper Part of Arrow
    for (int i = 1; i <= size; i++)
    {
        position(posi, size);
        for (int j = i; j < size; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            if (i == 1 || k == 1 || k == 2 * i - 1 || i == size)
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
    // Lower part of Arrow
    for (int i = 0; i < size; i++)
    {
        position(posi, size);
        for (int k = 0; k < size / 2; k++)
        {
            printf(" ");
        }
        if (size % 2 == 0)
        {
            for (int j = 0; j < size / 2 + 2; j++)
            {
                if (j == 0 || j == (size / 2 + 2) - 1 || i == size - 1)
                {
                    printf(" ");
                }
                else
                {
                    setConsoleColor(fillColor);
                    printf("%c", symbol);
                }
            }
        }
        else
        {
            for (int j = 0; j < size / 2 + 3; j++)
            {
                if (j == 0 || j == (size / 2 + 3) - 1 || i == size - 1)
                {
                    printf(" ");
                }
                else
                {
                    setConsoleColor(fillColor);
                    printf("%c", symbol);
                }
            }
        }
        printf("\n");
    }
    ResetyPosition();
}

void hollowdownwardarrow(int size, char symbol, int outlineColor, int fillColor, int posi)
{
    for (int i = 0; i < size; i++)
    {
        position(posi, size);
        for (int k = 0; k < size / 2; k++)
        {
            printf(" ");
        }
        if (size % 2 == 0)
        {
            for (int j = 0; j < size / 2 + 2; j++)
            {
                if (j == 0 || j == (size / 2 + 2) - 1 || i == 0)
                {
                    setConsoleColor(outlineColor);
                    printf("%c", symbol);
                }
                else
                {
                    printf(" ");
                }
            }
        }
        else
        {
            for (int j = 0; j < size / 2 + 3; j++)
            {
                if (j == 0 || j == (size / 2 + 3) - 1 || i == 0)
                {
                    setConsoleColor(outlineColor);
                    printf("%c", symbol);
                }
                else
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
    for (int i = size; i >= 1; i--)
    {
        position(posi, size);
        for (int j = 0; j < size - i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            if (k == 1 || i == size || i == 1 || k == 2 * i - 1)
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