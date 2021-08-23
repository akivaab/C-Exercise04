#include <stdio.h>
#include <string.h>
#include "SearchEnv.h"

void SearchAndPrintEnv(char *argv[], char *envp[])
{
    for (int i = 0; envp[i] != NULL; ++i)
    {
        const int SEARCH_FILTER_PARAM = 1;
        if (strncmp(envp[i], argv[SEARCH_FILTER_PARAM], strlen(argv[SEARCH_FILTER_PARAM])) == 0)
        {
            printf_s("%s\n", envp[i]);
        }
    }
}