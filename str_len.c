#include<stdio.h>

/**
 * str_len - find the length of the string s
 * @s: string
 * Return: length of string
 */
int str_len(char *s)
{
	int i, count = 0;

	i = 0;

	while (s[i] != '\0')
	{
		count++;
	}
	return (count);
}
