int	ft_isalnum(char *str)
{
	int index;

	index = -1;
	while (str[++index])
		if ((str[index] >= 'a' && str[index] <= 'z') || (str[index] >= 'A' && str[index] <= 'Z') || (str[index] >= '0' && str[index] <= '9'))
			return (0);
	return (1);
}
