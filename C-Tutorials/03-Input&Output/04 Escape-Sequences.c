/*
 * Topic   : Escape Sequences
 * Module  : 03 - Input and Output
 *
 * Escape sequences start with backslash \ inside character/string literals.
 *
 *   \n  new line          \t  horizontal tab
 *   \\  backslash         \"  double quote inside string
 *   \'  single quote      \0  null character (end of string)
 *   \r  carriage return   \b  backspace
 *   \a  alert (bell)      \f  form feed
 *
 * Compile: gcc "04 Escape-Sequences.c" -o io04
 */

#include <stdio.h>

int main(void)
{
    printf("=== Escape Sequences ===\n\n");

    printf("New line:\nLine 1\nLine 2\n\n");

    printf("Tab columns:\n");
    printf("Name\tAge\tCity\n");
    printf("Ali\t22\tKabul\n");
    printf("Sara\t20\tHerat\n\n");

    printf("Quotes: He said \"C is powerful.\"\n");
    printf("Single quote character: %c\n\n", '\'');

    printf("Backslash path example: C:\\Users\\Projects\\C\n\n");

    printf("Bell (may beep on some systems): \a\n");
    printf("Carriage return demo: Hello\rWorld!\n\n");

    /* Hex escape: \xHH gives ASCII code in hex (41 = 'A') */
    printf("Hex escape \\x41 prints: %c\n", '\x41');

    return 0;
}
