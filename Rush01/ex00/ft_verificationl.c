int	ft_verificationl(char argv[])
{
	int	i;
	int	auxError;

	i = 9;
	auxError = 0;
	while (i <= 12)
	{
		if (argv[i] == '4' && argv[i + 4] == '2')
			auxError++;
		if (argv[i] == '2' && argv[i + 4] == '4')
			auxError++;
		if (argv[i] == '4' && argv[i + 4] == '3')
			auxError++;
		if (argv[i] == '3' && argv[i + 4] == '4')
			auxError++;
		if (argv[i] == '4' && argv[i + 4] == '4')
			auxError++;
		if (argv[i] == '1' && argv[i + 4] == '1')
			auxError++;
		if (argv[i] == '3' && argv[i + 4] == '3')
			auxError++;
		i++;
	}
	return (auxError);
}
