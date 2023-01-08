#include "minitalk.h"
#include <signal.h>
#include <sys/types.h>
#include <unistd.h>

char sig;

void sighandler(int signal1)
{
    if (signal1 == SIGUSR1)
        sig = 1;
    else if (signal1 == SIGUSR2)
        sig = 2;
    return;
}

void sig1(char *m, int *count)
{
    *m = *m << 1;
    *m = *m + 1;
    (*count)++;
    if (*count == 8)
    {
        ft_putchar_fd(*m, 1);
        *m = 0;
        *count = 0;
    }
}

void sig0(char *m, int *count)
{
    (*count)++;
    *m = *m << 1;
    if (*count == 8)
    {
        ft_putchar_fd(*m, 1);
        *m = 0;
        *count = 0;
    }
}

int main()
{
    int count;
    char m;
    pid_t pid;

    count = 0;
    sig = 0;
    pid = getpid();
    m = 0;
    ft_putstr_fd("SERVER: \033[0;32mAKTIV\n\033[0m", 1);
    ft_putstr_fd("PID: ", 1);
    ft_putnbr_fd(pid, 1);
    ft_putstr_fd("\n", 1);
    while (1)
    {
        if (sig == 1)
            sig0(&m, &count);
        else if (sig == 2)
            sig1(&m, &count);
        signal(SIGUSR1, sighandler);
        signal(SIGUSR2, sighandler);
        pause();
    }
}
