#include "shell.h"

/**
 * main - Entry point
 *
 * Return: 0
 */
int main (void)
{
	char input[MAX_INPUT_LENGTH];
	char *args[MAX_ARGS];
	char *token = strtok(input, " ");
	int i;
	int status = execvp(args[0], args);

	while (1)
	{
		printf("simple_shell> ");
		fflush(stdout);
		if (fgets(input, sizeof(input), stdin) == NULL)
		{
			printf("\nExiting simple_shell. Goodbye!\n");
			break;
		}
		input[strcspn(input, "\n")] = '\0';
		i = o;
		while (token != NULL && i < MAX_ARGS)
		{
			args[i++] = token;
			token = strtok(NULL, " ");
		}
		args[i] = NULL;
		if (i > 0)
		{
			if (status == -1)
			{
				printf("Error: Command '%s' not found\n", args[0]);
			}
		}
	}
	return (0);
}
