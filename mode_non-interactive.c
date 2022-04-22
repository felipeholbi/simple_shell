#include "shell.h"

/**
 * main - the main function
 *
 * Return: int
 */

void mode_non_interactive()
{
	char *cmd;

	do {
		print_prompt1(); /*imprimimos el indicador del shell*/

		cmd = read_cmd(); /*read a command*/

		if (strcmp(cmd, "exit\n") == 0)
		{
			free(cmd);
			break;
		}

		if (cmd[0] == '\0' || strcmp(cmd, "\n") == 0)
		{
			free(cmd);
			continue; /*if escape line, continue prompt*/
		}

	} while (1);

	exit(EXIT_SUCCESS);
}