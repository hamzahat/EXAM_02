#include <stddef.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t i = 0;
	while (s[i])
	{
		size_t x = 0;
		while (reject[x])
		{
			if (s[i] == reject[x])
				return (i);
			x++;
		}
		i++;
	}
	return (i);
}

// #include <stdio.h>

// int main() {
//     printf("%zu\n", ft_strcspn("hello world", "ow"));  // Expected: 4
//     printf("%zu\n", ft_strcspn("abcdef", "xyz"));       // Expected: 6
//     printf("%zu\n", ft_strcspn("test123", "123"));      // Expected: 4
//     return 0;
// }

/*

* char *s = "hamza_hat";
* char *r = "_";
* result = 5 .

*/
// todo : add this function to libft 
