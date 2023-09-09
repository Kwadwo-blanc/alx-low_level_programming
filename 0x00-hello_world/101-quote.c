#include <unistd.h>
/**
 * main - Entry
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
const char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(2, message, 59); /* 59 is the length of the message. */
return (1);
}
