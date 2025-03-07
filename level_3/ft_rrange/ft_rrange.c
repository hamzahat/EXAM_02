#include <stdlib.h>
#include <stdio.h>

int	*ft_rrange(int start, int end)
{
	int i = 0;
	size_t size = (end >= start) ? (end - start + 1) : (start - end + 1);
	int *arr = malloc(sizeof(int) * size);
	while (start <= end)
		arr[i++] = end--;
	while (start >= end)
		arr[i++] = end++;
	return (arr);
}

#include <stdio.h>

int main (void)
{
	int *arr = ft_rrange(1, 3);
	for (size_t i = 0; i < 3; i++)
	{
		printf("[%d] ", arr[i]);
	}
	printf("\n");
	free(arr);
}
