/*
 * Project : Compiler Mini Project
 * Level   : Advanced
 *
 * A tiny expression compiler pipeline:
 *   1. lexer reads characters
 *   2. parser applies grammar rules
 *   3. evaluator computes the result
 *
 * Grammar:
 *   expression = term { ("+" | "-") term }
 *   term       = factor { ("*" | "/") factor }
 *   factor     = number | "(" expression ")"
 *
 * Build:
 *   cl /W4 /Fe:mini-compiler.exe Compiler-Mini-Project.c
 */

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    const char *input;
    size_t position;
    int error;
} Parser;

static void skip_spaces(Parser *parser)
{
    while (isspace((unsigned char)parser->input[parser->position])) {
        parser->position++;
    }
}

static int match(Parser *parser, char expected)
{
    skip_spaces(parser);
    if (parser->input[parser->position] == expected) {
        parser->position++;
        return 1;
    }
    return 0;
}

static double parse_expression(Parser *parser);

static double parse_number(Parser *parser)
{
    char *end_pointer;
    double value;

    skip_spaces(parser);
    value = strtod(parser->input + parser->position, &end_pointer);
    if (end_pointer == parser->input + parser->position) {
        parser->error = 1;
        return 0.0;
    }

    parser->position = (size_t)(end_pointer - parser->input);
    return value;
}

static double parse_factor(Parser *parser)
{
    double value;

    if (match(parser, '(')) {
        value = parse_expression(parser);
        if (!match(parser, ')')) {
            parser->error = 1;
        }
        return value;
    }

    return parse_number(parser);
}

static double parse_term(Parser *parser)
{
    double value = parse_factor(parser);

    for (;;) {
        if (match(parser, '*')) {
            value *= parse_factor(parser);
        } else if (match(parser, '/')) {
            double divisor = parse_factor(parser);
            if (divisor == 0.0) {
                parser->error = 1;
                return 0.0;
            }
            value /= divisor;
        } else {
            break;
        }
    }

    return value;
}

static double parse_expression(Parser *parser)
{
    double value = parse_term(parser);

    for (;;) {
        if (match(parser, '+')) {
            value += parse_term(parser);
        } else if (match(parser, '-')) {
            value -= parse_term(parser);
        } else {
            break;
        }
    }

    return value;
}

int main(void)
{
    char line[200];
    Parser parser;
    double result;

    printf("Enter arithmetic expression: ");
    if (fgets(line, sizeof line, stdin) == NULL) {
        return 1;
    }

    parser.input = line;
    parser.position = 0;
    parser.error = 0;

    result = parse_expression(&parser);
    skip_spaces(&parser);

    if (parser.error || parser.input[parser.position] != '\0') {
        printf("Syntax or math error in expression.\n");
        return 1;
    }

    printf("Result: %.2f\n", result);
    return 0;
}
