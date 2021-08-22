#ifndef _CMD_LINE_H_
#define _CMD_LINE_H_
#include <stdbool.h>

/**
 * @file Command Line Statistics
*/

/**
 * @brief Prints a list of the command line parameters.
 * 
 * @param argc number of arguments
 * @param argv vector of arguments
*/
void PrintParameterList(int argc, char *argv[]);

/**
 * @brief Prints the numbre of command line arguments.
 * 
 * @param argc number of arguments
*/
void PrintNumParameters(int argc);

/**
 * @brief Prints the number of command line switches.
 * 
 * @param argc number of arguments
 * @param argv vector of arguments
*/
void PrintNumSwitches(int argc, char *argv[]);

/**
 * @brief Prints the number of uppercase, lowercase and 'neithercase' parameters.
 * 
 * @param argc number of arguments
 * @param argv vector of agruments
*/
void PrintNumUppercaseAndNumLowercase(int argc, char *argv[]);

/**
 * @brief Determines if all letters in the string given are uppercase.
 * 
 * @param str string argument whose case is being determined
 * 
 * @return true if all letter are uppercase, false otherwise.
*/
bool isUppercase(char *str);

/**
 * @brief Determines if all letters in the string given are lowercase.
 *
 * @param str string argument whose case is being determined
 *
 * @return true if all letter are lowercase, false otherwise.
*/
bool isLowercase(char *str);

#endif
