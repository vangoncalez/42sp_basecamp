int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb == 0)
		return (nb);
	while (i * i < nb && i <= 46340)
		i++;
	if (i * i == nb)
		return (i);
	else
		return (0);
}
