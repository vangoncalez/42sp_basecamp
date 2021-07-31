/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaferrei <vaferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 03:22:59 by vaferrei          #+#    #+#             */
/*   Updated: 2021/07/31 03:23:00 by vaferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_findnumber(int nb);
int		ft_control(int nb);

void	ft_putnbr(int nb)
{
	int		number;
	int		module;
	int		control;
	int		i;
	char	arr_num[13];

	number = ft_findnumber(nb);
	control = ft_control(number);
	i = 0;
	while (i < control)
	{
		module = number % 10;
		if (module < 0)
			module = 0 - module;
		arr_num[control - i - 1] = module + '0';
		number = number / 10;
		i++;
	}
	i = 0;
	while (i < control)
	{
		write(1, &arr_num[i], 1);
		i++;
	}
}

int	ft_findnumber(int nb)
{
	if (nb < 0)
	{
		write(1, "-", 1);
	}
	if (nb < 0 && nb != -2147483648)
	{
		nb = 0 - nb;
	}
	return (nb);
}

int	ft_control(int number)
{
	int	control;

	control = 0;
	if (number == -2147483648)
	{
		control = 10;
	}	
	else if (number <= 9 && number >= 0)
	{
		control = 1;
	}
	else
	{
		while (number > 1)
		{
			number = number / 10;
			control++;
		}
	}
	return (control);
}
