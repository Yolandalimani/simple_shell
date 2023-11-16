#include "shell.h"
#include <sys/wait.h>
/*
 * Function to executute the shell
 */

void perform_execution(const char *cmd) {
    pid_t process_id = fork();

    if (process_id == -1) {
        perror("fork");
        exit(EXIT_FAILURE);
    } else {
        if (process_id == 0) {
            execlp(cmd, cmd, (char *)NULL);
            perror("execlp");
            exit(EXIT_FAILURE);
        } else {
            wait(NULL);
        }
    }
}
