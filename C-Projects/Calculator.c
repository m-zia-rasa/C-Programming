/*
 * Project : Calculator
 * Level   : Beginner
 *
 * A menu-free calculator that reads two numbers and one operator.
 * It introduces arithmetic, switch statements, and division validation.
 *
 * Build:
 *   cl /W4 /Fe:calculator.exe Calculator.c
 */

#include <stdio.h>

int main(void)
{
    double left;
    double right;
    char operator_symbol;
    char line[120];

    printf("Enter an expression such as 12.5 * 3: ");
    if (fgets(line, sizeof line, stdin) == NULL ||
        sscanf(line, "%lf %c %lf", &left, &operator_symbol, &right) != 3) {
        printf("Invalid expression.\n");
        return 1;
    }

    switch (operator_symbol) {
    case '+':
        printf("Result: %.2f\n", left + right);
        break;
    case '-':
        printf("Result: %.2f\n", left - right);
        break;
    case '*':
        printf("Result: %.2f\n", left * right);
        break;
    case '/':
        if (right == 0.0) {
            printf("Division by zero is not allowed.\n");
            return 1;
        }
        printf("Result: %.2f\n", left / right);
        break;
    default:
        printf("Unsupported operator. Use +, -, *, or /.\n");
        return 1;
    }

    return 0;
}
