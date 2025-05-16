#include "Interface_header.h"

struct inputs
{
    int size;
    int fillColor;
    int outlineColor;
    int select;
    char symbol;
    char posi;
};
int i = 0;

void Triangle_interaction() {
    int j = 0; // Initialize j instead of i
    int size, fillColor, outlineColor, select;
    char symbol, posi;
    const char *filename = "triangle.txt"; // Initialize filename with a valid file path
    FILE *file = fopen(filename, "w");

    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return;
    }

    struct inputs triangle_i[100];
    printf("Enter size: ");
    scanf("%d", &size);

    printf("Enter symbol: ");
    scanf(" %c", &symbol);

    printf("choose a color to fill the shape with color(1=blue,2=green,4=red,5=purple,6=yellow): ");
    scanf("%d", &fillColor);

    printf("choose a color to fill the outline of shape with color(1=blue,2=green,4=red,5=purple,6=yellow): ");
    scanf("%d", &outlineColor);

    printf("\nEnter the Position(L/M/R): ");
    scanf(" %c", &posi);

    triangle_i[j].size = size; // Use j as the index
    triangle_i[j].symbol = symbol; // Use j as the index
    triangle_i[j].fillColor = fillColor; // Use j as the index
    triangle_i[j].outlineColor = outlineColor; // Use j as the index
    triangle_i[j].posi = posi; // Use j as the index

    printf("Enter the option to print triangle:\n");
    printf("1. Simple triangle\n");
    printf("2. Simple mirror triangle\n");
    printf("3. Simple hollow triangle\n");
    printf("4. Simple hollow mirror triangle\n");
    printf("5. Inverted triangle\n");
    printf("6. Inverted hollow triangle\n");
    printf("7. Inverted mirror triangle\n");
    printf("8. Inverted hollow mirror triangle\n");
    scanf("%d", &select);

    triangle_i[j].select = select; // Use j as the index

    fprintf(file, "position = %c \n", triangle_i[j].posi); // Use j as the index
    fprintf(file, "outline color = %d \n", triangle_i[j].outlineColor); // Use j as the index
    fprintf(file, "fill color = %d \n", triangle_i[j].fillColor); // Use j as the index
    fprintf(file, "symbol = %c \n", triangle_i[j].symbol); // Use j as the index
    fprintf(file, "size = %d \n", triangle_i[j].size); // Use j as the index

   
    triangle_d(triangle_i[j].size, triangle_i[j].symbol, triangle_i[j].fillColor, triangle_i[j].outlineColor, triangle_i[j].posi, triangle_i[j].select);

    // Close the file when done
    fclose(file);
}
void Square_interaction()
{
    const char *filename = "square.txt"; // Initialize filename with a valid file path
    FILE *file = fopen(filename, "w");

    if (file == NULL)
    {
        printf("Error opening file for writing.\n");
        return;
    }

    struct inputs square_i[100];
    int j = 0; // Initialize j

    printf("Enter size: ");
    scanf("%d", &square_i[j].size);

    printf("Enter symbol: ");
    scanf(" %c", &square_i[j].symbol);

    printf("Choose a color to fill the shape with color (1=blue, 2=green, 4=red, 5=purple, 6=yellow): ");
    scanf("%d", &square_i[j].fillColor);

    printf("Choose a color to fill the outline of shape with color (1=blue, 2=green, 4=red, 5=purple, 6=yellow): ");
    scanf("%d", &square_i[j].outlineColor);

    printf("\nEnter the Position (L/M/R): ");
    scanf(" %c", &square_i[j].posi);

    printf("Enter the option to print square:\n");
    printf("1. Square\n");
    printf("2. Hollow square\n");
    scanf("%d", &square_i[j].select);

    fprintf(file, "position = %c \n", square_i[j].posi);
    fprintf(file, "outline color = %d \n", square_i[j].outlineColor);
    fprintf(file, "fill color = %d \n", square_i[j].fillColor);
    fprintf(file, "symbol = %c \n", square_i[j].symbol);
    fprintf(file, "size = %d \n", square_i[j].size);

    // Call the square_d function with the updated values
    // Assuming square_d is defined and correctly implemented
    square_d(square_i[j].size, square_i[j].symbol, square_i[j].fillColor, square_i[j].outlineColor, square_i[j].posi, square_i[j].select);

    // Close the file when done
    fclose(file);
}

void Rectangle_interaction()
{
    const char *filename = "rectangle.txt"; // Initialize filename with a valid file path
    FILE *file = fopen(filename, "w");

    if (file == NULL)
    {
        printf("Error opening file for writing.\n");
        return;
    }

    struct inputs rectangle_i[100];
    int j = 0; // Initialize j

    printf("Enter size (length): ");
    scanf("%d", &rectangle_i[j].size);

    // printf("Enter size (width): ");
    // scanf("%d", &rectangle_i[j].width);

    printf("Enter symbol: ");
    scanf(" %c", &rectangle_i[j].symbol);

    printf("Choose a color to fill the shape with color (1=blue, 2=green, 4=red, 5=purple, 6=yellow): ");
    scanf("%d", &rectangle_i[j].fillColor);

    printf("Choose a color to fill the outline of shape with color (1=blue, 2=green, 4=red, 5=purple, 6=yellow): ");
    scanf("%d", &rectangle_i[j].outlineColor);

    printf("\nEnter the Position (L/M/R): ");
    scanf(" %c", &rectangle_i[j].posi);

    printf("Enter the option to print rectangle:\n");
    printf("1. Rectangle\n");
    printf("2. Hollow Rectangle\n");
    scanf("%d", &rectangle_i[j].select);

    fprintf(file, "position = %c \n", rectangle_i[j].posi);
    fprintf(file, "outline color = %d \n", rectangle_i[j].outlineColor);
    fprintf(file, "fill color = %d \n", rectangle_i[j].fillColor);
    fprintf(file, "symbol = %c \n", rectangle_i[j].symbol);
    fprintf(file, "size (length) = %d \n", rectangle_i[j].size);
    //fprintf(file, "size (width) = %d \n", rectangle_i[j].width);

    // Call the rectangle_d function with the updated values
    // Assuming rectangle_d is defined and correctly implemented
    rectangle_d(rectangle_i[j].size, rectangle_i[j].symbol, rectangle_i[j].fillColor, rectangle_i[j].outlineColor, rectangle_i[j].posi, rectangle_i[j].select);

    // Close the file when done
    fclose(file);
}

void Line_interaction()
{
    const char *filename = "line.txt"; // Initialize filename with a valid file path
    FILE *file = fopen(filename, "w");

    if (file == NULL)
    {
        printf("Error opening file for writing.\n");
        return;
    }

    struct inputs line_i[100];
    int j = 0; // Initialize j

    printf("Enter the number of rows: ");
    scanf("%d", &line_i[j].size);

    printf("Enter symbol: ");
    scanf(" %c", &line_i[j].symbol);

    printf("Choose a color to fill the shape with color (1=blue, 2=green, 4=red, 5=purple, 6=yellow): ");
    scanf("%d", &line_i[j].fillColor);

    printf("\nEnter the Position (L/M/R): ");
    scanf(" %c", &line_i[j].posi);

    // Assuming there is no select option for lines
    line_i[j].select = 0; // You can set it to a default value since no option is provided

    fprintf(file, "position = %c \n", line_i[j].posi);
    fprintf(file, "outline color = %d \n", line_i[j].outlineColor); // Assuming there is no outline color
    fprintf(file, "fill color = %d \n", line_i[j].fillColor);
    fprintf(file, "symbol = %c \n", line_i[j].symbol);
    fprintf(file, "size (number of rows) = %d \n", line_i[j].size);

    // Call the line_d function with the updated values
    // Assuming line_d is defined and correctly implemented
    line_d(line_i[j].size, line_i[j].symbol, line_i[j].fillColor, line_i[j].outlineColor, line_i[j].posi, line_i[j].select);

    // Close the file when done
    fclose(file);
}

void Diamond_interaction()
{
    struct inputs diamond_i[100];
    printf("Enter rows: ");
    scanf("%d", &diamond_i[i].size);

    printf("Enter symbol: ");
    scanf(" %c", &diamond_i[i].symbol);

    printf("To fill the shape choose color (1=blue, 2=green, 4=red, 5-purple, 6=yellow, 7=white):");
    scanf("%d", &diamond_i[i].fillColor);

    printf("To fill the outline of shape choose color (1=blue, 2=green, 4=red, 5-purple, 6=yellow, 7=white):");
    scanf("%d", &diamond_i[i].outlineColor);

    printf("\nEnter the Position(L/M/R): ");
    scanf(" %c", &diamond_i[i].posi);

    printf("Enter the option to print diamond: ");
    printf("1. Diamond");
    printf("2. Hollow diamond");
    scanf("%d", &diamond_i[i].select);

    diamond_d(diamond_i[i].size, diamond_i[i].symbol, diamond_i[i].fillColor, diamond_i[i].outlineColor, diamond_i[i].posi, diamond_i[i].select);
}

void Pyramid_interaction()
{
    struct inputs pyramid_i[100];
    printf("Enter rows");
    scanf("%d", &pyramid_i[i].size);
    printf("Enter symbol");
    scanf(" %c", &pyramid_i[i].symbol);

    printf("To fill the shape choose color (1=blue, 2=green, 4=red, 5-purple, 6=yellow, 7=white):");
    scanf("%d", &pyramid_i[i].fillColor);

    printf("To fill the outline of shape choose color (1=blue, 2=green, 4=red, 5-purple, 6=yellow, 7=white):");
    scanf("%d", &pyramid_i[i].outlineColor);

    printf("\nEnter the Position(L/M/R): ");
    scanf(" %c", &pyramid_i[i].posi);

    printf("Enter the option to print pyramid: ");
    printf("1. Pyramid");
    printf("2. Hollow pyramid");
    printf("3. Inverted pyramid");
    printf("4. Inverted hollow pyramid");
    scanf("%d", &pyramid_i[i].select);

    pyramid_d(pyramid_i[i].size, pyramid_i[i].symbol, pyramid_i[i].fillColor, pyramid_i[i].outlineColor, pyramid_i[i].posi, pyramid_i[i].select);
}

void trapezium_interaction()
{
    struct inputs trapezium_i[100];
    printf("Enter size");
    scanf("%d", &trapezium_i[i].size);
    printf("Enter symbol");
    scanf(" %c", &trapezium_i[i].symbol);

    printf("Choose a color to fill the shape with color (1=blue, 2=green, 4=red, 5=purple, 6=yellow): ");
    scanf("%d", &trapezium_i[i].fillColor);

    printf("Choose a color to fill the outline of shape with color (1=blue, 2=green, 4=red, 5=purple, 6=yellow): ");
    scanf("%d", &trapezium_i[i].outlineColor);

    printf("\nEnter the Position(L/M/R): ");
    scanf(" %c", &trapezium_i[i].posi);

    printf("Enter the option to print trapezium: ");
    printf("1. Trapezium");
    printf("2. Hollow trapezium");
    scanf("%d", &trapezium_i[i].select);

    trapezium_d(trapezium_i[i].size, trapezium_i[i].symbol, trapezium_i[i].fillColor, trapezium_i[i].outlineColor, trapezium_i[i].posi, trapezium_i[i].select);
}

void parallelogram_interaction()
{
    struct inputs parallelogram_i[100];

    printf("Enter size");
    scanf("%d", &parallelogram_i[i].size);

    printf("Enter symbol");
    scanf(" %c", &parallelogram_i[i].symbol);

    printf("Choose a color to fill the shape with color (1=blue, 2=green, 4=red, 5=purple, 6=yellow): ");
    scanf("%d", &parallelogram_i[i].fillColor);

    printf("Choose a color to fill the outline of shape with color (1=blue, 2=green, 4=red, 5=purple, 6=yellow): ");
    scanf("%d", &parallelogram_i[i].outlineColor);

    printf("\nEnter the Position(L/M/R): ");
    scanf(" %c", &parallelogram_i[i].posi);

    printf("Enter the option to print parallelogram ");
    printf("1. Parallelogram");
    printf("2. Hollow parallelogram");
    printf("3. Inverted parallelogram");
    printf("4. Inverted hollow parallelogram");
    scanf("%d", &parallelogram_i[i].select);

    parallelogram_d(parallelogram_i[i].size, parallelogram_i[i].symbol, parallelogram_i[i].fillColor, parallelogram_i[i].outlineColor, parallelogram_i[i].posi, parallelogram_i[i].select);
}

void pentagon_interaction()
{
    struct inputs pentagon_i[100];
    printf("Enter size");
    scanf("%d", &pentagon_i[i].size);

    printf("Enter symbol");
    scanf(" %c", &pentagon_i[i].symbol);

    printf("Choose a color to fill the shape with color (1=blue, 2=green, 4=red, 5=purple, 6=yellow): ");
    scanf("%d", &pentagon_i[i].fillColor);

    printf("Choose a color to fill the outline of shape with color (1=blue, 2=green, 4=red, 5=purple, 6=yellow): ");
    scanf("%d", &pentagon_i[i].outlineColor);

    printf("\nEnter the Position(L/M/R): ");
    scanf(" %c", &pentagon_i[i].posi);

    printf("Enter the option to print pentagon: ");
    printf("1. Pentagon");
    printf("2. Hollow Pentagon");
    scanf("%d", &pentagon_i[i].select);

    pentagon_d(pentagon_i[i].size, pentagon_i[i].symbol, pentagon_i[i].fillColor, pentagon_i[i].outlineColor, pentagon_i[i].posi, pentagon_i[i].select);
}

void hexagon_interaction()
{
    struct inputs hexagon_i[100];
    printf("Enter size");
    scanf("%d", &hexagon_i[i].size);
    printf("Enter symbol");
    scanf(" %c", &hexagon_i[i].symbol);

    printf("To fill the shape choose color (1=blue, 2=green, 4=red, 5-purple, 6=yellow, 7=white):");
    scanf("%d", &hexagon_i[i].fillColor);

    printf("To fill the outline of shape choose color (1=blue, 2=green, 4=red, 5-purple, 6=yellow, 7=white):");
    scanf("%d", &hexagon_i[i].outlineColor);

    printf("\nEnter the Position(L/M/R): ");
    scanf(" %c", &hexagon_i[i].posi);

    printf("Enter the option to print hexagon: ");
    printf("1. Hexagon");
    printf("2. Hollow Hexagon");
    scanf("%d", &hexagon_i[i].select);

    hexagon_d(hexagon_i[i].size, hexagon_i[i].symbol, hexagon_i[i].fillColor, hexagon_i[i].outlineColor, hexagon_i[i].posi, hexagon_i[i].select);
}

void heart_interaction()
{
    struct inputs heart_i[100];
    printf("Enter size");
    scanf("%d", &heart_i[i].size);
    printf("Enter symbol");
    scanf(" %c", &heart_i[i].symbol);

    printf("To fill the shape choose color (1=blue, 2=green, 4=red, 5-purple, 6=yellow, 7=white):");
    scanf("%d", &heart_i[i].fillColor);

    printf("To fill the outline of shape choose color (1=blue, 2=green, 4=red, 5-purple, 6=yellow, 7=white):");
    scanf("%d", &heart_i[i].outlineColor);

    printf("\nEnter the Position(L/M/R): ");
    scanf(" %c", &heart_i[i].posi);

    printf("Enter the option to print heart: ");
    printf("1. Heart");
    printf("2. Hollow Heart");
    scanf("%d", &heart_i[i].select);

    heart_d(heart_i[i].size, heart_i[i].symbol, heart_i[i].fillColor, heart_i[i].outlineColor, heart_i[i].posi, heart_i[i].select);
}

void circle_interaction()
{
    struct inputs circle_i[100];
    printf("Enter size: ");
    scanf("%d", &circle_i[i].size);

    printf("Enter symbol");
    scanf(" %c", &circle_i[i].symbol);

    printf("To fill the shape choose color (1=blue, 2=green, 4=red, 5-purple, 6=yellow, 7=white):");
    scanf("%d", &circle_i[i].fillColor);

    printf("To fill the outline of shape choose color (1=blue, 2=green, 4=red, 5-purple, 6=yellow, 7=white):");
    scanf("%d", &circle_i[i].outlineColor);

    printf("\nEnter the Position(L/M/R): ");
    scanf(" %c", &circle_i[i].posi);

    printf("Enter the option to print circle: ");
    printf("1. Circle");
    printf("2. Hollow Circle");
    scanf("%d", &circle_i[i].select);

    circle_d(circle_i[i].size, circle_i[i].symbol, circle_i[i].fillColor, circle_i[i].outlineColor, circle_i[i].posi, circle_i[i].select);
}

void oval_interaction()
{
    struct inputs oval_i[100];

    printf("Enter size: ");
    scanf("%d", &oval_i[i].size);

    printf("Enter symbol");
    scanf(" %c", &oval_i[i].symbol);

    printf("To fill the shape choose color (1=blue, 2=green, 4=red, 5-purple, 6=yellow, 7=white):");
    scanf("%d", &oval_i[i].fillColor);

    printf("To fill the outline of shape choose color (1=blue, 2=green, 4=red, 5-purple, 6=yellow, 7=white):");
    scanf("%d", &oval_i[i].outlineColor);

    printf("\nEnter the Position(L/M/R): ");
    scanf(" %c", &oval_i[i].posi);

    printf("Enter the option to print oval: ");
    printf("1. Oval\n");
    printf("2. Hollow Oval\n");
    scanf("%d", &oval_i[i].select);

    oval_d(oval_i[i].size, oval_i[i].symbol, oval_i[i].fillColor, oval_i[i].outlineColor, oval_i[i].posi, oval_i[i].select);
}

void kite_interaction()
{
    struct inputs kite_i[100];
    printf("Enter rows: ");
    scanf("%d", &kite_i[i].size);
    printf("Enter symbol: ");
    scanf(" %c", &kite_i[i].symbol);

    printf("Choose a color to fill the shape with color (1=blue, 2=green, 4=red, 5=purple, 6=yellow): ");
    scanf("%d", &kite_i[i].fillColor);

    printf("Choose a color to fill the outline of the shape with color (1=blue, 2=green, 4=red, 5=purple, 6=yellow): ");
    scanf("%d", &kite_i[i].outlineColor);

    printf("\nEnter the Position(L/M/R): ");
    scanf(" %c", &kite_i[i].posi);

    printf("Enter the option to print kite:\n");
    printf("1. Kite\n");
    printf("2. Hollow Kite\n");
    scanf("%d", &kite_i[i].select);

    kite_d(kite_i[i].size, kite_i[i].symbol, kite_i[i].fillColor, kite_i[i].outlineColor, kite_i[i].posi, kite_i[i].select);
}

void chatbox_interaction()
{
    struct inputs chatbox_i[100];

    printf("Enter size: ");
    scanf("%d", &chatbox_i[i].size);

    printf("Enter symbol: ");
    scanf("%c", &chatbox_i[i].symbol);

    printf("Choose a color to fill the shape (1=blue, 2=green, 4=red, 6=yellow): ");
    scanf("%d", &chatbox_i[i].fillColor);

    printf("Choose a color to fill the outline (1=blue, 2=green, 4=red, 6=yellow): ");
    scanf("%d", &chatbox_i[i].outlineColor);

    printf("\nEnter the Position(L/M/R): ");
    scanf(" %c", &chatbox_i[i].posi);

    printf("Enter the option to print chatbox:\n");
    printf("1. chatbox\n");
    printf("2. Hollow chatbox\n");
    scanf("%d", &chatbox_i[i].select);

    chatbox_d(chatbox_i[i].size, chatbox_i[i].symbol, chatbox_i[i].outlineColor, chatbox_i[i].fillColor, chatbox_i[i].posi, chatbox_i[i].select);
}

void number_interaction()
{
    struct inputs number_i[i];

    printf("Enter the size of digit(greter than 3): ");
    scanf("%d", &number_i[i].size);

    printf("\nEnter the fillcolor of shape(1=blue,2=green,4=red,5=purple,6=yellow): ");
    scanf("%d", &number_i[i].fillColor);

    printf("\nEnter the outlinecolor of shape(1=blue,2=green,4=red,5=purple,6=yellow): ");
    scanf("%d", &number_i[i].outlineColor);

    printf("\nEnter the symbol: ");
    scanf(" %c", &number_i[i].symbol);

    printf("\nEnter the Position(L/M/R): ");
    scanf(" %c", &number_i[i].posi);

    printf("Enter the option to print numbers:\n");
    printf("1. one\n");
    printf("2. two\n");
    printf("3.three\n");
    printf("4. four\n");
    printf("5. five\n");
    printf("6. six\n");
    printf("7. seven\n");
    printf("8. eight\n");
    printf("9. nine\n");
    scanf("%d", &number_i[i].select);

    number_d(number_i[i].size, number_i[i].symbol, number_i[i].fillColor, number_i[i].outlineColor, number_i[i].posi, number_i[i].select);
}

void arrow_interaction()
{
    struct inputs arrow_i[i];
    printf("Enter size: ");
    scanf("%d", &arrow_i[i].size);

    printf("Enter symbol");
    scanf(" %c", &arrow_i[i].symbol);

    printf("choose a color to fill the outline of shape with color(1=blue,2=green,4=red,5=purple,6=yellow): ");
    scanf("%d", &arrow_i[i].outlineColor);

    printf("choose a color to fill the shape with color(1=blue,2=green,4=red,5=purple,6=yellow): ");
    scanf("%d", &arrow_i[i].fillColor);

    printf("\nEnter the Position(L/M/R): ");
    scanf(" %c", &arrow_i[i].posi);

    printf("Enter 1 for downward Arrow.\n Enter 2 for UpArrow.\n Enter 3 for HollowupArrow.\n Enter 4 for HollowdownwardArrow.\n");
    scanf("%d", &arrow_i[i].select);

    arrow_d(arrow_i[i].size, arrow_i[i].symbol, arrow_i[i].outlineColor, arrow_i[i].fillColor, arrow_i[i].posi, arrow_i[i].select);
}

void alphabets_interaction()
{
    struct inputs alphabets_i[100];

    printf("Enter the size of digit(greter than 5): ");
    scanf("%d", &alphabets_i[i].size);

    printf("\nEnter the fillcolor of shape(1=blue,2=green,4=red,5=purple,6=yellow): ");
    scanf("%d", &alphabets_i[i].fillColor);

    printf("\nEnter the outlinecolor of shape(1=blue,2=green,4=red,5=purple,6=yellow): ");
    scanf("%d", &alphabets_i[i].outlineColor);

    printf("\nEnter the symbol: ");
    scanf(" %c", &alphabets_i[i].symbol);

    printf("\nEnter the Position(L/M/R): ");
    scanf(" %c", &alphabets_i[i].posi);

    printf("Enter the option to print alphabets:\n");
    printf("1. A\n");
    printf("2. B\n");
    printf("3. C\n");
    printf("4. D\n");
    printf("5. E\n");
    printf("6. F\n");
    printf("7. G\n");
    printf("8. H\n");
    printf("9. I\n");
    printf("10. J\n");
    printf("11. K\n");
    printf("12. L\n");
    printf("13. M\n");
    printf("14. N\n");
    printf("15. O\n");
    printf("16. P\n");
    printf("17. Q\n");
    printf("18. R\n");
    printf("19. S\n");
    printf("20. T\n");
    printf("21. U\n");
    printf("22. V\n");
    printf("23. W\n");
    printf("24. X\n");
    printf("25. Y\n");
    printf("26. Z\n");
    scanf("%d", &alphabets_i[i].select);

    alphabets_d(alphabets_i[i].size, alphabets_i[i].symbol, alphabets_i[i].fillColor, alphabets_i[i].outlineColor, alphabets_i[i].posi, alphabets_i[i].select);
}
void saved_file(int option)
{
     printf("enter shape you want to save file;\n");
    printf("enter 1 to save triangle\n");
    printf("enter 2 to save square\n");
    printf("enter 3 to save rectangle\n");
    printf("enter 4 to print line\n");
    scanf("%d",&option);
    if(option == 1)
    {
        Triangle_interaction();
    }
    else if(option == 2)
    {
        Square_interaction();
    }
    else if (option == 3)
    {
        Rectangle_interaction();
    }
    else if (option == 4)
    {
        Line_interaction();
    }

}

void custom_shape(int select)
{

    if (select == 1)
    {
        Triangle_interaction();
    }
    else if (select == 2)
    {
        Square_interaction();
    }
    else if (select == 3)
    {
        Rectangle_interaction();
    }
    else if (select == 4)
    {
        Line_interaction();
    }
    else if (select == 5)
    {
        Diamond_interaction();
    }
    else if (select == 6)
    {
        Pyramid_interaction();
    }
    else if (select == 7)
    {
        trapezium_interaction();
    }
    else if (select == 8)
    {
        parallelogram_interaction();
    }
    else if (select == 9)
    {
        pentagon_interaction();
    }
    else if (select == 10)
    {
        hexagon_interaction();
    }
    else if (select == 11)
    {
        heart_interaction();
    }
    else if (select == 12)
    {
        circle_interaction();
    }
    else if (select == 13)
    {
        oval_interaction();
    }
    else if (select == 14)
    {
        kite_interaction();
    }
    else if (select == 15)
    {
        chatbox_interaction();
    }
    else if (select == 16)
    {
        number_interaction();
    }
    else if (select == 17)
    {
        arrow_interaction();
    }
    else if (select == 18)
    {
        alphabets_interaction();
    }
}

void Ms_paint(int choose)
{
    if (choose == 1)
    {
        int select;
        printf("please select shape you want to draw\n");
        printf("press 1 to print triangle\n");
        printf("Press 2 to print sqaure\n");
        printf("Press 3 to print rectangle\n");
        printf("Press 4 to print line\n");
        printf("Press 5 to print diamond\n");
        printf("Press 6 to print pyramid\n");
        printf("Press 7 to print trapezium\n");
        printf("Press 8 to print parallelogram\n");
        printf("Press 9 to print pentagon\n");
        printf("Press 10 to print hexagon\n");
        printf("Press 11 to print heart\n");
        printf("Press 12 to print circle\n");
        printf("Press 13 to print oval\n");
        printf("Press 14 to print kite\n");
        printf("Press 15 to print chatbox\n");
        printf("Press 16 to print numbers\n");
        printf("Press 17 to print arrow\n");
        printf("Press 18 to print alphabets\n");
        scanf("%d", &select);
        system("cls");
        custom_shape(select);
    }
    else if (choose == 2)
    {
        system("cls");
        draw_on_terminal();
        int i;
        if (i == 27)
        {

            Main_menu();
        }
    }
    else if (choose == 3)
    {
        system("cls");
        int select;
        saved_file(select);
    }
    else if (choose == 4)
    {
        system("cls");
        filesexist_input();
    }
    else if (choose == 5)
    {
        system("cls");
        fileEdit_input();
    }
    else if (choose == 113)
    {
        exit(113);
    }
}


void paint_interaction()
{
    int x;
    int y;
    printf("Enter the value of 'x': ");
    scanf("%d", &x);
    printf("Enter the value of 'y': ");
    scanf("%d", &y);
    char sym;
    printf("Enter the symbol: ");
    scanf(" %c", &sym);
    char ch;

    Paint_d(x, y, sym, ch);
}
void draw_on_terminal()
{
    paint_interaction();
}
void savingfile_interaction()
{
    savingfile();
}

void save()
{
    savingfile_interaction();
}

void existingfile_interaction()
{
    char folderPath[256];
    char fileName[256];

    printf("Enter the folder path: ");
    scanf("%s", &folderPath);

    printf("Enter the file name: ");
    scanf("%s", &fileName);

    if (existingfile(folderPath, fileName))
    {
        FILE *file = fopen(fileName, "w");
        printf("File exists.\n");
    }
    else
    {
        printf("File does not exist.\n");
        // You can prompt the user to change folder or file name here
    }

    existingfile(folderPath, fileName);
}

void existfile()
{
    existingfile_interaction();
}

void editfile_interaction()
{
    char folderPath[256];
    char fileName[256];

    printf("Enter the folder path: ");
    scanf("%s", folderPath);

    printf("Enter the file name: ");
    scanf("%s", fileName);

    char filePath[256];
    snprintf(filePath, sizeof(filePath), "%s/%s", folderPath, fileName);

    if (existingfile(folderPath, fileName))
    {
        printf("File exists.\n");

        printf("1. Clear the file\n");
        printf("2. Make new shapes\n");
        printf("3. Draw freehand\n");

        int Choice;
        printf("Select an edit option: ");
        scanf("%d", &Choice);
        if (Choice == 1)

        {
            clearingFile(filePath);
        }

        else if (Choice == 2)

        {
            int select;
            printf("please select shape you want to draw\n");
            printf("press 1 to print triangle\n");
            printf("Press 2 to print sqaure\n");
            printf("Press 3 to print rectangle\n");
            printf("Press 4 to print line\n");
            printf("Press 5 to print diamond\n");
            printf("Press 6 to print pyramid\n");
            printf("Press 7 to print trapezium\n");
            printf("Press 8 to print parallelogram\n");
            printf("Press 9 to print pentagon\n");
            printf("Press 10 to print hexagon\n");
            printf("Press 11 to print heart\n");
            printf("Press 12 to print circle\n");
            printf("Press 13 to print oval\n");
            printf("Press 14 to print kite\n");
            printf("Press 15 to print chatbox\n");
            printf("Press 16 to print numbers\n");
            printf("Press 17 to print arrow\n");
            printf("Press 18 to print alphabets\n");
            scanf("%d", &select);

            custom_shape(select);
        }

        else if (Choice == 3)
        {
            draw_on_terminal();
        }
        else
        {

            printf("Invalid edit option.\n");
        }
    }
    else
    {
        printf("File does not exist.\n");
    }

    existingfile(folderPath, fileName);
}

void editfile()
{
    editfile_interaction();
}
void filesexist_input()
{
    char fileName[256];

    printf("Enter the file name: ");
    scanf("%s", &fileName);

    if (file_exists(fileName))
    {
        printf("File exists.\n");
        print_file_contents(fileName);
    }
    else
    {
        printf("File does not exist.\n");
    }
}
void print_file_contents(const char *filename)
{
    FILE *file = fopen(filename, "r");
    if (file)
    {
        char ch;
        while ((ch = fgetc(file)) != EOF)
        {
            putchar(ch);
        }
        fclose(file);
    }
    else
    {
        printf("Unable to open the file.\n");
    }
}
void fileEdit_input()
{
    char fileName[256];

    printf("Enter the file name: ");
    scanf("%s", fileName);

    if (file_exists(fileName))
    {
        printf("File exists.\n");

        printf("1. Clear the file\n");
        printf("2. overwrite\n");
        ;

        int editChoice;
        printf("Select an edit option: ");
        scanf("%d", &editChoice);
        if (editChoice == 1)

        {
            clearFile(fileName);
        }

        else if (editChoice == 2)

        {
            over_input();
        }

        else
        {

            printf("Invalid edit option.\n");
        }
    }
    else
    {
        printf("File does not exist.\n");
    }
}
void over_input()
{
    char filename[100];
    char newData[100];

    printf("Enter the filename to overwrite (e.g., example.txt): ");
    scanf("%s", filename);

    printf("Enter new data to overwrite the file: ");
    getchar();                              // Consume the newline character left in the input buffer
    fgets(newData, sizeof(newData), stdin); // Read user input

    // Call the overwriteFile function to overwrite the specified file with the new data
    overwriteFile(filename, newData);

    printf("File overwritten successfully.\n");
}
void triangle_s()
{
    const char *filename = "triangle_data.txt"; // Initialize filename with a valid file path
    FILE *file = fopen(filename, "w");

    if (file == NULL)
    {
        printf("Error opening file for writing.\n");
        return;
    }
    struct inputs triangle_i[100];
    int i = 0;
    int size, symbol, fillColor, outlineColor, select, posi;
    printf("Enter the size : \n");
    scanf("%d", &size);

    printf("Enter symbol: ");
    scanf(" %c", &symbol);

    printf("Enter the fill color of triangle: \n");
    scanf("%d", &fillColor);

    printf("Enter the border color of triangle: \n");
    scanf("%d", &outlineColor);

    printf("Enter the option to print triangle: \n");
    printf("1. simpletriangle\n");
    printf("2. hollow triangle\n");

    // int option;
    scanf("%d", &select);
    ;
    triangle_i[i].size = size;
    triangle_i[i].symbol = symbol;
    triangle_i[i].fillColor = fillColor;
    triangle_i[i].outlineColor = outlineColor;
    triangle_i[i].posi = posi;
    char ch;
    // Clear the screen and draw the arrow
    system("cls");
    fprintf(file, "posi = %c \n", triangle_i[i].posi);
    fprintf(file, "size = %d \n", triangle_i[i].size);
    fprintf(file, "symbol = %c \n", triangle_i[i].symbol);
    fprintf(file, "fillColor = %d \n", triangle_i[i].fillColor);
    fprintf(file, "outlineColor = %d \n", triangle_i[i].outlineColor);
    fclose(file);

    triangle_d(size, symbol, fillColor, outlineColor, posi, select);
}

void square_s()
{
    const char *filename = "square_data.txt"; // Initialize filename with a valid file path
    FILE *file = fopen(filename, "w");

    if (file == NULL)
    {
        printf("Error opening file for writing.\n");
        return;
    }
    struct inputs square_i[i];
    int i = 0;
    int size, symbol, fillColor, outlineColor, select, posi;
    printf("Enter the size : \n");
    scanf("%d", &size);

    printf("Enter symbol: ");
    scanf(" %c", &symbol);

    printf("Enter the fill color of square: \n");
    scanf("%d", &fillColor);

    printf("Enter the border color of square: \n");
    scanf("%d", &outlineColor);

    printf("Enter the option to print square: \n");
    printf("1. square\n");
    printf("1. hollow square\n");

    // int option;
    scanf("%d", &select);
    square_i[i].size = size;
    square_i[i].symbol = symbol;
    square_i[i].fillColor = fillColor;
    square_i[i].outlineColor = outlineColor;
    square_i[i].posi = posi;
    char ch;
    // Clear the screen and draw the arrow
    system("cls");

    fprintf(file, "posi = %c \n", square_i[i].posi);

    fprintf(file, "size = %d \n", square_i[i].size);
    fprintf(file, "symbol = %c \n", square_i[i].symbol);
    fprintf(file, "fillColor = %d \n", square_i[i].fillColor);
    fprintf(file, "outlineColor = %d \n", square_i[i].outlineColor);
    fclose(file);

    square_d(size, symbol, fillColor, outlineColor, posi, select);
}

void rectangle_s()
{
    const char *filename = "rectangle_data.txt"; // Initialize filename with a valid file path
    FILE *file = fopen(filename, "w");

    if (file == NULL)
    {
        printf("Error opening file for writing.\n");
        return;
    }
    struct inputs rectangle_i[i];
    int i = 0;
    int size, symbol, fillColor, outlineColor, select, posi;
    printf("Enter the size : \n");
    scanf("%d", &size);

    printf("Enter symbol: ");
    scanf(" %c", &symbol);

    printf("Enter the fill color of rectangle: \n");
    scanf("%d", &fillColor);

    printf("Enter the border color of rectangle: \n");
    scanf("%d", &outlineColor);

    printf("Enter the option to print rectangle: \n");
    printf("1. rectangle\n");
    printf("1. hollow rectangle\n");

    // int option;
    scanf("%d", &select);
    rectangle_i[i].size = size;
    rectangle_i[i].symbol = symbol;
    rectangle_i[i].fillColor = fillColor;
    rectangle_i[i].outlineColor = outlineColor;
    rectangle_i[i].posi = posi;
    char ch;
    // Clear the screen and draw the arrow
    system("cls");

    fprintf(file, "posi = %c \n", rectangle_i[i].posi);

    fprintf(file, "size = %d \n", rectangle_i[i].size);
    fprintf(file, "symbol = %c \n", rectangle_i[i].symbol);
    fprintf(file, "fillColor = %d \n", rectangle_i[i].fillColor);
    fprintf(file, "outlineColor = %d \n", rectangle_i[i].outlineColor);
    fclose(file);

    rectangle_d(size, symbol, fillColor, outlineColor, posi, select);
}

void diamond_s()
{
    const char *filename = "diamond_data.txt"; // Initialize filename with a valid file path
    FILE *file = fopen(filename, "w");

    if (file == NULL)
    {
        printf("Error opening file for writing.\n");
        return;
    }
    struct inputs diamond_i[i];
    int i = 0;
    int size, symbol, fillColor, outlineColor, select, posi;
    printf("Enter the size : \n");
    scanf("%d", &size);

    printf("Enter symbol: ");
    scanf(" %c", &symbol);

    printf("Enter the fill color of diamond: \n");
    scanf("%d", &fillColor);

    printf("Enter the border color of diamond: \n");
    scanf("%d", &outlineColor);

    printf("Enter the option to print diamond: \n");
    printf("1. diamond\n");
    printf("1. hollow diamond\n");

    // int option;
    scanf("%d", &select);
    diamond_i[i].size = size;
    diamond_i[i].symbol = symbol;
    diamond_i[i].fillColor = fillColor;
    diamond_i[i].outlineColor = outlineColor;
    diamond_i[i].posi = posi;
    char ch;
    // Clear the screen and draw the arrow
    system("cls");

    fprintf(file, "posi = %c \n", diamond_i[i].posi);

    fprintf(file, "size = %d \n", diamond_i[i].size);
    fprintf(file, "symbol = %c \n", diamond_i[i].symbol);
    fprintf(file, "fillColor = %d \n", diamond_i[i].fillColor);
    fprintf(file, "outlineColor = %d \n", diamond_i[i].outlineColor);
    fclose(file);
    diamond_d(size, symbol, fillColor, outlineColor, posi, select);
}

void saving_shape(int select)
{

    printf("enter shapes;\n");
    printf("enter 1 to save triangle\n");
    printf("enter 2 to save square\n");
    printf("enter 3 to save rectangle\n");
    printf("enter 4 to save diamond\n");
    scanf("%d", &select);

    if (select == 1)
    {
        triangle_s();
    }
    else if (select == 2)
    {
        square_s();
    }
    else if (select == 3)
    {
        rectangle_s();
    }
    else if (select == 4)
    {
        diamond_s();
    }
}

void Main_menu()
{
    int choose;
    printf("         ---------------------\n");
    printf("        | WELCOME TO MS PAINT|\n");
    printf("         ---------------------\n");
    while (1)
    {

        printf("        press 1 to draw custom shapes\n");
        printf("        press 2 to draw on canvas\n  ");
        printf("        press 3 to save file\n     ");
        printf("       press 4 to check file exist\n  ");
        printf("       press 5 for File Edit\n         ");
        printf("       press q  to exit\n              ");

        scanf("%d", &choose);
        char userInput;
        scanf("%c", &userInput);
        if (userInput == 'q')
        {
            break;
        }
        Ms_paint(choose);
    }
}