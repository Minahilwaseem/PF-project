#include "Data_header.h"
bool existingfile(char folderPath[], char fileName[])
{
    char filePath[256];
    snprintf(filePath, sizeof(filePath), "%s\\%s", folderPath, fileName);

    FILE *file = fopen(filePath, "r");
    if (file)
    {
        
        FILE *file = fopen(filePath, "w");
        fclose(file);
        return true;
    }
    return false;
}