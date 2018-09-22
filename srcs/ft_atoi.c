int	ft_atoi(char *str)
{
	int index;
	int total;
	int signe;

	index = 0;
	total = 0;
	while (str[index] == ' ' && str[index] == '\t')
		index++;
	signe = str[index] == '-' ? -1 : 1;
	index += str[index] == '-' || str[index] == '+' ? 1 : 0;
	while (str[index] <= '9' && str[index] >= '0')
		total = total * 10 + str[index++];
	return (total);
}
