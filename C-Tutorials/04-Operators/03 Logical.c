/*
 * Topic   : Logical Operators
 * Module  : 04 - Operators
 *
 * Combine or invert relational results (0 = false, non-zero = true):
 *   &&  logical AND   (both must be true)
 *   ||  logical OR    (at least one true)
 *   !   logical NOT   (flip true/false)
 *
 * Short-circuit: && stops if left is false; || stops if left is true.
 *
 * Compile: gcc "03 Logical.c" -o op03
 */

#include <stdio.h>

int main(void)
{
    int age = 22;
    int has_ticket = 1;
    int is_vip = 0;

    int can_enter = (age >= 18) && has_ticket;
    int free_drink = is_vip || (age >= 65);
    int is_minor = ! (age >= 18);

    printf("=== Logical Operators ===\n\n");
    printf("age = %d, has_ticket = %d, is_vip = %d\n\n", age, has_ticket, is_vip);

    printf("(age >= 18) && has_ticket  => can_enter  = %d\n", can_enter);
    printf("is_vip || (age >= 65)      => free_drink = %d\n", free_drink);
    printf("!(age >= 18)               => is_minor   = %d\n", is_minor);

    return 0;
}
