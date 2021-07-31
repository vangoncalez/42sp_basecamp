char	*ft_strcapitalize(char *str)
{
	int	i;
	int	control;

	i = 0;
	while (str[i] != '\0')
	{	
		control = 0;
		if (i == 0)
			control = 1;
		else if (str[i - 1] < '0' || (str[i - 1] > '9' && str[i - 1] < 'A'))
			control = 1;
		else if ((str[i - 1] > 'Z' && str[i - 1] < 'a') || str[i - 1] > 'z')
			control = 1;
		else
			control = 0;
		if ((str[i] >= 'a' && str[i] <= 'z') && control == 1)
			str[i] = str[i] - 32;
		if ((str[i '] >=A' && str[i] <= 'Z') && control == 0)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}