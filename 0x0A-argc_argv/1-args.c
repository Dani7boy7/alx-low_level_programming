#include <stdio.h>
#include "main.h"

/**
 *	* main - give the number of arguments
 *	* @argc: number of arguments
 *	* @argv: array of arguments
 *	* Return: 0 when succesful
 */
 
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
