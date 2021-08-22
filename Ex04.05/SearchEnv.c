#include <stdio.h>
#include <string.h>
#include "SearchEnv.h"

void SearchAndPrintEnv(char *argv[], char *envp[])
{
    for (int i = 0; envp[i] != NULL; ++i)
    {
        if (strncmp(envp[i], argv[1], strlen(argv[1])) == 0)
        {
            printf_s("%s\n", envp[i]);
        }
    }
}