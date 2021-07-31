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
