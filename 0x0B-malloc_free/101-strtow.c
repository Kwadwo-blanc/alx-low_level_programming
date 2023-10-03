#include <stdlib.h>
#include "main.h"

/**
 * count_word - Helper function to count the number of words in a string.
 * @s: The input string.
 *
 * Return: The number of words.
 */
int count_word(char *s);

/**
 * split_words - Helper function to split a string into words.
 * @str: The input string.
 * @words: An array to store the words.
 *
 * Return: None.
 */
void split_words(char *str, char **words);

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: A pointer to an array of strings (words) or NULL on failure.
 */

char **strtow(char *str)
{
char **words;
int word_count;
if (str == NULL || *str == '\0')
return (NULL);
word_count = count_word(str);
if (word_count == 0)
return (NULL);
words = (char **)malloc(sizeof(char *) * (word_count + 1));
if (words == NULL)
return (NULL);
split_words(str, words);
return (words);
}
int count_word(char *s)
{
}
void split_words(char *str, char **words)
{
}

