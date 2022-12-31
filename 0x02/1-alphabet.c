/*
 * File : 1-alphabet.c
 * Author ; Leon Gunnah
 */
#include "main.h"

/**
 * print_alphabet - prints the alphabet in lower case, followed by a newline
 * the alphabet prototype is used as the function
 * using a for loop to loop the letters
 * and calling _putchar function to print
 */
void print_alphabet(void)
/*
 * a function that prints the alphabet
 */
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
