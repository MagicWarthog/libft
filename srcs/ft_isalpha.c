int	ft_isalpha(char *str)
{
	int index;

	index = -1;
	while (str[++index])
		if ((str[index] < 'a' || str[index] > 'z') && (str[index] < 'A' && str[index] > 'Z'))
			return (0);
	return (1);
}
