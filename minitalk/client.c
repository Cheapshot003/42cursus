#include "minitalk.h"
#include <signal.h>
#include <stdio.h>

void usage()
{
	ft_putstr_fd("bis du deppat oda wos?: client [PID] [Nachricht]\n", 1);
	exit(0);
}

void sendchar(char c, int pid)
{
	int counter = 1 << 7;
	while (counter)
	{
		if (c & counter)
		{
			kill(pid, SIGUSR2);
		}
		else
			kill(pid, SIGUSR1);
		counter = counter >> 1;
		usleep(850);
	}
}

void sendstr(char *str, int pid)
{
	int i;

	i = 0;
	while (str[i])
	{
		sendchar(str[i], pid);
		i++;
	}
}

int main(int argc, char **argv)
{
	int pid;

	if (argc != 3)
		usage();
	pid = ft_atoi(argv[1]);
	sendstr(argv[2], pid);
}