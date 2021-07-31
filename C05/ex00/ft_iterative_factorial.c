/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaferrei <vaferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 03:26:12 by vaferrei          #+#    #+#             */
/*   Updated: 2021/07/31 03:26:14 by vaferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fat;
	int	i;

	i = 0;
	fat = 1;
	if (nb < 0 || nb > 12)
		return (0);
	while (nb > 1)
	{
		fat = fat * nb;
		nb--;
	}
	return (fat);
}
