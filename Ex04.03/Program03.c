#include <stdio.h>
#include "CmdLine.h"

int main(int argc, char *argv[])
{
    PrintParameterList(argc, argv);
    PrintNumParameters(argc);
    PrintNumSwitches(argc, argv);
    PrintNumUppercaseAndNumLowercase(argc, argv);
}