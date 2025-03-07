#include <stdlib.h>

int		*ft_range(int start, int end)
{
	int i = 0;
	size_t size = (end >= start) ? (end - start + 1) : (start - end + 1);
	int *arr = malloc(sizeof(int) * size);
	while (start >= end)
		arr[i++] = start--;
	while (start <= end)
		arr[i++] = start++;
	return (arr);	
}

#include <stdio.h>

int main (void)
{
	int *arr = ft_range(0, -3);
	for (size_t i = 0; i < 4; i++)
	{
		printf("[%d] ", arr[i]);
	}
	printf("\n");
	free(arr);
}