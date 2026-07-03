# C Programming — Professional Tutorial Course

Complete hands-on syllabus: **18 modules**, **124 lesson programs** (`.c`), plus helper headers/sources in Module 13.

Each canonical module directory contains a documented, runnable c files example.

## How to use

1. Open a module folder in order (01 → 18).
2. Read the header comment at the top of each `.c` file.
3. Compile and run (examples use fixed data unless noted).

**Windows (MSVC):**

```cmd
cd "01-Introduction-to-C"
cl /W4 /Fe:demo.exe "09 Hello-World.c"
demo.exe
```

**GCC / MinGW / WSL / Linux:**

```bash
gcc -Wall -Wextra "09 Hello-World.c" -o demo
./demo
```

**Pthreads (Module 16, lessons 02–04):** requires `gcc -pthread` on Linux, macOS, WSL, or MSYS2 MinGW.

**Multi-file builds (Module 13):**

```bash
gcc "06 Multi-file-projects.c" greeter.c stats.c math_utils.c -o demo
```

---

## Course map

| # | Directory | Lessons | Topics covered |
|---|-----------|---------|----------------|
| 01 | `01-Introduction-to-C` | 10 | Programming, C language, history, features, applications, compiler vs interpreter, GCC install, IDE setup, Hello World, compilation process |
| 02 | `02-Variables` | 14 | Declaring/initializing variables, scope; types `int` `float` `double` `char` `void`; modifiers `short` `long` `signed` `unsigned`; `const`, `#define` |
| 03 | `03-Input&Output` | 4 | `printf`, `scanf`, format specifiers, escape sequences |
| 04 | `04-Operators` | 7 | Arithmetic, relational, logical, assignment, increment/decrement, bitwise, ternary |
| 05 | `05-Condtional-Statements` | 5 | `if`, `if-else`, nested `if`, `else-if` ladder, `switch-case` |
| 06 | `06-Loops` | 6 | `while`, `do-while`, `for`, nested loops, `break`, `continue` |
| 07 | `07-Functions` | 7 | Declaration, definition, call, return values, parameters/arguments, recursion, scope & lifetime |
| 08 | `08-Arrays&Strings` | 6 | 1D/2D/multi-D arrays; character arrays, string functions, string manipulation |
| 09 | `09-Pointers` | 7 | Addresses, declaration, dereferencing, pointer arithmetic, pointers & arrays, function pointers, double pointers |
| 10 | `10-Structurs&Unions` | 6 | `struct`, `typedef`, nested structures, arrays of structures, `union`, `enum` |
| 11 | `11-Dynamic-Memory-Allocation` | 6 | `malloc`, `calloc`, `realloc`, `free`, memory leaks, dangling pointers |
| 12 | `12-File-Handling` | 7 | `fopen`, `fclose`, `fprintf`, `fscanf`, `fgets`, `fputs`, binary files |
| 13 | `13-Preprocessor&Modular-Programming` | 6 + helpers | `#include`, `#define`, macros, header files, separate compilation, multi-file projects |
| 14 | `14-Data-Structure` | 8 | Linked lists, stacks, queues, circular queue, trees, BST, hash tables, graphs |
| 15 | `15-Algorithms` | 6 | Time complexity, Big O, searching, sorting, recursion, divide & conquer |
| 16 | `16-Multithreading-Programming` | 6 | Processes vs threads, pthreads, mutex, synchronization, signals, system calls |
| 17 | `17-Debugging&Optimization` | 6 | Debugging techniques, GDB, Valgrind, profiling, leak detection, optimization |
| 18 | `18-Advanced-C-Programming` | 7 | Bitwise (advanced), alignment, `volatile`, `static`, CLI args, function pointers, callbacks |

**Total lesson files:** 124

---

## Support files (Module 13)

| File | Purpose |
|------|---------|
| `local_demo.h` | Local `#include` demo |
| `math_utils.h` / `math_utils.c` | Shared math API |
| `greeter.h` / `greeter.c` | Greeting module |
| `stats.h` / `stats.c` | Statistics helper |

---

## Optional practice projects

Separate mini projects live in `../C-Projects/`:

- `Calculator.c`
- `Number-Guessing-Game.c`
- `Unit-Converter.c`
- `Student-Grade-System.c`
- `Swap-Two-Numbers.c`
- `Reversing-Two-Numbers.c`
- `Banking-System.c`
- `Library-Management-System.c`
- `File-Encryption-Tool.c`
- `Contact-Manager.c`
- `Mini-Database-Engine.c`
- `HTTP-Server.c`
- `Linux-Shell.c`
- `Chat-Application.c`
- `Memory-Allocator.c`
- `Compiler-Mini-Project.c`

---

## Folder name notes

These directory names match your original layout (you may rename later):

- `05-Condtional-Statements` → Conditional
- `10-Structurs&Unions` → Structures & Unions

---

## Audit status

| Check | Status |
|-------|--------|
| All 18 module directories present | OK |
| Every syllabus topic has a dedicated `.c` lesson | OK |
| Module 16 = multithreading (not advanced C) | OK |
| Module 18 = advanced C topics | OK |
| No empty tutorial modules | OK |

*Last audited: course build complete.*
