#include "main.h"
/**
 * main - main
 *
 * Return: Always 0
 */
int main(void)
{
	ssize_t status_read, tty = 1;
	char *line = NULL, *cpline = NULL, *puntline, *arg = NULL;
	char **args = NULL;
	size_t lineSize = 0;

	UNUSED(args);

	isatty(STDIN_FILENO) == 0 ? tty = 0 : tty;
	do {
		tty == 1 ? write(STDOUT_FILENO, "($) ", 4) : tty;
		fflush(stdin);
		status_read = getline(&line, &lineSize, stdin);
		if (status_read == EOF)
		{
			break;
		}
		else
		{
			_strdup(line, &cpline);
			puntline = cpline;
/*			create_darr(&args, cpline);*/
			for (; (arg = strtok(cpline, " \t\n")); cpline = NULL)
			{
				if (arg == NULL)
				{
					break;
				}
			}
		}
		free(puntline);
		free(line);
		line = NULL;
	} while (1);
	free(line);
	return (0);
}
