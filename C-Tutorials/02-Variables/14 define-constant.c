/*
 * Topic   : Constants — #define
 * Module  : 02 - Variables
 *
 * #define creates preprocessor macros — text replaced before compilation.
 * No memory is allocated for the name; it is not a typed variable.
 *
 *   #define NAME value
 *   #define SQUARE(x) ((x) * (x))   (macro with parameter)
 *
 * Compile: gcc "14 define-constant.c" -o var14
 */

#include <stdio.h>

#define MAX_SCORE 100
#define PASS_MARK 50
#define COURSE_NAME "C Programming"
#define SQUARE(n) ((n) * (n))

int main(void)
{
    int score = 72;

    printf("=== Constants: #define ===\n\n");
    printf("Course     : %s\n", COURSE_NAME);
    printf("Score      : %d / %d\n", score, MAX_SCORE);
    printf("Pass mark  : %d\n", PASS_MARK);
    printf("Square of 8: %d\n", SQUARE(8));

    if (score >= PASS_MARK)
        printf("Result: Pass\n");
    else
        printf("Result: Fail\n");

    return 0;
}
