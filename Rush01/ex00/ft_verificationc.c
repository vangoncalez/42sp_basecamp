int	ft_verificationc(char argv[])
{
	int	i;
	int	auxError;

	i = 1;
	auxError = 0;
	while (i <= 4)
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
