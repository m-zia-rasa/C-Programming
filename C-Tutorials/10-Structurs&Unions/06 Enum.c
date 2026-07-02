/*
 * Topic   : Enum
 * Module  : 10 - Structures and Unions
 *
 * enum defines named integer constants:
 *   enum Day { MON, TUE, WED };  (MON=0, TUE=1, ...)
 *   enum Status { OK = 1, ERROR = -1 };
 *
 * Compile: gcc "06 Enum.c" -o su06
 */

#include <stdio.h>

enum Day
{
    MON,
    TUE,
    WED,
    THU,
    FRI,
    SAT,
    SUN
};

enum TrafficLight
{
    RED,
    YELLOW,
    GREEN
};

int main(void)
{
    enum Day today = WED;
    enum TrafficLight signal = GREEN;

    printf("=== Enum ===\n\n");

    printf("today = %d (WED is %d)\n", today, WED);
    printf("signal = %d (GREEN is %d)\n", signal, GREEN);

    printf("\nDay names by value:\n");
    printf("  MON=%d ... SUN=%d\n", MON, SUN);

    if (signal == GREEN)
        printf("Traffic light: Go\n");

    return 0;
}
