/*
 * Topic   : Type Modifier — long
 * Module  : 02 - Variables
 *
 * long (and long long) extend integer range on many platforms.
 *   long population = 8000000000L;
 *   long long big = 9000000000000LL;
 *
 * Compile: gcc "10 long.c" -o var10
 */

#include <limits.h>
#include <stdio.h>

int main(void)
{
    long distance_km = 384400L;           /* Earth–Moon approx. */
    long long world_population = 8000000000LL;

    printf("=== Type Modifier: long ===\n\n");
    printf("distance_km       = %ld km\n", distance_km);
    printf("world_population  = %lld\n", world_population);
    printf("LONG_MAX          = %ld\n", LONG_MAX);
    printf("sizeof(long)      = %zu byte(s)\n", sizeof(long));
    printf("sizeof(long long) = %zu byte(s)\n", sizeof(long long));

    return 0;
}
