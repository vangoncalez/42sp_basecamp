/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaferrei <vaferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 03:27:22 by vaferrei          #+#    #+#             */
/*   Updated: 2021/07/31 03:27:23 by vaferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	char	letter;
	int		line;
	int		column;

	line = 1;
	column = 1;
	while (line <= y)
	{
		while (column <= x)
		{
			letter = ' ';
			if (line == 1 || line == y || column == 1 || column == x)
				letter = 'B';
			if (line == y && (column == 1 || column == x))
				letter = 'C';
			if (line == 1 && (column == 1 || column == x))
				letter = 'A';
			ft_putchar(letter);
			column++;
		}
		line++;
		ft_putchar('\n');
		column = 1;
	}
}
