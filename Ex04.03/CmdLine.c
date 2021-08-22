#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "CmdLine.h"

void PrintParameterList(size_t argc, char *argv[])
{
    printf_s("Parameters: ");
    for (size_t i = 0; i < argc; ++i)
    {       
        printf_s("\t%zu: %s", i, argv[i]);
    }
}

void PrintNumParameters(size_t argc)
{
    printf_s("\nNumber of parameters: %zu", argc);
}

void PrintNumSwitches(size_t argc, char *argv[])
{
    int counter = 0;
    for (size_t i = 1; i < argc; ++i)
    {
        if (argv[i][0] == '-' || argv[i][0] == '/')
        {
            ++counter;
        }
    }
    printf_s("\nNumber of switches: %d", counter);
}

void PrintNumUppercaseAndNumLowercase(size_t argc, char *argv[])
{
    int uppercaseCounter = 0;
    int lowercaseCounter = 0;
    int neitherCaseCounter = 0;
    for (size_t i = 0; i < argc; ++i)
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
    if (!containsLetters(str))
    {
        return false;
    }
    for (size_t i = 0; i < strlen(str); ++i)
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
    if (!containsLetters(str))
    {
        return false;
    }
    for (size_t i = 0; i < strlen(str); ++i)
    {
        if (isupper(*(str + i)))
        {
            return false;
        }
    }
    return true;
}

bool containsLetters(char *str)
{
    for (size_t i = 0; i < strlen(str); ++i)
    {
        int asciiValue = (int)*(str + i);
        if ((asciiValue >= 65 && asciiValue <= 90) || (asciiValue >= 97 && asciiValue <= 122))
        {
            return true;
        }
    }
    return false;
}