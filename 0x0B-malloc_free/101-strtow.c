#include <stdlib.h>
#include "main.h"

/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */

int count_word(char *s)
{
int flag;
int c;
int m;
flag = 0;
m = 0;
for (c = 0; s[c] != '\0'; c++)
{
if (s[c] == ' ')
flag = 0;
else if (flag == 0)
{
flag = 1;
m++;
}
}
return (m);
}
/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */

char **strtow(char *str)
{
char **words;
char *tmp;
int i;
int k;
int len;
int word;
int c;
int start;
int end;
k = 0;
len = 0;
c = 0;
while (*(str + len))
len++;
word = count_word(str);
if (word == 0)
return (NULL);
words = (char **) malloc(sizeof(char *) * (word + 1));
if (words == NULL)
return (NULL);
for (i = 0; i <= len; i++)
{
if (str[i] == ' ' || str[i] == '\0')
{
if (c)
{
end = i;
tmp = (char *) malloc(sizeof(char) * (c + 1));
if (tmp == NULL)
return (NULL);
while (start < end)
*tmp++ = str[start++];
*tmp = '\0';
words[k] = tmp - c;
k++;
c = 0;
}
}
else if (c++ == 0)
start = i;
}
words[k] = NULL;
return (words);
}
