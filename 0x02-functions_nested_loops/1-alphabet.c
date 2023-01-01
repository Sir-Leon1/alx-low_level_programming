/*
 * File : 1-alphabet.c
 * Author : Leon Gunnah
 */
#include "main.h"
/**
 * print_alphabet - prints the alphabet in lower case , followed by a newline
 * The alphabet prototype is used as the function
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
