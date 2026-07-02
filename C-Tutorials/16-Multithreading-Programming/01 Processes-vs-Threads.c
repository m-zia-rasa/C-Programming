/*
 * Topic   : Processes vs Threads
 * Module  : 16 - Multithreading Programming
 *
 * Process: own memory space, heavier to create (fork/exec on Unix, CreateProcess on Windows)
 * Thread:  shares memory inside a process, lighter to create
 *
 * pthread code requires POSIX environment (Linux, macOS, WSL, MSYS2 MinGW):
 *   gcc -pthread "01 Processes-vs-Threads.c" -o mt01 -lpthread
 *
 * This file explains concepts and prints IDs when pthread is available.
 */

#include <stdio.h>

#ifdef _WIN32
#include <windows.h>
#include <process.h>
#else
#include <unistd.h>
#include <pthread.h>
#endif

int main(void)
{
    printf("=== Processes vs Threads ===\n\n");

    printf("Process = program in execution with its own resources.\n");
    printf("Thread  = execution unit inside a process (shared heap/global data).\n\n");

#ifdef _WIN32
    printf("Windows process ID: %lu\n", GetCurrentProcessId());
    printf("Windows thread ID : %lu\n", GetCurrentThreadId());
    printf("\nFor pthread lessons, build with MSYS2/WSL using gcc -pthread.\n");
#else
    printf("Unix process ID (pid): %d\n", (int)getpid());
    printf("Main pthread ID      : %p\n", (void *)pthread_self());
    printf("\nCreating a process copies memory; creating a thread shares it.\n");
#endif

    return 0;
}
