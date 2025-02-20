#include <stddef.h>
#include <stdio.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t i = 0;
	while (s[i])
	{
		int key = 0;
		size_t x = 0;
		while (accept[x])
		{
			if (s[i] == accept[x])
			{
				key = 1;
				break;
			}
			x++;
		}
		if (key == 0)
			return (i);
		i++;
	}
	return (i);
}

/*

#include <stdio.h>

int main() 
{
    printf("%zu\n", ft_strspn("123abc", "1234567890"));  // Expected: 3
    printf("%zu\n", ft_strspn("abcdef", "abc"));         // Expected: 3
    printf("%zu\n", ft_strspn("xyz", "xyz"));            // Expected: 3
    printf("%zu\n", ft_strspn("hello", "abc"));          // Expected: 0
    return 0;
}

*/
// todo : add this function to libft 
