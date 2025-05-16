#include "Data_header.h"
void clearingFile(const char filePath[])
{
    FILE *file = fopen(filePath, "w");
    if (file)
    {
        fclose(file);
        printf("File cleared.\n");
    }
    else
    {
        printf("Error clearing file");
    }
}