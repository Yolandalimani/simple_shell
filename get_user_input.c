#include "shell.h"
/*
 * get_user_input - Prompt the user for input and store it in a buffer.
 *
 * This function reads a line of input from the standard input and stores it
 * in the provided buffer. It removes the newline character from the input if
 * present.
 *
 * @param user_command: The buffer to store the user input.
 * @param command_size: The size of the buffer.
 */
void get_user_input(char *user_command, size_t command_size)
{
	if (fgets(user_command, command_size, stdin) == NULL)
	{
		if (feof(stdin))
		{
			custom_output("\n");
			exit(EXIT_SUCCESS);
		}
		else
		{
			custom_output("Error while reading user input.\n");
		exit(EXIT_FAILURE);
		}
	}
	user_command[strcspn(user_command, "\n")] = '\0';
}
