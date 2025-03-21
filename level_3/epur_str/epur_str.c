#include <unistd.h>

// Function to check if a string consists only of spaces (ASCII 32) and tabs (ASCII 9)
int	is_char(char *str)
{
	int i = 0;
	while (str[i])
	{
		if (str[i] != 32 && str[i] != 9) // If any non-space/tab character is found, return 0
			return (0);
		i++;
	}
	return (1); // Return 1 if the entire string consists only of spaces/tabs
}

int	main (int ac, char *av[])
{
	size_t	i = 0;
	
	if (ac == 2) // Ensure there is exactly one argument
	{
		// Skip leading spaces and tabs
		while (av[1][i] == 9 || av[1][i] == 32)
			i++;

		while (av[1][i]) // Loop through the string
		{
			char *str = &av[1][i]; // Pointer to the current position in the string ( to handle the spaces at the end )
			if (is_char(str)) // If the remaining string is only spaces/tabs, stop printing
				break;

			if (av[1][i] == 9 || av[1][i] == 32) // If current character is a space or tab
			{
				write(1, " ", 1); // Print a single space
				while (av[1][i] == 9 || av[1][i] == 32) // Skip consecutive spaces/tabs
					i++;
			}
			else
				write(1, &av[1][i++], 1); // Print the character and move to the next
		}
	}
	write(1, "\n", 1); // Print a newline at the end
	return (0);
}

/*
* Skips all leading spaces and tabs at the beginning.
* Checks if the string contains at least one non-space character 
  (for example, " hello       ").
* If a space or tab is found, it prints only a single space and skips the rest.
* If a non-space/tab character is found, it prints it.
* Spaces at the end are handled using the is_char function to stop printing  when only spaces/tabs remain.
*/
