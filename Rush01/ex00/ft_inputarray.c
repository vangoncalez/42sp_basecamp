void	ft_solver(char array[4][4]);

void	ft_inputarray(char *argv[])
{
	int		i;
	int		j;
	int		aux;
	char	array[4][4];

	i = 0;
	j = 0;
	aux = 1;
	while (aux <= 16)
	{
		array[i][j] = *argv[aux];
		if (j == 3)
		{
			j = 0;
			i++;
		}
		else
		{
			j++;
		}
		aux++;
	}
	ft_solver(array);
}
