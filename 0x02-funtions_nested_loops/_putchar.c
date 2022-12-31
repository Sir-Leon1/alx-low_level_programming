#include "main.h"
#include <unistd.h>

/*
 * we call function write
 * which is in the output library unistd.h 
 * the first 1 is the file descriptor refering to the standard output.
 * the &c refers to the address of the c variable
 * the last one specifies the no of bytes to write
 *
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
