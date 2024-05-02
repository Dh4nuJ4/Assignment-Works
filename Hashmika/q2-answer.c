#include <stdio.h>

#define MAX 100

int grid[MAX][MAX];
long long dp[MAX][MAX];

int main() {
    int N, M;
    printf("Enter the number of rows (N) and columns (M): ");
    scanf("%d %d", &N, &M);

    printf("Enter the grid values:\n");
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            scanf("%d", &grid[i][j]);
        }
    }

    // Initialize the dp array
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            dp[i][j] = 0;
        }
    }

    // If the starting cell is not blocked
    if(grid[0][0] == 0) {
        dp[0][0] = 1;
    }

    // Calculate the number of ways for each cell
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            // If the current cell is not blocked
            if(grid[i][j] == 0) {
                // If not at the first row, add the number of ways from the cell above
                if(i-1 >= 0) {
                    int k = i-1;
                    while(k >= 0 && grid[k][j] == 1) {
                        k--;
                    }
                    if(k >= 0) {
                        dp[i][j] += dp[k][j];
                    }
                }
                // If not at the first column, add the number of ways from the cell on the left
                if(j-1 >= 0) {
                    int k = j-1;
                    while(k >= 0 && grid[i][k] == 1) {
                        k--;
                    }
                    if(k >= 0) {
                        dp[i][j] += dp[i][k];
                    }
                }
            }
        }
    }

    printf("The number of ways to reach (%d,%d) from (1,1) is %lld\n", N, M, dp[N-1][M-1]);

    return 0;
}