#include <signal.h>
#include "./libft/libft.h"

static void	ft_bit_send(char c, pid_t pid)
{
	int	ind;

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

int	main(int ac, char **av)
{
	pid_t	pid;
	int		i;

	i = 0;
	if (ac == 3)
	{
		pid = ft_atoi(av[1]);
		if (pid <= 0)
			return (1);
		while (av[2][i])
		{
			ft_bit_send(av[2][i], pid);
			i++;
		}
		write(1, "✅", 4);
	}
	return (0);
}
