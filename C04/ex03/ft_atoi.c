int	ft_atoi_neg(char *str, int num);
int	ft_atoi_control(int control1);

int	ft_atoi(char *str)
{
	int	i;
	int	num;
	int	control1;
	int	control2;	

	i = 0;
	num = 0;
	control1 = 0;
	control2 = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9' && control2 == 0)
		{
			num = (num * 10) + str[i] - '0';
			control1 = 1;
		}
		else
			control2 = ft_atoi_control(control1);
		i++;
	}
 
	return (ft_atoi_neg(str, num));
} 

int	ft_atoi_control(int control1)
{
	int	control2;

	if (control1 == 0)
		control2 = 0;
	else
		control2 = 1;
	return (control2);
}

int	ft_atoi_neg(char *str, int num)
{
	int	neg;
	int	i;
	int	mod;

	i = 0;
	neg = 0;
	while (str[i])
	{
		if (str[i] == 45)
			neg++;
		i++;
	}
	mod = neg % 2;
	if (mod == 1)
		num = num * -1;
	return (num);
}
