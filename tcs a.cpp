#include <stdio.h>
#include <stdlib.h>

#define MAX 50

// Directions for moving forward, right, left, and backward
int directions[4][2];

// Function to check if a position is within the grid and is 0
int is_valid(int x, int y, int M, int N, int grid[MAX][MAX], int visited[MAX][MAX]) {
    return (x >= 0 && x < M && y >= 0 && y < N && grid[x][y] == 0 && !visited[x][y]);
}

// Function to solve the problem using BFS
int minimum_moves(int grid[MAX][MAX], int M, int N, int sx, int sy, int dx, int dy, int move_x, int move_y) {
    // Initialize the directions based on the move rule
    directions[0][0] = move_x; directions[0][1] = move_y; // forward
    directions[1][0] = move_y; directions[1][1] = -move_x; // right
    directions[2][0] = -move_y; directions[2][1] = move_x; // left
    directions[3][0] = -move_x; directions[3][1] = -move_y; // backward

    int visited[MAX][MAX] = {0};
    int queue[MAX * MAX][3]; // queue to store x, y and move count
    int front = 0, rear = 0;

    // Start from the source cell
    queue[rear][0] = sx;
    queue[rear][1] = sy;
    queue[rear][2] = 0; // initial move count
    rear++;
    visited[sx][sy] = 1;

    while (front < rear) {
        int x = queue[front][0];
        int y = queue[front][1];
        int moves = queue[front][2];
        front++;

        if (x == dx && y == dy) {
            return moves;
        }

        for (int i = 0; i < 4; i++) {
            int new_x = x + directions[i][0];
            int new_y = y + directions[i][1];

            if (is_valid(new_x, new_y, M, N, grid, visited)) {
                queue[rear][0] = new_x;
                queue[rear][1] = new_y;
                queue[rear][2] = moves + 1;
                rear++;
                visited[new_x][new_y] = 1;
            }
        }
    }

    return -1; // If destination is not reachable
}

int main() {
    int M, N;
    scanf("%d %d", &M, &N);

    int grid[MAX][MAX];
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &grid[i][j]);
        }
    }

    int sx, sy, dx, dy, move_x, move_y;
    scanf("%d %d", &sx, &sy);
    scanf("%d %d", &dx, &dy);
    scanf("%d %d", &move_x, &move_y);

    int result = minimum_moves(grid, M, N, sx, sy, dx, dy, move_x, move_y);
    printf("%d\n", result);

    return 0;
}
