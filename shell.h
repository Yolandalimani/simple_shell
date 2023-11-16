#ifndef SHELL_H
#define SHELL_H

#include "shell.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>
/*
 * Function prototypes
 */

void show_shell_prompt(void);
void custom_output(const char *msg);
void get_user_input(char *input_str, size_t str_size);
void perform_execution(const char *cmd);

#endif
