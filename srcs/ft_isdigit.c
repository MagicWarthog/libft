int	ft_isdigit(char *str)
{
	int index;

	index = -1;
	while (str[++index])
		if (str[index] < '0' || str[index] > '9')
			return (0);
	return (1);
}
