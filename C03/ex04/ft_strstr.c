/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaferrei <vaferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 03:25:41 by vaferrei          #+#    #+#             */
/*   Updated: 2021/07/31 03:25:42 by vaferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (to_find[i])
	{
		i++;
	}
	if (i == 0)
		return (str);
	while (str[j] != '\0')
	{
		while (to_find[k] == str[j + k])
		{
			if (k + 1 == i)
				return (str + j);
			k++;
		}
		k = 0;
		j++;
	}
	return (0);
}
