/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaferrei <vaferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 03:27:32 by vaferrei          #+#    #+#             */
/*   Updated: 2021/07/31 03:27:34 by vaferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
				letter = 'B';
			if ((column == 1 && line == 1) || (column == x && line == y))
				letter = 'A';
			if (column == 1 && line == y && y != 1)
				letter = 'C';
			if (column == x && line == 1 && x != 1)
				letter = 'C';
			ft_putchar(letter);
			column++;
		}
		line++;
		ft_putchar('\n');
	}
}
