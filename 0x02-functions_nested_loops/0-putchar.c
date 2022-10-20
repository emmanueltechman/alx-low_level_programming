#include "main.h"
/**
 *   main - prints _putchar, flowd by a new linees
 *
 *   Return: Alwys 0 (Success)
 */
int main(void)
{
	char b[] = "_putchar";
	int c;

	for (c = 0; c < 8; c++)
	{
		_putchar(b[c]);
	}
	_putchar('\n');
	return (0);
}
