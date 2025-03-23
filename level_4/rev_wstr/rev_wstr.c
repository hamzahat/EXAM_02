#include <stdio.h>
#include <unistd.h>
#include <string.h>

static int get_rev_space(char *str, int l)
{
	int i = 0;
	while(str)
	{
		if(str[i] == ' ')
			break;
		i++;
		l--;
	}
	return i;
}

int main(int argc, char **argv)
{

	char *str = argv[1];
	char *str_1 = str + strlen(argv[1]);
	puts(str_1);
	while(str_1 != str)
	{
		int sp = get_rev_space(str_1, strlen(str_1));

		printf("sp %d \n", str_1);

		str_1 -= sp;
	}
}
