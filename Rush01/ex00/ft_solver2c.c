void	ft_solver2c_1(char array[4][4], char solution[4][4], int i);
void	ft_solver2c_2(char array[4][4], char solution[4][4], int i);

void	ft_solver2c(char array[4][4], char solution[4][4])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		ft_solver2c_1(array, solution, i);
		ft_solver2c_2(array, solution, i);
		i++;
	}
}

void	ft_solver2c_1(char array[4][4], char solution[4][4], int i)
{
	if ((array[0][i] == '3') && (array[1][i] == '2'))
	{
		if ((solution[0][i] == '2') || (solution[3][i] == '1'))
		{
			solution[0][i] = '2';
			solution[1][i] = '3';
			solution[3][i] = '1';
		}
		if (solution[3][i] == '3')
		{
			solution[0][i] = '1';
			solution[1][i] = '2';
		}
		if (solution[3][i] == '2')
		{
			solution[0][i] = '1';
			solution[1][i] = '3';
		}
	}
}

void	ft_solver2c_2(char array[4][4], char solution[4][4], int i)
{
	if ((array[0][i] == '2') && (array[1][i] == '3'))
	{
		if ((solution[0][i] == '1') || (solution[3][i] == '2'))
		{
			solution[0][i] = '1';
			solution[2][i] = '3';
			solution[3][i] = '2';
		}
		if (solution[0][i] == '3')
		{
			solution[2][i] = '2';
			solution[3][i] = '1';
		}
		if (solution[0][i] == '2')
		{
			solution[2][i] = '3';
			solution[3][i] = '1';
		}
	}	
}
