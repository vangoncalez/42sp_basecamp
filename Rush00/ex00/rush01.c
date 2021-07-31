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
			if (column == 1 || line == 1 || column == x || line == y)
				letter = '*';
			if ((column == 1 && line == 1) || (column == x && line == y))
				letter = '/';
			if (column == 1 && line == y && y != 1)
				letter = '\\';
			if (column == x && line == 1 && x != 1)
				letter = '\\';
			ft_putchar(letter);
			column++;
		}
		line++;
		ft_putchar('\n');
	}
}
