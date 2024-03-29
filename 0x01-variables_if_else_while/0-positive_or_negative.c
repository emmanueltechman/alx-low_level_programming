/*
 * File : 0-positive_or_negative.c
 * Author: Emmanuel Adekeye
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print whether the number stored in the
 *	  variable n is positive or negative
 *
 * Return : Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* My code */
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);

	return (0);
}
