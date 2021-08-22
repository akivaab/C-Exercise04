#include <stdio.h>
#include <string.h>
#include "EnvironmentVar.h"

void PrintEnvironmentVariables(char *envp[])
{
    for (int i = 0; envp[i] != NULL; ++i)
    {
        char *nextToken = NULL;

        char *environmentVarKey = strtok_s(envp[i], "=", &nextToken);
        printf_s("Environment variable \"%s\" ", environmentVarKey);

        char *environmentVarValue = strtok_s(NULL, "=", &nextToken);
        printf_s("has the value \"%s\"\n", environmentVarValue);
    }
}