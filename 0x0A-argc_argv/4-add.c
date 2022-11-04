#include <stdio.h>
#include "main.h"
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

/**
 *	* check_num - changes a string to integer
 *	* @str: the string to be converted
 *	* Return: 0 when succesful
 */
int check_num(char *str)

{
	/*Declaring variables*/
	unsigned int count;

	count = 0;
	while (count < strlen(str)) /*count string*/

	{
		if (!isdigit(str[count]))
		{
			return (0);
		}

		count++
	}
	return (1);
}

/**
 *	* main - adds two posotive numbers
 *	* @argc: number of arguments
 *	* @argv: array of arguments
 *	* Return: 0 when succesful
 */

int main(int argc, char *argv[])
{
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc)
	{
		if (check_num(argv[count]))

		{
			str_to_int = atoi(argv[count]);
			sum += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}

		count++;
	}

	printf("%d\n", sum);

	return (0);
}
