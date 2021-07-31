void	ft_solver1c_1(char array[4][4], char solution[4][4], int i);
void	ft_solver1c_2(char array[4][4], char solution[4][4], int i);

void	ft_solver1c(char array[4][4], char solution[4][4])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		ft_solver1c_1(array, solution, i);
		ft_solver1c_2(array, solution, i);
		if ((array[0][i] == '3') && (array[1][i] == '1'))
		{
			solution[0][i] = '2';
			solution[3][i] = '4';
		}
		if ((array[0][i] == '1') && (array[1][i] == '3'))
		{
			solution[0][i] = '4';
			solution[3][i] = '2';
		}
		if ((array[0][i] == '2') && (array[1][i] == '3'))
			solution[1][i] = '4';
		if ((array[0][i] == '3') && (array[1][i] == '2'))
			solution[2][i] = '4';
		i++;
	}
}

void	ft_solver1c_1(char array[4][4], char solution[4][4], int i)
{
	if ((array[0][i] == '4') && (array[1][i] == '1'))
	{
		solution[0][i] = '1';
		solution[1][i] = '2';
		solution[2][i] = '3';
		solution[3][i] = '4';
	}
	if ((array[0][i] == '1') && (array[1][i] == '4'))
	{
		solution[0][i] = '4';
		solution[1][i] = '3';
		solution[2][i] = '2';
		solution[3][i] = '1';
	}
	if (array[0][i] == '1')
		solution[0][i] = '4';
}

void	ft_solver1c_2(char array[4][4], char solution[4][4], int i)
{		
	if (array[1][i] == '1')
		solution[3][i] = '4';
	if ((array[0][i] == '2') && (array[1][i] == '1'))
	{
		solution[0][i] = '3';
		solution[3][i] = '4';
	}
	if ((array[0][i] == '1') && (array[1][i] == '2'))
	{
		solution[0][i] = '4';
		solution[3][i] = '3';
	}
}
