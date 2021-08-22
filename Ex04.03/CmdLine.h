#ifndef _CMD_LINE_H_
#define _CMD_LINE_H_
#include <stdbool.h>
#include <stdlib.h>

/**
 * @file Command Line Statistics
*/

/**
 * @brief Prints a list of the command line parameters.
 * 
 * @param argc number of arguments
 * @param argv vector of arguments
*/
void PrintParameterList(size_t argc, char *argv[]);

/**
 * @brief Prints the numbre of command line arguments.
 * 
 * @param argc number of arguments
*/
void PrintNumParameters(size_t argc);

/**
 * @brief Prints the number of command line switches.
 * 
 * @param argc number of arguments
 * @param argv vector of arguments
*/
void PrintNumSwitches(size_t argc, char *argv[]);

/**
 * @brief Prints the number of uppercase, lowercase and 'neithercase' parameters.
 * 
 * @param argc number of arguments
 * @param argv vector of agruments
*/
void PrintNumUppercaseAndNumLowercase(size_t argc, char *argv[]);

/**
 * @brief Determines if all letters in the string given are uppercase.
 * 
 * @param str string argument whose case is being determined
 * 
 * @return true if all letters are uppercase, false otherwise
 * 
 * @note must contain at least one letter
*/
bool isUppercase(char *str);

/**
 * @brief Determines if all letters in the string given are lowercase.
 *
 * @param str string argument whose case is being determined
 *
 * @return true if all letters are lowercase, false otherwise
 * 
 * @note must contain at least one letter
*/
bool isLowercase(char *str);

/**
 * @brief Determines if a string contains letters.
 * 
 * @param str string argument being examined
 * 
 * @return true if the string contains letters, false otherwise
*/
bool containsLetters(char *str);

#endif
