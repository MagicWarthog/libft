int	ft_isprint(char *str)
{
	int index;

	index = -1;
	while (str[++index])
		if (str[index] < 32 || str[index] > 126)
			return (0);
	return (1);
}
