int	ft_isn(char argv1[])
{
	int	isNumber;
	int	cont1;
	int	cont2;

	isNumber = 1;
	cont1 = 0;
	cont2 = 0;
	while (isNumber == 1 && argv1[cont1] != '\0')
	{
		if (argv1[cont1] < 49 || argv1[cont1] > 52)
			isNumber = 0;
		cont1++;
	}
	return (isNumber);
}
