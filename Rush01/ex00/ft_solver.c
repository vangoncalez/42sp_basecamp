void	ft_print(char array[4][4]);
void	ft_solver1c(char array[4][4], char solution[4][4]);
void	ft_solver1l(char array[4][4], char solution[4][4]);
void	ft_solver2c(char array[4][4], char solution[4][4]);
void	ft_solver2l(char array[4][4], char solution[4][4]);
void	ft_solver3c(char solution[4][4]);
void	ft_solver3l(char solution[4][4]);

void	ft_solver(char array[4][4])
{
	char	solution[4][4];
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			solution[i][j] = '0';
			j++;
		}
		i++;
		j = 0;
	}
	ft_solver1c(array, solution);
	ft_solver1l(array, solution);
	ft_solver2c(array, solution);
	ft_solver2l(array, solution);
	ft_solver3c(solution);
	ft_solver3l(solution);
	ft_print(solution);
}
