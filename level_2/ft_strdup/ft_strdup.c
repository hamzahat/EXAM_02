#include <stdlib.h>
#include <stdio.h>
size_t	ft_strlen(const char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}
char	*ft_strdup(const char *src)
{
	if (src == NULL)
		return (NULL);
	if (!(*src))
		return (malloc(1));
	char *str = malloc(sizeof(char) * ft_strlen(src) + 1);
	if (!str)
		return (NULL);
	int i = 0;
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = 0;
	return (str);
}
