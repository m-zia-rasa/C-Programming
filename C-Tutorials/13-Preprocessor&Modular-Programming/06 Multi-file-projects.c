/*
 * Topic   : Multi-file Projects
 * Module  : 13 - Preprocessor and Modular Programming
 *
 * Project layout in this folder:
 *   06 Multi-file-projects.c  (main)
 *   greeter.h / greeter.c
 *   stats.h   / stats.c
 *   math_utils.h / math_utils.c
 *
 * Build everything:
 *   gcc "06 Multi-file-projects.c" greeter.c stats.c math_utils.c -o pp06
 *
 * MSVC:
 *   cl "06 Multi-file-projects.c" greeter.c stats.c math_utils.c /Fe:pp06.exe
 */

#include <stdio.h>
#include "greeter.h"
#include "stats.h"
#include "math_utils.h"

int main(void)
{
    int scores[] = {80, 90, 75, 88};
    int count = 4;

    printf("=== Multi-file Projects ===\n\n");

    greet("Student");
    printf("sum of 7 and 8 = %d\n", add(7, 8));
    printf("Average score = %.2f\n", average(scores, count));

    return 0;
}
