#include <signal.h>
#include "./libft/libft.h"
#include "./ft_printf/ft_printf.h"
#include <stdlib.h>

void	ft_output(int *byte)
{
    char c;
    int i;
	
	c = 0;
	i = 0;
    while (i < 8)
    {
        c = (c << 1) | byte[i];
        i++;
    }
	ft_printf("%c", c);
}

void	handle_sigusr(int sig)
{
	static int	byte[7];
	static int	ind = 7;

	byte[ind] = sig - 30;
	ind--;
	if (ind < 0)
	{
		ft_output(byte);
		ind = 7;
	}
}

int	main(void)
{
	struct sigaction sa;
	sa.sa_handler = handle_sigusr; // in C function names can dacay into function pointers (when we use 
	// the name of the function without parenthesses its aoutomatically converted into a function pointer)

	sa.sa_flags = SA_RESTART; // to ensure the system calls are restarted if interrupted by signals.
	
	ft_printf("PID of Server: %d\n", getpid());
	sigaction(SIGUSR1, &sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);
	while (1)
		pause(); // suspends execution untill a signal is recieved
	return (0);
}
