#include "shell.h"
/*
 * Custom output function
 */
void custom_output(const char *msg) {
    write(STDOUT_FILENO, msg, strlen(msg));
}
