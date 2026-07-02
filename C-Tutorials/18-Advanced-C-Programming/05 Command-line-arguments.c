/*
 * Topic   : Command-line Arguments
 * Module  : 18 - Advanced C Programming
 *
 * main can receive arguments from the shell:
 *   int main(int argc, char *argv[])
 *   argc = argument count, argv[0] is program name
 *
 * Run examples:
 *   adv05 one two
 *   adv05 --help
 *
 * Compile: gcc "05 Command-line-arguments.c" -o adv05
 */

#include <stdio.h>

int main(int argc, char *argv[])
{
    int i;

    printf("=== Command-line Arguments ===\n\n");
    printf("argc = %d\n", argc);

    if (argc == 1)
    {
        printf("No extra arguments. Try: adv05 hello 42\n");
        return 0;
    }

    for (i = 0; i < argc; i++)
        printf("argv[%d] = %s\n", i, argv[i]);

    if (argc >= 3)
        printf("\nFirst argument: %s\nSecond argument: %s\n", argv[1], argv[2]);

    return 0;
}
