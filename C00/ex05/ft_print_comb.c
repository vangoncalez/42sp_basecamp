#include <unistd.h>

void	ft_putchar(char c);
void	ft_putcomma(int x, int y, int z);

void	ft_print_comb(void)
{
	int		x;
	int		y;
	int		z;

	x = 0;
	y = 0;
	z = 0;
	while (x <= 7)
	{	
		y = x + 1;
		while (y <= 8)
		{
			z = y + 1;
			while (z <= 9)
			{
				ft_putchar(x + '0');
				ft_putchar(y + '0');
				ft_putchar(z + '0');
				ft_putcomma(x, y, z);
				z++;
			}
			y++;
		}
		x++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putcomma(int x, int y, int z)
{
	if (!((x == 7) && (y == 8) && (z == 9)))
	{
		write(1, ", ", 2);
	}
}
