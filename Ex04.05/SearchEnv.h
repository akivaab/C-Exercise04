#ifndef _SEARCH_ENV_H_
#define _SEARCH_ENV_H_

/**
 * @file Search Environment Variables
*/

/**
 * @brief Search for and print environment variables beginning with the text in argv 
 * @param argv the argument whose text is matched to the that of the environment variables
 * @param envp the environment varibles
*/
void SearchAndPrintEnv(char *argv[], char *envp[]);

#endif
