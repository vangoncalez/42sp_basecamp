#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_comb2(void)
{
	int	num1;
	int	num2;

	num1 = 0;
	while (num1 <= 99)
	{
		num2 = num1 + 1;
		while (num2 <= 99)
		{
			ft_putchar((num1 / 10) + 48);
			ft_putchar((num1 % 10) + 48);
			ft_putchar(' ');
			ft_putchar((num2 / 10) + 48);
			ft_putchar((num2 % 10) + 48);
			if (num1 != 98)
				write(1, ", ", 2);
			num2++;
		}
		num1++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
