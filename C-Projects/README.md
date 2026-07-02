# C Projects

Single-file C projects for practicing the tutorial modules. Each file contains
a header comment with its level, purpose, and build command.

## Beginner

- `Calculator.c`
- `Number-Guessing-Game.c`
- `Unit-Converter.c`
- `Student-Grade-System.c`
- `Swap-Two-Numbers.c`
- `Reversing-Two-Numbers.c`

## Intermediate

- `Banking-System.c`
- `Library-Management-System.c`
- `File-Encryption-Tool.c`
- `Contact-Manager.c`

## Advanced

- `Mini-Database-Engine.c`
- `HTTP-Server.c`
- `Linux-Shell.c`
- `Chat-Application.c`
- `Memory-Allocator.c`
- `Compiler-Mini-Project.c`

## Build examples

```cmd
cl /W4 /Fe:calculator.exe Calculator.c
cl /W4 /Fe:http-server.exe HTTP-Server.c ws2_32.lib
```

```bash
gcc -Wall -Wextra Calculator.c -o calculator
gcc -Wall -Wextra HTTP-Server.c -o http-server
```
