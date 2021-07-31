void	ft_solver3c_1(char solution[4][4], int j, int sum, int count);

void	ft_solver3c(char solution[4][4])
{
	int	i;
	int	j;
	int	count;
	int	sum;	

	i = 0;
	j = 0;
	count = 0;
	sum = 0;
	while (j < 4)
	{
		while (i < 4)
		{
			if (solution[i][j] == '0')
				count = count + 1;
			sum = sum + solution[i][j] - 48;
			i++;
		}
		ft_solver3c_1(solution, j, sum, count);
		count = 0;
		sum = 0;
		i = 0;
		j++;
	}
}

void	ft_solver3c_1(char solution[4][4], int j, int sum, int count)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if ((sum >= 6 || sum < 10) && (count == 1))
		{
			if (solution[i][j] == '0')
			{
				solution[i][j] = 10 - sum + 48;
			}
		}
		i++;
	}
}
