#include <shell.h>


/**
 * main - Entry point
 *
 * Return: success
 */
int main(void)
{
	char input[MAX_INPUT_LENGTH];
	int status = system(input);

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
		if (strlen(input) > 0)
		{
			if (status == -1)
			{
				printf("Error: Command '%s' not found\n", input);
			}
		}
	}
	return (0);
}
