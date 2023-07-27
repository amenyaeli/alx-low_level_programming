#include <stdio.h>

/**
 * myTortise - Apply the constructor attribute to myTorHar() so that it
 *	is executed before main()
 */

void myTortise(void) __attribute__ ((constructor));

/**
 * myTortise - Implementation of myTorHar
 */

void myTortise(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
