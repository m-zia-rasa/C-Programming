/*
 * Project : HTTP Server
 * Level   : Advanced
 *
 * This is a small cross-platform HTTP server. It accepts one request at a time
 * and returns a fixed HTML page. Stop it with Ctrl+C.
 *
 * Build on Windows:
 *   cl /W4 /Fe:http-server.exe HTTP-Server.c ws2_32.lib
 *
 * Build on Linux/macOS:
 *   gcc -Wall -Wextra HTTP-Server.c -o http-server
 */

#include <stdio.h>
#include <string.h>

#ifdef _WIN32
#include <winsock2.h>
#include <ws2tcpip.h>
typedef SOCKET socket_type;
#define CLOSE_SOCKET closesocket
#else
#include <arpa/inet.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <unistd.h>
typedef int socket_type;
#define INVALID_SOCKET (-1)
#define SOCKET_ERROR (-1)
#define CLOSE_SOCKET close
#endif

#define PORT 8080
#define BUFFER_SIZE 2048

static int start_network(void)
{
#ifdef _WIN32
    WSADATA data;
    return WSAStartup(MAKEWORD(2, 2), &data) == 0;
#else
    return 1;
#endif
}

static void stop_network(void)
{
#ifdef _WIN32
    WSACleanup();
#endif
}

int main(void)
{
    socket_type server_socket;
    struct sockaddr_in address;
    const char response[] =
        "HTTP/1.1 200 OK\r\n"
        "Content-Type: text/html\r\n"
        "Connection: close\r\n"
        "\r\n"
        "<!doctype html><html><body><h1>Hello from C</h1></body></html>\r\n";

    if (!start_network()) {
        printf("Network startup failed.\n");
        return 1;
    }

    server_socket = socket(AF_INET, SOCK_STREAM, 0);
    if (server_socket == INVALID_SOCKET) {
        printf("Could not create socket.\n");
        stop_network();
        return 1;
    }

    memset(&address, 0, sizeof address);
    address.sin_family = AF_INET;
    address.sin_addr.s_addr = htonl(INADDR_ANY);
    address.sin_port = htons(PORT);

    if (bind(server_socket, (struct sockaddr *)&address, sizeof address) == SOCKET_ERROR) {
        printf("Bind failed. Port %d may already be in use.\n", PORT);
        CLOSE_SOCKET(server_socket);
        stop_network();
        return 1;
    }

    if (listen(server_socket, 8) == SOCKET_ERROR) {
        printf("Listen failed.\n");
        CLOSE_SOCKET(server_socket);
        stop_network();
        return 1;
    }

    printf("HTTP server running at http://localhost:%d/\n", PORT);
    printf("Press Ctrl+C to stop.\n");

    for (;;) {
        char buffer[BUFFER_SIZE];
        socket_type client_socket = accept(server_socket, NULL, NULL);

        if (client_socket == INVALID_SOCKET) {
            continue;
        }

        recv(client_socket, buffer, sizeof buffer - 1, 0);
        send(client_socket, response, (int)strlen(response), 0);
        CLOSE_SOCKET(client_socket);
    }
}
