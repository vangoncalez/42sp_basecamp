void	ft_solver1l_1(char array[4][4], char solution[4][4], int i);
void	ft_solver1l_2(char array[4][4], char solution[4][4], int i);

void	ft_solver1l(char array[4][4], char solution[4][4])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		ft_solver1l_1(array, solution, i);
		ft_solver1l_2(array, solution, i);
		if ((array[2][i] == '2') && (array[3][i] == '3'))
		{
			solution[i][1] = '4';
		}
		if ((array[2][i] == '3') && (array[3][i] == '2'))
		{
			solution[i][2] = '4';
		}						
		i++;
	}
}

void	ft_solver1l_1(char array[4][4], char solution[4][4], int i)
{
	if ((array[2][i] == '4') && (array[3][i] == '1'))
	{
		solution[i][0] = '1';
		solution[i][1] = '2';
		solution[i][2] = '3';
		solution[i][3] = '4';
	}
	if ((array[2][i] == '1') && (array[3][i] == '4'))
	{
		solution[i][0] = '4';
		solution[i][1] = '3';
		solution[i][2] = '2';
		solution[i][3] = '1';
	}
	if (array[2][i] == '1')
		solution[i][0] = '4';
	if (array[3][i] == '1')
		solution[i][3] = '4';
	if ((array[2][i] == '2') && (array[3][i] == '1'))
	{
		solution[i][0] = '3';
		solution[i][3] = '4';
	}
}

void	ft_solver1l_2(char array[4][4], char solution[4][4], int i)
{
	if ((array[2][i] == '1') && (array[3][i] == '2'))
	{
		solution[i][0] = '4';
		solution[i][3] = '3';
	}
	if ((array[2][i] == '3') && (array[3][i] == '1'))
	{
		solution[i][0] = '2';
		solution[i][3] = '4';
	}
	if ((array[2][i] == '1') && (array[3][i] == '3'))
	{
		solution[i][0] = '4';
		solution[i][3] = '2';
	}
}
