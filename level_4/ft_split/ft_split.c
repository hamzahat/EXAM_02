#include <stdlib.h>

void	ft_free(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		free(str[i++]);
	free(str);
	str = NULL;
}

static size_t    count_word(const char *str, char c)
{
	size_t	words;
	short	key;

	words = 0;
	key = 1;
	while (*str)
	{
		if (*str != c && key == 1)
		{
			words++;
			key = 0;
		}
		else if (*str == c)
			key = 1;
		str++;
	}
	return (words);
}

char    *ft_substr(char const *s, size_t len)
{
	size_t    i;
	char    *str;

	if (!s)
		return (NULL);
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = 0;
	return (str);
}

char    **fill_string(char **words, const char *str, char c, size_t words_number)
{
	size_t    len;
	size_t    i;

	i = 0;
	while (*str)
	{
		len = 0;
		while (*str == c && *str)
			str++;
		while (*str != c && *str)
		{
			len++;
			str++;
		}
		if (len && i < words_number)
		{
			words[i] = ft_substr(str - len, len);
			if (!(words[i]))
				return (ft_free(words), NULL);
			i++;
		}
	}
	return (words);
}

char    **ft_split(const char *str, char c)
{
	size_t    words_number;
	char     **words;

	if (!str)
		return (NULL);
	words_number = count_word(str, c);
	words = malloc(sizeof(char *) * (words_number + 1));
	if (!words)
		return (NULL);
	words[words_number] = NULL;
	return (fill_string(words, str, c, words_number));
}

