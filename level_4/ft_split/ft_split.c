#include <stdlib.h>

int count_word(char *str)
{
	int words = 0;
	int key = 1;

	while(*str)
	{
		if (*str != 32  && *str != 9 && key == 1)
		{
			words++;
			key = 0;
		}
		else if (*str == 32 || *str == 9)
			key = 1;
		str++;
	}
	return (words);
}

char *ft_substr(char *s, int len)
{
	int i = 0;
	char *str;
	str = malloc(sizeof(char) * (len + 1));
	while (i < len)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = 0;
	return (str);
}

char **ft_split(char *str)
{
	int i = 0;
	int len = 0;
	if (!str)
		return (NULL);
	int word_nb = count_word(str);
	char **words = malloc(sizeof(char *) * (word_nb + 1));
	words[word_nb] = NULL;
	while (*str)
	{
		len = 0;
		while(*str == 32 || *str == 9)
			str++;
		while(*str != 32 && *str != 9 && *str)
		{
			len++;
			str++;
		}
		if (len && i < word_nb)
		{
			words[i] = ft_substr(str - len, len);
			i++;
		}
	}
	return words;
}

/*
* algo:
* cont how many words
* allocate for theme + 1 ( NULL )
* terminate the 2D array by NULL
* loop throuth the str
* 	skip dilimiter
*	count len
*	call ft_substr and give it str - len , len
*	assigne it to array pointers one by oner
*/

// #include <stdio.h>
// int main (void)
// {
// 	char *s = "  starting and ending   ";
// 	char **str = ft_split(s, 32);
// 	while (*str)
// 		printf("%s\n", *str++);
// }
