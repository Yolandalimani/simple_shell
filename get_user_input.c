#include "shell.h"
/*
 * Get user input function
 */

void get_user_input(char *user_command, size_t command_size) {
    if (fgets(user_command, command_size, stdin) == NULL) {
        if (feof(stdin)) {
            custom_output("\n");
            exit(EXIT_SUCCESS);
        } else {
            custom_output("Error while reading user input.\n");
            exit(EXIT_FAILURE);
        }
    }
    user_command[strcspn(user_command, "\n")] = '\0';
}
