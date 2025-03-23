/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cletinic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 14:21:06 by cletinic          #+#    #+#             */
/*   Updated: 2018/08/14 14:21:19 by cletinic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

// Probably very badly coded but it passed
// standard string manipulation

int main (int argc, char **argv)
{
	if (argc == 2)
	{
		int index = 0;
		int len = 0;
		int start = 0;

		while (argv[1][len]) // get the length og the string
			len++;
		//len--;
		start = len - 1; // -1 for /0
		while (len)
		{
			while (start && argv[1][start] != ' ') // while start is not 0 and we are not on a space
				start--; // decrement - we are essentially getting to the start of the word (from the end of the string ie the last word)
			if (argv[1][start] == ' ') 
				index = start + 1;
			else
				index = start;
			while (index != len) // itterate and print out the word
				write(1, &argv[1][index++], 1);
			if (start != 0 && start-- != 0) // if we are not at the end of the string, add a space
			{
				write(1, " ", 1);
				len = start + 1; // move the end of the string to the end of the next last word.
			}
			else 
				break ;
		}
	}
	write(1, "\n", 1);
	return (0);
}
