/*
 * Topic   : History of C
 * Module  : 01 - Introduction to C
 *
 * Timeline (simplified):
 *   1972 - Dennis Ritchie develops C at Bell Labs (on UNIX)
 *   1978 - "The C Programming Language" (K&R) published
 *   1983 - ANSI begins standardization
 *   1989 - ANSI C (C89 / C90) standardized
 *   1999 - ISO C99 (new features: // comments, inline, etc.)
 *   2011 - ISO C11 (_Generic, threads optional, etc.)
 *   2017 - ISO C17 (minor clarifications)
 *   2023 - ISO C23 (latest standard; adoption varies by compiler)
 *
 * C evolved from B, which evolved from BCPL. UNIX was rewritten in C,
 * which proved that portable systems software could be written in a
 * high-level language.
 *
 * Compile: gcc "03 History-of-C.c" -o intro03
 */

#include <stdio.h>

int main(void)
{
    const char *milestones[] = {
        "1972 - C created by Dennis Ritchie at Bell Labs",
        "1978 - Kernighan & Ritchie book (K&R C)",
        "1989 - ANSI C (C89/C90) standard",
        "1999 - C99 standard",
        "2011 - C11 standard",
        "2017 - C17 standard",
        "2023 - C23 standard"
    };
    const int count = (int)(sizeof milestones / sizeof milestones[0]);
    int i;

    printf("=== History of C ===\n\n");

    for (i = 0; i < count; i++)
        printf("  %s\n", milestones[i]);

    printf("\nLearning C today means learning a language with decades of\n");
    printf("proven use in systems programming worldwide.\n");

    return 0;
}
