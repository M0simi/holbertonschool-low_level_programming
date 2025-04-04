#include <stdio.h>

/**
 * print_before_main - function that runs before main
 *
 * This function will be executed automatically before
 * the main() function is called.
 */
void __attribute__ ((constructor)) print_before_main(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
