#include<unistd.h>

int		ft_in(char argv[]);
int		ft_isn(char argv[]);
void	ft_verification(char *argv[]);

int	main(int argc, char *argv[])
{
	int	cont;
	int	aux;
	int	auxinput;

	aux = 16;
	cont = 0;
	while (cont < argc)
	{
		auxinput = ft_isn(argv[cont]);
		if (ft_in(argv[cont]) >= 1 && ft_in(argv[cont]) <= 4 && auxinput)
			aux--;
		cont++;
	}
	if (aux == 0)
		ft_verification(argv);
	else
		write(1, "Error\n", 6);
	return (0);
}
