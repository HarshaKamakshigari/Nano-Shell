#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

#define MAX_LINE 1024  // Maximum input line size
#define MAX_ARGS 100   // Maximum number of arguments

// Function to parse the command
void parse_command(char* line, char** args) {
    char* token = strtok(line, " \n");
    int i = 0;

    while (token != NULL) {
        args[i++] = token;
        token = strtok(NULL, " \n");
    }
    args[i] = NULL; // Null-terminate the list of arguments
}

// Function to execute the command
void execute_command(char** args) {
    pid_t pid, wpid;
    int status;

    if ((pid = fork()) == -1) {
        perror("fork");
        exit(EXIT_FAILURE);
    } else if (pid == 0) { // Child process
        if (execvp(args[0], args) == -1) {
            perror("exec");
        }
        exit(EXIT_FAILURE);
    } else { // Parent process
        do {
            wpid = waitpid(pid, &status, WUNTRACED);
        } while (!WIFEXITED(status) && !WIFSIGNALED(status));
    }
}

int main() {
    char line[MAX_LINE]; // Input line
    char* args[MAX_ARGS]; // Command arguments

    while (1) {
        printf("custom_shell> "); // Prompt
        if (!fgets(line, sizeof(line), stdin)) {
            break; // Exit on EOF
        }

        // Parse command
        parse_command(line, args);

        // Check for built-in commands
        if (args[0] == NULL) {
            continue; // Empty command
        }
        if (strcmp(args[0], "exit") == 0) {
            break; // Exit shell
        }
        if (strcmp(args[0], "cd") == 0) {
            if (args[1] == NULL) {
                fprintf(stderr, "cd: missing argument\n");
            } else if (chdir(args[1]) != 0) {
                perror("cd");
            }
            continue; // Skip to next iteration
        }

        // Execute command
        execute_command(args);
    }

    return 0;
}
