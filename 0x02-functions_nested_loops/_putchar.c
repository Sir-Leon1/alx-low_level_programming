#include "main.h"
#include <unistd.h>

/*
 * We call function write 
 * which is in the output library unistd.h
 * the first 1 is the file descriptor refering
 * to the standard output
 * The &c refers to the address of the c variable 
 * The last one specifies the no of bytes to write
 *
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
