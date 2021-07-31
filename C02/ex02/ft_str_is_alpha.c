/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaferrei <vaferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 03:24:32 by vaferrei          #+#    #+#             */
/*   Updated: 2021/07/31 03:24:33 by vaferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z' )
			result = 1;
		else if (str[i] >= 'A' && str[i] <= 'Z' )
			result = 1;
		else if (str[i] == ' ' )
			result = 1;
		else
			return (0);
		i++;
	}
	return (1);
}
