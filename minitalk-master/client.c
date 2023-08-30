#include <signal.h>
#include "./libft/libft.h"

static void ft_bit_send(char c, pid_t pid)
{
    int ind;

	ind = 0;
    while (ind < 8)
    {
        if ((c & (1 << ind)) != 0)
            kill(pid, SIGUSR2);
        else
            kill(pid, SIGUSR1);

        ind++;
        usleep(150);
    }
}

int	main(int ac, char *av[])
{
	pid_t	nbr;
	int		ind;

	ind = 0;
	if (ac == 3)
	{
		nbr = ft_atoi(av[1]);
		if (nbr < 1)
			return (1);
		while (av[2][ind])
		{
			ft_bit_send(av[2][ind], nbr);
			ind++;
		}
	}
	return (0);
}

