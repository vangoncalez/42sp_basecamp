/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaferrei <vaferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 03:26:46 by vaferrei          #+#    #+#             */
/*   Updated: 2021/07/31 03:26:47 by vaferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= (nb / i))
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;
	int	next;

	i = 0;
	next = 0;
	if (nb <= 0)
		return (2);
	while (i <= nb * 3)
	{
		next = ft_is_prime (nb + i);
		if (next == 1)
			return (nb + i);
		i++;
	}
	return (nb);
}
