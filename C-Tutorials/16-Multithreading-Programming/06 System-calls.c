/*
 * Topic   : System Calls
 * Module  : 16 - Multithreading Programming
 *
 * System calls are the interface from user space to the OS kernel.
 * C library functions (open/read/write/close) often wrap syscalls.
 *
 * Build:
 *   gcc "06 System-calls.c" -o mt06
 */

#include <stdio.h>
#include <string.h>

#ifdef _WIN32
#include <io.h>
#include <fcntl.h>
#include <sys/stat.h>
#define OPEN_FLAGS (_O_CREAT | _O_RDWR | _O_TRUNC)
#define OPEN_MODE  (_S_IREAD | _S_IWRITE)
#else
#include <fcntl.h>
#include <unistd.h>
#define OPEN_FLAGS (O_CREAT | O_RDWR | O_TRUNC)
#define OPEN_MODE  0644
#endif

int main(void)
{
    const char *filename = "syscall_demo.txt";
    const char *message = "Written via low-level file API\n";
    char buffer[64];
#ifdef _WIN32
    int fd;
#else
    int fd;
    ssize_t n;
#endif

    printf("=== System Calls ===\n\n");

#ifdef _WIN32
    fd = _open(filename, OPEN_FLAGS, OPEN_MODE);
#else
    fd = open(filename, OPEN_FLAGS, OPEN_MODE);
#endif

    if (fd < 0)
    {
        printf("Failed to open file.\n");
        return 1;
    }

#ifdef _WIN32
    int bytes;
    _write(fd, message, (unsigned int)strlen(message));
    _lseek(fd, 0, SEEK_SET);
    bytes = _read(fd, buffer, sizeof buffer - 1);
    if (bytes > 0)
        buffer[bytes] = '\0';
    else
        buffer[0] = '\0';
    _close(fd);
#else
    write(fd, message, strlen(message));
    lseek(fd, 0, SEEK_SET);
    n = read(fd, buffer, sizeof buffer - 1);
    buffer[n] = '\0';
    close(fd);
#endif

    printf("Read back: %s", buffer);
    printf("File \"%s\" created in current directory.\n", filename);

    return 0;
}
