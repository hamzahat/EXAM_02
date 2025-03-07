unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int r = (a > b) ? a : b;
	if (a == 0 || b == 0)
		return (0);
	while (1)
	{
		if ((r % a == 0) && (r % b == 0))
			return r;
		r++;
	}
}
