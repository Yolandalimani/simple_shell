#include "shell.h"
/*
 * custom_output - Custom output function
 *
 * This function writes the specified message to the standard output.
 *
 * @param msg: The message to be written to the standard output.
 */
void custom_output(const char *msg)
{
	write(STDOUT_FILENO, msg, strlen(msg));
}
