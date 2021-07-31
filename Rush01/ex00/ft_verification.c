#include<unistd.h>

int		ft_verificationc(char argv[]);
int		ft_verificationl(char argv[]);
void	ft_inputarray(char argv[]);

void	ft_verification(char argv[])
{
	if (ft_verificationc(argv) > 0 || ft_verificationl(argv) > 0)
		write(1, "Error\n", 6);
	else
		ft_inputarray(argv);
}
