#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "CmdLine.h"

void PrintParameterList(int argc, char *argv[])
{
    printf_s("Parameters: ");
    for (int i = 0; i < argc; ++i)
    {
        printf_s("\t");
        printf_s("\t%d: %s", i, argv[i]);
    }
}

void PrintNumParameters(int argc)
{
    printf_s("\nNumber of parameters: %d", argc);
}

void PrintNumSwitches(int argc, char *argv[])
{
    int counter = 0;
    for (int i = 0; i < argc; ++i)
    {
        if (argv[i][0] == '-' || argv[i][0] == '/')
        {
            ++counter;
        }
    }
    printf_s("\nNumber of switches: %d", counter);
}

void PrintNumUppercaseAndNumLowercase(int argc, char *argv[])
{
    int uppercaseCounter = 0;
    int lowercaseCounter = 0;
    int neitherCaseCounter = 0;
    for (int i = 0; i < argc; ++i)
    {
        if (isUppercase(argv[i]))
        {
            ++uppercaseCounter;
        }
        else if (isLowercase(argv[i]))
        {
            ++lowercaseCounter;
        }
        else
        {
            ++neitherCaseCounter;
        }
    }
    printf_s("\nNumber of uppercase parameters: %d", uppercaseCounter);
    printf_s("\nNumber of lowercase parameters: %d", lowercaseCounter);
    printf_s("\nNumber of parameters neither uppercase nor lowercase: %d", neitherCaseCounter);
}

bool isUppercase(char *str)
{
    for (int i = 0; i < strlen(str); ++i)
    {
        if (islower(*(str + i)))
        {
            return false;
        }
    }
    return true;
}

bool isLowercase(char *str)
{

    for (int i = 0; i < strlen(str); ++i)
    {
        if (isupper(*(str + i)))
        {
            return false;
        }
    }
    return true;
}