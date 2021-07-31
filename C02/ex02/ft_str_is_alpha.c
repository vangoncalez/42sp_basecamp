int	ft_str_is_alpha(char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z' )
			result = 1;
		else if (str[i] >= 'A' && str[i] <= 'Z' )
			result = 1;
		else if (str[i] == ' ' )
			result = 1;
		else
			return (0);
		i++;
	}
	return (1);
}
