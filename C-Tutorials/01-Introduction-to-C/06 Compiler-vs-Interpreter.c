/*
 * Topic   : Compiler vs Interpreter
 * Module  : 01 - Introduction to C
 *
 * COMPILER (C uses this approach):
 *   - Translates entire source file to machine code (or object code) first
 *   - Creates an .exe or binary you run separately
 *   - Errors often reported before the program runs
 *   - Examples: gcc, clang, MSVC
 *
 * INTERPRETER:
 *   - Reads and executes source line-by-line (or bytecode) at runtime
 *   - No separate executable required for the user in the same way
 *   - Errors may appear only when that line is reached
 *   - Examples: Python (CPython), Ruby, Bash
 *
 * C is compiled. You edit .c files, compile once, then run the binary.
 *
 * Compile: gcc "06 Compiler-vs-Interpreter.c" -o intro06
 */

#include <stdio.h>

int main(void)
{
    printf("=== Compiler vs Interpreter ===\n\n");

    printf("+------------------+---------------------------+---------------------------+\n");
    printf("| Aspect           | Compiler (C)              | Interpreter               |\n");
    printf("+------------------+---------------------------+---------------------------+\n");
    printf("| When translated  | Before running            | While running             |\n");
    printf("| Output           | Executable / object file  | No standalone binary      |\n");
    printf("| Speed            | Usually faster at runtime | Often slower              |\n");
    printf("| Error detection  | Often at compile time     | May be at runtime         |\n");
    printf("+------------------+---------------------------+---------------------------+\n\n");

    printf("You compiled THIS file with a compiler (e.g. gcc).\n");
    printf("The running program is native machine code, not line-by-line interpretation.\n");

    return 0;
}
