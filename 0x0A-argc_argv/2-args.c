#include <stdio.h>
#include "main.h"

/**
 *	* main - gives all arguments
 *	* @argc: number of arguments
 *	* @argv: array of the arrguments
 *	* Return: 0 when succesful
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
