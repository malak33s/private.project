#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *command = NULL;
    size_t bufsize = 0;

    // Print "$ " to prompt the user
    printf("$ ");

    // Read the user input using getline
    if (getline(&command, &bufsize, stdin) == -1)
    {
        perror("Error reading command");
        exit(EXIT_FAILURE);
    }

    // Print the command entered by the user
    printf("You entered: %s", command);

    // Free the dynamically allocated memory
    free(command);

    return 0;
}
