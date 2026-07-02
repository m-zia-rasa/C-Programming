/*
 * Topic   : Installing GCC Compiler
 * Module  : 01 - Introduction to C
 *
 * GCC (GNU Compiler Collection) includes gcc for C and g++ for C++.
 *
 * --- Windows ---
 *   Option A: MSYS2 (recommended for tutorials)
 *     1. Download MSYS2 from https://www.msys2.org/
 *     2. Open "MSYS2 UCRT64" terminal
 *     3. Run: pacman -S mingw-w64-ucrt-x86_64-gcc
 *     4. Add folder to PATH, e.g. C:\msys64\ucrt64\bin
 *
 *   Option B: MinGW-w64 standalone installer
 *   Option C: WSL (Windows Subsystem for Linux) then: sudo apt install gcc
 *
 * --- Linux (Debian/Ubuntu) ---
 *     sudo apt update && sudo apt install build-essential
 *
 * --- macOS ---
 *     xcode-select --install
 *     or: brew install gcc
 *
 * Verify installation in a terminal:
 *     gcc --version
 *
 * Compile this lesson:
 *     gcc "07 Installing-GCC-Compiler.c" -o intro07
 */

#include <stdio.h>

int main(void)
{
    printf("=== Installing GCC Compiler ===\n\n");

    printf("After installing GCC, open a terminal and run:\n\n");
    printf("  gcc --version\n\n");
    printf("You should see version information for the GNU C compiler.\n\n");

    printf("Typical first compile command for any lesson file:\n");
    printf("  gcc \"07 Installing-GCC-Compiler.c\" -o intro07\n\n");

    printf("If gcc is not found, install GCC using the steps in the file header\n");
    printf("comments at the top of this source file, then try again.\n");

    return 0;
}
