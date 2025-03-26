#include <stdlib.h>
#include <stdio.h>

char	*ft_itoa_base(int value, int base)
{
	char	*s;
	long	n;
	int		sign;
	int		len;
	n = (value < 0) ? -(long)value : value;
	sign = (value < 0 && base == 10) ? -1 : 0;
	len = 1 - sign; //* 1 - (-1) = 2
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
	if (sign == -1)
		s[0] = '-';
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


/*
Logic for implementing ft_itoa_base:

1. **Define the characters for different bases**:
   - Use a string `digits = "0123456789ABCDEF"` to map numbers to characters for bases 2 to 16.

2. **Handle negative numbers**:
   - If the base is 10 and the value is negative, convert `value` to a positive long (`nb = -value`).
   - Otherwise, treat `value` as an unsigned number.

3. **Calculate the required string length**:
   - Use a loop to count the number of digits needed to represent `value` in the given `base`.
   - If `base == 10` and `value` is negative, reserve space for the `-` sign.

4. **Allocate memory for the string**:
   - Allocate memory for `len + 1` characters (including the null terminator).

5. **Convert number to the given base**:
   - Use a loop to extract digits from `nb` using `nb % base` and map them using `digits`.
   - Store them in `str` from right to left.

6. **Handle negative sign for base 10**:
   - If the original `value` was negative and `base == 10`, add `'-'` at `str[0]`.

7. **Return the final converted string**.
*/
