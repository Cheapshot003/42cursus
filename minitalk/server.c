#include "minitalk.h"
#include <signal.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int count;
char m;

void sig1()
{
    m = m << 1;
    m = m + 1;
    count++;
    if (count == 8)
    {
        printf("%c", m);
        fflush(stdout);
        m = 0;
        count = 0;
    }
}

void sig0()
{
    count++;
    m = m << 1;
    if (count == 8)
    {
        printf("%c", m);
        fflush(stdout);
        m = 0;
        count = 0;
    }
}


int main()
{
    pid_t pid;
    count = 0;
    pid = getpid();
    m = 0;   
    printf("SERVER AKTIV\n");
    printf("PID: %d\n", pid);
    fflush(stdout);



    while (1)
    {
        signal(SIGUSR1, sig0);
        signal(SIGUSR2, sig1);

        pause();

    }

}