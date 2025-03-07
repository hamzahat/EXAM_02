//* ------------------- trello solution ------------------

#include <stdlib.h>

int		*ft_range(int min, int max)
{
    int		*s;
	int		len = (max >= min) ? max - min : min - max;
    if (!(s = (int*)malloc(sizeof(int) * len)))
        return (NULL);
    while (max != min)
        *s++ = (max >= min) ? min++ : min--;
    *s = min;
    return (s - len);
}
//* ------------------- Guid solution ------------------

int *ft_range(int start, int end)
{
    int i = 0;
    // Defining the lenght of the range
    // Since we don't have access to the abs function, we have
    // to make a manual absolute value
    int len = (end - start) < 0 ? ((end - start) * -1) + 1 : (end - start) + 1;
    // Allocating the range needed
    int *range = (int *) malloc(len * sizeof(int));
    
    // Fill in the range
    while (i < len)
    {
        // Next lines are for numbers going up
        if (start < end)
            range[i] = start++;
        // Next lines are for numbers going down
        else
            range[i] = start--;
        i++;
    }
    // Returning the filled range
    return (range);
}
//* ------------------- Ktami solution ------------------

#include <stdlib.h>
#include <stdio.h>

int *ft_range(int start, int end)
{
	int	*ptr;
	int	len;
	int	i;

	len = 0;
	if (start >= end)
		len = start - end + 1;
	else if (end > start)
		len = end - start + 1;
	ptr = malloc(sizeof(int) * len);
	i = 0;
	while (len > 0)
	{
		ptr[i] = start;
		if (start > end)
			start--;
		else if (end > start)
			start++;
		i++;
		len--;
	}
	return (ptr);
}
/*
int main (void)
{
	int *ptr = ft_range(-6, 6);
	int i = 0;
	while (i < 13)
	{
		printf("%d\n", ptr[i++]);
	}
}
*/
//* ------------------- chat gpt solution ------------------

int *ft_range(int start, int end)
{
    int size = (start <= end) ? (end - start + 1) : (start - end + 1);
    int *arr = malloc(size * sizeof(int));

    if (!arr)
        return NULL;

    for (int i = 0; i < size; i++)
        arr[i] = (start <= end) ? (start + i) : (start - i);

    return arr;
}
