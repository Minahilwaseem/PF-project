#include "Data_header.h"

void savingfile()
{
   
    int size;
    char symbol;
    char outlineColor[50];
    char fillColor[50];
    char position[50];
    char selection[50];
    char filename[100];


    printf("Enter the file name: ");
    scanf("%s", filename);

  
    FILE *file = fopen(filename, "w");
    if (file == NULL)
    {
        printf("Failed to open the file.\n");
        return;
    }

    
    printf("Enter the size: ");
    scanf("%d", &size);

    printf("Enter the symbol: ");
    scanf(" %c", &symbol); 

    printf("Enter the outline color: ");
    scanf("%s", outlineColor);

    printf("Enter the fill color: ");
    scanf("%s", fillColor);

    printf("Enter the position: ");
    scanf("%s", position);

    printf("Enter the selection: ");
    scanf("%s", selection);

   
    fprintf(file, "Size: %d\n", size);
    fprintf(file, "Symbol: %c\n", symbol);
    fprintf(file, "Outline Color: %s\n", outlineColor);
    fprintf(file, "Fill Color: %s\n", fillColor);
    fprintf(file, "Position: %s\n", position);
    fprintf(file, "Selection: %s\n", selection);

    fclose(file);

    printf("Data has been saved to %s\n", filename);
}