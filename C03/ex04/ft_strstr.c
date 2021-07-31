char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (to_find[i])
	{
		i++;
	}
	if (i == 0)
		return (str);
	while (str[j] != '\0')
	{
		while (to_find[k] == str[j + k])
		{
			if (k + 1 == i)
				return (str + j);
			k++;
		}
		k = 0;
		j++;
	}
	return (0);
}
