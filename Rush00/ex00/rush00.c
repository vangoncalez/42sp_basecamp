void	ft_putchar(char c);

void	rush(int x, int y)
{
	char	letter;
	int		line;
	int		column;

	line = 1;
	while (line <= y)
	{
		column = 1;
		while (column <= x)
		{
			letter = ' ';
			if ((line == 1 || line == y) && (column == 1 || column == x))
				letter = 'o';
			if ((column == 1 || column == x) && (line != 1 && line != y))
				letter = '|';
			if ((line == 1 || line == y) && (column != 1 && column != x))
				letter = '-';
			ft_putchar(letter);
			column++;
		}
		line++;
		ft_putchar('\n');
	}
}
