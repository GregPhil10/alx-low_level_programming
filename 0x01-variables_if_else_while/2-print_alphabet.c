#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, follwed by new line
 *
 * Return: 0
*/
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
