#include <stdio.h>

void first(void) __attribute__ ((constructor));
/**
 * print_message_before_main - Prints a message before function is executed.
 */
void first(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
