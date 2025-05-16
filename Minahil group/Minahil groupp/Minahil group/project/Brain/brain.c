#include "Brain_header.h"

#include <stdio.h>
#include <unistd.h>
void triangle_d(int size, char symbol, int fillColor, int outlineColor, int posi, int select)
{
    if (select == 1)
    {
        simpletriangle(size, symbol, fillColor, outlineColor, posi);
    }
    else if (select == 2)
    {
        simplemirrortriangle(size, symbol, fillColor, outlineColor, posi);
    }
    else if (select == 3)
    {
        invertedtriangle(size, symbol, fillColor, outlineColor, posi);
    }
    else if (select == 4)
    {
        invertedmirrortriangle(size, symbol, fillColor, outlineColor, posi);
    }
    else if (select == 5)
    {
        simplehollowtriangle(size, symbol, fillColor, outlineColor, posi);
    }
    else if (select == 6)
    {
        simplehollowmirrortriangle(size, symbol, fillColor, outlineColor, posi);
    }
    else if (select == 7)
    {
        invertedhollowtriangle(size, symbol, fillColor, outlineColor, posi);
    }
    else if (select == 8)
    {
        invertedhollowmirrortriangle(size, symbol, fillColor, outlineColor, posi);
    }
}

void square_d(int size, char symbol, int fillColor, int outlineColor, int posi, int select)
{
    if (select == 1)
    {
        square(size, symbol, fillColor, outlineColor, posi);
    }
    else
    {
        hollowsquare(size, symbol, fillColor, outlineColor, posi);
    }
}

void line_d(int size, char symbol, int fillColor, int outlineColor, int posi, int select)
{
    if (select == 1)
    {
        line(size, symbol, fillColor, outlineColor, posi);
    }
    else
    {
        printf("nothing found");
    }
}

void rectangle_d(int size, char symbol, int fillColor, int outlineColor,int posi, int select)
{
    if (select == 1)
    {
        rectangle(size, symbol, fillColor, outlineColor,posi);
    }
    else
    {
        hollowrectangle(size, symbol, outlineColor, fillColor,posi);
    }
}

void diamond_d(int size, char symbol, int fillColor, int outlineColor, int posi, int select)
{
    if (select == 1)
    {
        diamond(size, symbol, outlineColor, fillColor, posi);
    }
    else
    {
        hollowdiamond(size, symbol, fillColor, outlineColor, posi);
    }
}

void pyramid_d(int size, char symbol, int fillColor, int outlineColor, int posi, int select)
{
    if (select == 1)
    {
        pyramid(size, symbol, fillColor, outlineColor, posi);
    }
    else if (select == 2)
    {
        invertedpyramid(size, symbol, fillColor, outlineColor, posi);
    }
    else if (select == 3)
    {
        hollowpyramid(size, symbol, fillColor, outlineColor, posi);
    }
    else if (select == 4)
    {
        invertedhollowpyramid(size, symbol, fillColor, outlineColor, posi);
    }
}

void trapezium_d(int size, char symbol, int fillColor, int outlineColor, int posi, int select)
{
    if (select == 1)
    {
        trapezium(size, symbol, fillColor, outlineColor, posi);
    }
    else if (select == 2)
    {
        hollowtrapezium(size, symbol, fillColor, outlineColor, posi);
    }
}

void parallelogram_d(int size, char symbol, int fillColor, int outlineColor, int posi, int select)
{
    if (select == 1)
    {
        parallelogram(size, symbol, fillColor, outlineColor, posi);
    }
    else if (select == 2)
    {
        invertedparallelogram(size, symbol, fillColor, outlineColor, posi);
    }
    else if (select == 3)
    {
        simplehollowparallelogram(size, symbol, fillColor, outlineColor, posi);
    }
    else if (select == 4)
    {
        invertedhollowparallelogram(size, symbol, fillColor, outlineColor, posi);
    }
}

void pentagon_d(int size, char symbol, int fillColor, int outlineColor, int posi, int select)
{
    if (select == 1)
    {
        pentagon(size, symbol, fillColor, outlineColor, posi);
    }
    else if (select == 2)
    {
        hollowpentagon(size, symbol, fillColor, outlineColor, posi);
    }
}

void hexagon_d(int size, char symbol, int fillColor, int outlineColor, int posi, int select)
{
    if (select == 1)
    {
        hexagon(size, symbol, fillColor, outlineColor, posi);
    }
    else if (select == 2)
    {
        hollowhexagon(size, symbol, fillColor, outlineColor, posi);
    }
}

void heart_d(int size, char symbol, int fillColor, int outlineColor, int posi, int select)
{
    if (select == 1)
    {
        heart(size, symbol, fillColor, outlineColor, posi);
    }
    else if (select == 2)
    {
        hollowheart(size, symbol, fillColor, outlineColor, posi);
    }
}

void circle_d(int size, char symbol, int fillColor, int outlineColor,int posi, int select)
{
    if (select == 1)
    {
        circle(size, symbol, fillColor, outlineColor,posi);
    }
    else if (select == 2)
    {

        hollowcircle(size, symbol, fillColor, outlineColor,posi);
    }
}

void oval_d(int size, char symbol, int fillColor, int outlineColor,int posi, int select)
{
    if (select == 1)
    {
        oval(size, symbol, fillColor, outlineColor,posi);
    }
    else if (select == 2)
    {
        hollowoval(size, symbol, fillColor, outlineColor,posi);
    }
}

void kite_d(int size, char symbol, int fillColor, int outlineColor, int posi, int select)
{
    if (select == 1)
    {
        kite(size, symbol, fillColor, outlineColor, posi);
    }
    else if (select == 2)
    {
        hollowkite(size, symbol, fillColor, outlineColor, posi);
    }
}

void chatbox_d(int size, char sym, int outlineColor, int fillColor,int posi, int select)
{
    if (select == 1)
    {
        chatbox(size, sym, outlineColor, fillColor,posi);
    }
    else if (select == 2)
    {
        hollowchatbox(size, sym, outlineColor, fillColor,posi);
    }
}

void number_d(int size, char symbol, int fillcolor, int outlinecolor, int posi, int select)
{
    if (select == 1)
    {
        one(size, symbol, fillcolor, outlinecolor, posi);
    }
    else if (select == 2)
    {
        two(size, symbol, fillcolor, outlinecolor, posi);
    }
    else if (select == 3)
    {
        three(size, symbol, fillcolor, outlinecolor, posi);
    }
    else if (select == 4)
    {
        four(size, symbol, fillcolor, outlinecolor, posi);
    }
    else if (select == 5)
    {
        five(size, symbol, fillcolor, outlinecolor, posi);
    }
    else if (select == 6)
    {
        six(size, symbol, fillcolor, outlinecolor, posi);
    }
    else if (select == 7)
    {
        seven(size, symbol, fillcolor, outlinecolor, posi);
    }
    else if (select == 8)
    {
        eight(size, symbol, fillcolor, outlinecolor, posi);
    }
    else if (select == 9)
    {
        nine(size, symbol, fillcolor, outlinecolor, posi);
    }
}

void arrow_d(int size, char symbol, int outlineColor, int fillColor, int posi, int select)
{
    if (select == 1)
    {
        downwardarrow(size, symbol, outlineColor, fillColor, posi);
    }
    else if (select == 2)
    {
        uparrow(size, symbol, outlineColor, fillColor, posi);
    }
    else if (select == 3)
    {
        hollowuparrow(size, symbol, outlineColor, fillColor, posi);
    }
    else if (select == 4)
    {
        hollowdownwardarrow(size, symbol, outlineColor, fillColor, posi);
    }
}

void alphabets_d(int size, char symbol, int fillColor, int outlineColor, int posi, int select)
{
    if (select == 1)
    {
        A(size, symbol, fillColor, outlineColor, posi);
    }
    else if (select == 2)
    {
        B(size, symbol, outlineColor, fillColor, posi);
    }
    else if (select == 3)
    {
        C(size, symbol, fillColor, outlineColor, posi);
    }
    else if (select == 4)
    {
        D(symbol, outlineColor, size, fillColor, posi);
    }
    else if (select == 5)
    {
        E(size, symbol, outlineColor, fillColor, posi);
    }
    else if (select == 6)
    {
        F(size, symbol, outlineColor, fillColor, posi);
    }
    else if (select == 7)
    {
        G(size, symbol, fillColor, outlineColor, posi);
    }
    else if (select == 8)
    {
        H(size, symbol, outlineColor, fillColor, posi);
    }
    else if (select == 9)
    {
        I(size, symbol, outlineColor, fillColor, posi);
    }
    else if (select == 10)
    {
        J(size, symbol, outlineColor, fillColor, posi);
    }
    else if (select == 11)
    {
        K(size, symbol, fillColor, outlineColor, posi);
    }
    else if (select == 12)
    {
        L(size, symbol, outlineColor, fillColor, posi);
    }
    else if (select == 13)
    {
        M(size, symbol, fillColor, outlineColor, posi);
    }
    else if (select == 14)
    {
        N(size, symbol, fillColor, outlineColor, posi);
    }
    else if (select == 15)
    {
        O(size, symbol, fillColor, outlineColor, posi);
    }
    else if (select == 16)
    {
        P(size, symbol, fillColor, outlineColor, posi);
    }
    else if (select == 17)
    {
        Q(size, symbol, fillColor, outlineColor, posi);
    }
    else if (select == 18)
    {
        R(size, symbol, fillColor, outlineColor, posi);
    }
    else if (select == 19)
    {
        S(size, symbol, fillColor, outlineColor, posi);
    }
    else if (select == 20)
    {
        T(size, symbol, outlineColor, fillColor, posi);
    }
    else if (select == 21)
    {
        U(size, symbol, fillColor, outlineColor, posi);
    }
    else if (select == 22)
    {
        V(size, symbol, fillColor, outlineColor, posi);
    }
    else if (select == 23)
    {
        W(size, symbol, fillColor, outlineColor, posi);
    }
    else if (select == 24)
    {
        X(size, symbol, fillColor, outlineColor, posi);
    }
    else if (select == 25)
    {
        Y(size, symbol, fillColor, outlineColor, posi);
    }
    else if (select == 26)
    {
        Z(size, symbol, fillColor, outlineColor, posi);
    }
}

int file_exists(const char *fileName)
{

    if (access(fileName, F_OK) == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void clearFile(const char filePath[])
{
    FILE *file = fopen(filePath, "w");
    if (file)
    {
        fclose(file);
        printf("File cleared.\n");
    }
    else
    {
        perror("Error clearing file");
    }
}
void overwriteFile(const char *filename, const char *data)
{
    FILE *file = fopen(filename, "w"); // Open the file in write mode
    if (file == NULL)
    {
        printf("Error opening the file for writing.\n");
        return; // Handle the error appropriately
    }

    // Write the new data to the file
    fprintf(file, "%s", data);

    fclose(file); // Close the file when done
}