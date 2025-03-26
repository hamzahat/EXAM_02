//* solution 1:

#include <stdlib.h>
#include <stdio.h>

char	*ft_itoa_base(int val, int base)
{
	char	*base_string = "0123456789ABCDEF";
	long	num;
	int	len;
	char	*ret;

	num = val;
	len = 0;
	if (val == 0)
		return ("0");
	while (num)
	{
		len++;
		num /= base;
	}
	num = val;
	if (val < 0)
	{
		if (base == 10)
			len++;
		num *= -1;
	}
	ret = (char *)malloc(sizeof(char) * len);
	ret[len] = '\0';
	while (num)
	{
		ret[--len] = base_string[num % base];
		num /= base;
	}
	if (val < 0 && base == 10)
	ret[0] = '-';
	return (ret);
}

char	*ft_itoa(int val)
{
	return (ft_itoa_base(val, 10));	
}

int		main(void)
{
	printf("%s\n", ft_itoa_base(255, 10));
	return (0);
}


//* solution 2 : 

#include <stdlib.h>
#include <stdio.h>

char	*ft_itoa_base(int value, int base)
{
	char	*s;
	long	n;
	int	sign;
	int	len;
	n = (value < 0) ? -(long)value : value;
	sign = (value < 0 && base == 10) ? -1 : 0;
	len = 1 - sign;
	while (n /= base)
		++len;
	s = (char *)malloc(sizeof(char) * (len + 1));
	s[len] = '\0';
	n = (value < 0) ? -(long)value : value;
	while (len-- + sign)
	{
		s[len] = ((n % base) < 10) ? n % base + '0' : n % base + 'A' - 10;
		n /= base;
	}
	!len ? s[0] = '-' : 0;
	return (s);
}
int main()
{
    printf("%s\n", ft_itoa_base(42, 2));   // "101010"
    printf("%s\n", ft_itoa_base(255, 16)); // "FF"
    printf("%s\n", ft_itoa_base(-42, 10)); // "-42"
    printf("%s\n", ft_itoa_base(31, 4));   // "133"
    printf("%s\n", ft_itoa_base(100, 8));  // "144"
    return 0;
}

