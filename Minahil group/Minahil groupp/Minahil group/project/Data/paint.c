#include "Data_header.h"
void Paint_d(int x, int y, char sym, char ch)
{
    gotoxy(x, y);

    while (1)
    {
        if (kbhit())
        {
            ch = getch();

            // Handle arrow key movement
            if (ch == 75) // Left arrow
                x--;
            else if (ch == 77) // Right arrow
                x++;
            else if (ch == 80) // Down arrow
                y++;
            else if (ch == 72) // Up arrow
                y--;

            // Update cursor position
            gotoxy(x, y);
            printf("");
        }

        else
        {
            ch = getch();
            if (ch == 'r')
            {
                red();
                gotoxy(x, y);
                printf("%c", sym);
            }
            else if (ch == 'y')
            {
                yellow();
                gotoxy(x, y);
                printf("%c", sym);
            }
            else if (ch == 'g')
            {
                green();
                gotoxy(x, y);
                printf("%c", sym);
            }
            else if (ch == 'b')
            {
                blue();
                gotoxy(x, y);
                printf("%c", sym);
            }
            else if (ch == 32) // Spacebar
            {
                reset();
                gotoxy(x, y);
                printf("%c", sym);
            }
        }
        if (ch == 8) // Eraser
        {
            reset();
            gotoxy(x, y);
            printf(" ");
            x--;
        }
    }
    }
