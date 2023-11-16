#include "shell.h"
/*
 * main shell
 */

int main(void) {
    char user_input[120];

    for (;;) {
        show_shell_prompt();
        get_user_input(user_input, sizeof(user_input));
        perform_execution(user_input);
    }

    return 0;
}
