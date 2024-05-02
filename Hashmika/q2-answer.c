#include <stdio.h>

int main() {
    int N, M;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &N, &M);

    int grid[N][M];
    printf("Enter the grid values (0 or 1):\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%1d", &grid[i][j]);
        }
    }

    int dp[N][M];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            dp[i][j] = 0;
        }
    }

    if (grid[0][0] == 0) {
        dp[0][0] = 1;
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (grid[i][j] == 0) {
                if (i > 0) {
                    dp[i][j] += dp[i - 1][j];
                }
                if (j > 0) {
                    dp[i][j] += dp[i][j - 1];
                }
            }
        }
    }

    printf("The number of ways to reach the bottom-right cell is: %d\n", dp[N - 1][M - 1]);

    return 0;
}
