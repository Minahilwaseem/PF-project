#include "Data_header.h"

void simpletriangle(int size, char symbol, int fillColor, int outlineColor, int posi)
{

    for (int i = 1; i <= size; i++)
    {
        position(posi, size);
        for (int j = 1; j <= i; j++)
        {
            if (j == 1 || i == size || j == i)
            {
                setConsoleColor(outlineColor);
                printf("%c", symbol);
            }
            else
            {
                setConsoleColor(fillColor);
                printf("%c", symbol);
            }
        }
        printf("\n");
    }
    ResetyPosition();
}

void simplemirrortriangle(int size, char symbol, int fillColor, int outlineColor, int posi)
{

    for (int i = 1; i <= size; i++)
    {
        position(posi, size);
        for (int j = 1; j <= size - i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            if (i == size || j == i || j == 1)
            {
                setConsoleColor(outlineColor);
                printf("%c", symbol);
            }
            else
            {
                setConsoleColor(fillColor);
                printf("%c", symbol);
            }
        }
        printf("\n");
    }
    ResetyPosition();
}

void invertedtriangle(int size, char symbol, int fillColor, int outlineColor, int posi)
{

    for (int i = 1; i <= size; i++)
    {
        position(posi, size);
        for (int j = size; j >= i; j--)
        {
            if (i == 1 || j == size || j == i)
            {
                setConsoleColor(outlineColor);
                printf("%c", symbol);
            }
            else
            {
                setConsoleColor(fillColor);
                printf("%c", symbol);
            }
        }
        printf("\n");
    }
    ResetyPosition();
}

void invertedmirrortriangle(int size, char symbol, int fillColor, int outlineColor, int posi)
{

    for (int i = 1; i <= size; i++)
    {
        position(posi, size);
        for (int j = 1; j < i; j++)
        {
            printf(" ");
        }
        for (int j = size; j >= i; j--)
        {
            if (i == size || j == size || j == i)
            {
                setConsoleColor(outlineColor);
                printf("%c", symbol);
            }
            else
            {
                setConsoleColor(fillColor);
                printf("%c", symbol);
            }
        }
        printf("\n");
    }
    ResetyPosition();
}

void simplehollowtriangle(int size, char symbol, int fillColor, int outlineColor, int posi)
{

    for (int i = 1; i <= size; i++)
    {
        position(posi, size);
        for (int j = 1; j <= i; j++)
        {
            if (i == 1 || i == size || j == 1 || j == size || i == j)
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

void simplehollowmirrortriangle(int size, char symbol, int fillColor, int outlineColor, int posi)
{

    for (int i = 1; i <= size; i++)
    {
        position(posi, size);
        for (int j = size - 1; j >= i; j--)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            if (i == 1 || i == size || j == 1 || j == size || i == j)
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

void invertedhollowtriangle(int size, char symbol, int fillColor, int outlineColor, int posi)
{

    for (int i = 1; i <= size; i++)
    {
        position(posi, size);
        for (int j = size; j >= i; j--)
        {
            if (i == 1 || i == size || j == 1 || j == size || i == j)
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

void invertedhollowmirrortriangle(int size, char symbol, int fillColor, int outlineColor, int posi)
{

    for (int i = 1; i <= size; i++)
    {
        position(posi, size);
        for (int j = 1; j <= i; j++)
        {
            printf(" ");
        }
        for (int j = size; j >= i; j--)
        {
            if (i == 1 || i == size || j == 1 || j == size || i == j)
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
    printf("\n");
    ResetyPosition();
}