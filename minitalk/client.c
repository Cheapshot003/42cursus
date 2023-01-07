#include "minitalk.h"
#include <signal.h>
#include <stdio.h>

void usage()
{
	printf("lak du musst so machen: client [PID] [Nachricht]\n");
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
		usleep(50);
	}
}

void sendstr(char* str, int pid)
{
	while (*str)
	{
		sendchar(*str, pid);
		str++;
	}
}



int main(int argc, char** argv)
{
	int pid;
	
	if (argc != 3)
		usage();
	pid = atoi(argv[1]);
	sendstr(argv[2], pid);
	
}
