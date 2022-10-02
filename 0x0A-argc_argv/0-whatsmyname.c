#include <stdio.h>

/**
 * main - a program that prints its name, followed by a new line.
 * @argc: number of arguments passed to the function
 * @argv: argument vector of pointers to strings
 * author ism
 * Return: always (0)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
