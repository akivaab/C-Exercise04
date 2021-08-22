#include "CmdLine.h"

int main(size_t argc, char *argv[])
{
    PrintParameterList(argc, argv);
    PrintNumParameters(argc);
    PrintNumSwitches(argc, argv);
    PrintNumUppercaseAndNumLowercase(argc, argv);

    return 0;
}