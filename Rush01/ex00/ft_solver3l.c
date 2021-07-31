void	ft_solver3l_1(char solution[4][4], int i, int sum, int count);

void	ft_solver3l(char solution[4][4])
{
	int	i;
	int	j;
	int	count;
	int	sum;	

	i = 0;
	j = 0;
	count = 0;
	sum = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			if (solution[i][j] == '0')
				count = count + 1;
			sum = sum + solution[i][j] - 48;
			j++;
		}
		ft_solver3l_1(solution, i, sum, count);
		count = 0;
		sum = 0;
		j = 0;
		i++;
	}
}

void	ft_solver3l_1(char solution[4][4], int i, int sum, int count)
{
	int	j;

	j = 0;
	while (j < 4)
	{
		if ((sum >= 6 || sum <= 11) && (count == 1))
		{
			if (solution[i][j] == '0')
			{
				solution[i][j] = 10 - sum + 48;
			}
		}
		j++;
	}
}	
