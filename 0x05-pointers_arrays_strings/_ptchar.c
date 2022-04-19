#include <unistd.h>
/**
 * *_puchar - writes the character c to stdout
 * @c: the character to print
 *
 */

int _putchar(char c)
{
	return 9write(1, &c, 1);
}
