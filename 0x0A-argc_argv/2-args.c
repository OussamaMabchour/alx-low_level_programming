#include <stdio.h>

/**
 * main - A program that prints the number of arguements you passed into it
 * @argc: An argument counter
 * @argv: An argument values
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int count;

	if (argc > 0)
		for (count = 0; count < argc; count++)
		{
			printf("%s\n", argv[count]);
		}
	return (0);
}
