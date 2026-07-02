/*
 * Topic   : Graphs
 * Module  : 14 - Data Structures
 *
 * Graph = vertices + edges. Represented here with an adjacency matrix.
 * Demonstrates Breadth-First Search (BFS) and Depth-First Search (DFS).
 *
 * Compile: gcc "08 Graphs.c" -o ds08
 */

#include <stdio.h>

#define VERTICES 5

void bfs(const int graph[VERTICES][VERTICES], int start)
{
    int visited[VERTICES] = {0};
    int queue[VERTICES];
    int front = 0;
    int rear = 0;
    int current;
    int i;

    visited[start] = 1;
    queue[rear++] = start;

    printf("BFS: ");
    while (front < rear)
    {
        current = queue[front++];
        printf("%d ", current);

        for (i = 0; i < VERTICES; i++)
        {
            if (graph[current][i] && !visited[i])
            {
                visited[i] = 1;
                queue[rear++] = i;
            }
        }
    }
    printf("\n");
}

void dfs_visit(const int graph[VERTICES][VERTICES], int v, int visited[])
{
    int i;
    visited[v] = 1;
    printf("%d ", v);
    for (i = 0; i < VERTICES; i++)
    {
        if (graph[v][i] && !visited[i])
            dfs_visit(graph, i, visited);
    }
}

void dfs(const int graph[VERTICES][VERTICES], int start)
{
    int visited[VERTICES] = {0};
    printf("DFS: ");
    dfs_visit(graph, start, visited);
    printf("\n");
}

int main(void)
{
    /*
     * 0 -- 1 -- 2
     *      |
     *      3 -- 4
     */
    const int graph[VERTICES][VERTICES] = {
        {0, 1, 0, 0, 0},
        {1, 0, 1, 1, 0},
        {0, 1, 0, 0, 0},
        {0, 1, 0, 0, 1},
        {0, 0, 0, 1, 0}
    };

    printf("=== Graphs ===\n\n");
    bfs(graph, 0);
    dfs(graph, 0);

    return 0;
}
