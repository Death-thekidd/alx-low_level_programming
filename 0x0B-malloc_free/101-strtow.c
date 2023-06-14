#include "main.h"

int count_words(char *str);
char **allocate_memory(int num_words);
char *get_next_word(char *str);
char *trim_spaces(char *str);

/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: two-dimensional array
*/
char **strtow(char *str)
{
	int index, num_words;
	char *word;
	char **words;

	if (str == NULL || *str == '\0')
		return (NULL);

	str = trim_spaces(str);

	num_words = count_words(str);
	words = allocate_memory(num_words);

	if (words == NULL)
		return (NULL);
	word = get_next_word(str);
	index = 0;

	while (word != NULL)
	{
		words[index] = word;
		index++;
		word = get_next_word(NULL);
	}

	words[index] = NULL;

	return (words);
}

/**
 * count_words - count number of words in a string
 * @str: string to count words from
 *
 * Return: the count
*/
int count_words(char *str)
{
	int count = 0;
	int in_word = 0;

	while (*str != '\0')
	{
		if (*str == ' ')
		{
			in_word = 0;
		}
		else if (in_word == 0)
		{
			in_word = 1;
			count++;
		}

		str++;
	}

	return (count);
}

/**
 * allocate_memory - allocates memory for a two dimensional string
 * @num_words: number of words
 *
 * Return: the memory allocated
*/
char **allocate_memory(int num_words)
{
	char **words = malloc((num_words + 1) * sizeof(char *));

	if (words == NULL)
	{
		return (NULL);
	}

	return (words);
}

/**
 * get_next_word - gets next word
 * @str: string to get next word from
 *
 * Return: the word gotten
*/
char *get_next_word(char *str)
{
	static char *current;
	char *start;
	char *end;

	if (str != NULL)
		current = str;

	while (*current == ' ')
		current++;

	if (*current == '\0')
		return (NULL);

	start = current;

	while (*current != ' ' && *current != '\0')
		current++;

	end = current - 1;

	char *word = malloc((end - start + 1) * sizeof(char));

	if (word == NULL)
		return (NULL);

	strncpy(word, start, end - start + 1);
	word[end - start + 1] = '\0';

	return (word);
}

/**
 * trim_spaces - trims leading spaces
 * @str: string to trim
 *
 * Return: the trimmed string
*/
char *trim_spaces(char *str)
{
	while (*str == ' ')
		str++;

	return (str);
}
