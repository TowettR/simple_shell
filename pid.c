#include <stdio.h>
#include <unistd.h>
/**
 * main - function that prints process ID
 * Return: Always 0
 */
int _pid(void)
{
	pid_t mypid;

	mypid = getpid();
	printf("my pid is:  %d\n", mypid);
	return (0);
}
