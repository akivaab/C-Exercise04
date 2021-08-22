#include <stdlib.h>
#include "EnvironmentVar.h"

int main(size_t argc, char *argv[], char *envp[])
{
    PrintEnvironmentVariables(envp);

    return 0;
}