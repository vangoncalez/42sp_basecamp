void	ft_solver2l_1(char array[4][4], char solution[4][4], int i);
void	ft_solver2l_2(char array[4][4], char solution[4][4], int i);

void	ft_solver2l(char array[4][4], char solution[4][4])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		ft_solver2l_1(array, solution, i);
		ft_solver2l_2(array, solution, i);
		i++;
	}
}

void	ft_solver2l_1(char array[4][4], char solution[4][4], int i)
{
	if ((array[2][i] == '3') && (array[3][i] == '2'))
	{
		if ((solution[i][0] == '2') || (solution[i][3] == '1'))
		{
			solution[i][0] = '2';
			solution[i][1] = '3';
			solution[i][3] = '1';
		}
		if (solution[i][3] == '3')
		{
			solution[i][0] = '1';
			solution[i][1] = '2';
		}
		if (solution[i][3] == '2')
		{
			solution[i][0] = '1';
			solution[i][1] = '3';
		}
	}
}

void	ft_solver2l_2(char array[4][4], char solution[4][4], int i)
{
	if ((array[2][i] == '2') && (array[3][i] == '3'))
	{
		if ((solution[i][0] == '1') || (solution[i][3] == '2'))
		{
			solution[i][0] = '1';
			solution[i][2] = '3';
			solution[i][3] = '2';
		}
		if (solution[i][0] == '3')
		{
			solution[i][2] = '2';
			solution[i][3] = '1';
		}
		if (solution[i][0] == '2')
		{
			solution[i][2] = '3';
			solution[i][3] = '1';
		}
	}	
}
