#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

/**
 * infinite_while - sleeps in between iterations
 *
 * Return: returns 0 on success
 */
int infinite_while(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}

/**
 * create - creates a zombie processes
 *
 */
void create(void)
{
	pid_t pid;

	pid = fork();
	if (pid < 0)
		exit(1);
	else if (pid == 0)
	{
		printf("Zombie process created, PID: %d\n", getpid());
		exit(0);
	}
}

/**
 * main - creates zombies processes
 *
 * Return: calls infinite_while()
 */
int main(void)
{
	create();
	create();
	create();
	create();
	create();

	return (infinite_while());
}
