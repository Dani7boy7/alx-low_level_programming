#include <stdio.h>
#include "main.h"

/**
 *	* main - gives the name of the program
 *	* @argc: the number of arguments
 *	* @argv: arrays of the arguments
 *	* Return: 0 when succesful
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
