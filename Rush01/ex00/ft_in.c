#include<unistd.h>

int	ft_in(char argv[])
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (argv[i] != '\0')
	{
		result = (argv[i] - '0') + (result * 10);
		i++;
	}
	return (result);
}
