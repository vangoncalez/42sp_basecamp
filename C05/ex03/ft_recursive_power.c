#include<stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	result;
	int	i;

	i = 0;
	result = 1;
	if ((nb == 0 && power != 0) || power < 0)
		return (0);
	if ((power == 0) || ((nb < 0) && (power == 0)))
		return (1);
	else
		result = nb * ft_recursive_power(nb, power - 1);
	return (result);
}
