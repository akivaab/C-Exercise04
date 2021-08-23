#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "Reverse.h"

void PrintReverse(const char *str)
{
    size_t strLength = strlen(str);
    size_t startIndex;
    size_t endIndex = strLength;

    for (size_t i = strLength - 1; i > 0; --i)
    {
        if (*(str + i) == ' ')
        {
            startIndex = i + 1;
            for (size_t j = startIndex; j < endIndex; ++j)
            {
                printf_s("%c", *(str + j));
            }
            endIndex = i;
            printf_s("%c", ' ');
        }
    }

    for (size_t i = 0; i < endIndex; ++i)
    {
        printf_s("%c", *(str + i));
    }
}