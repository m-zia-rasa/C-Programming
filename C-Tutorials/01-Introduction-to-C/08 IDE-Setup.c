/*
 * Topic   : IDE Setup
 * Module  : 01 - Introduction to C
 *
 * An IDE (Integrated Development Environment) combines an editor, build tools,
 * and debugger. For C on Windows, common choices:
 *
 *   - Visual Studio Code + C/C++ extension + GCC on PATH
 *   - Cursor / VS Code with tasks.json to run gcc
 *   - CLion, Code::Blocks, Dev-C++ (bundled MinGW)
 *   - Visual Studio with "Desktop development with C++" workload
 *
 * Minimal VS Code / Cursor setup:
 *   1. Install GCC (see 07 Installing-GCC-Compiler.c)
 *   2. Install "C/C++" extension by Microsoft
 *   3. Open this tutorial folder as workspace
 *   4. Terminal: gcc "08 IDE-Setup.c" -o intro08 && ./intro08
 *
 * Recommended habits:
 *   - Save .c files with UTF-8 encoding
 *   - Build from the folder containing the source file
 *   - Use quoted paths when filenames contain spaces
 *
 * Compile: gcc "08 IDE-Setup.c" -o intro08
 */

#include <stdio.h>

int main(void)
{
    printf("=== IDE Setup ===\n\n");

    printf("Your IDE should provide:\n");
    printf("  1. Syntax highlighting for .c and .h files\n");
    printf("  2. A terminal to run gcc and your program\n");
    printf("  3. (Optional) Debugger breakpoints and variable watch\n\n");

    printf("Editor + gcc in terminal is enough to complete this entire course.\n");
    printf("You are reading this message because compile and run succeeded.\n");

    return 0;
}
