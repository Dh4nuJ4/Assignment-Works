#include <stdio.h>

#define MAX 100  // Define the maximum size of the grid

// Declare the grid and dp (dynamic programming) arrays
int grid[MAX][MAX];
long long dp[MAX][MAX];

int main() {
    int N, M;  // Declare variables to store the number of rows and columns
    printf("Enter the number of rows (N) and columns (M): ");
    scanf("%d %d", &N, &M);  // Read the number of rows and columns from the user

    printf("Enter the grid values:\n");
    // Read the grid values from the user
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            scanf("%d", &grid[i][j]);
        }
    }

    // Initialize the dp array with 0
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            dp[i][j] = 0;
        }
    }

    // If the starting cell is not blocked, set the number of ways to reach it to 1
    if(grid[0][0] == 0) {
        dp[0][0] = 1;
    }

    // Calculate the number of ways to reach each cell
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            // If the current cell is not blocked
            if(grid[i][j] == 0) {
                // If not at the first row, add the number of ways from the cell above
                if(i-1 >= 0) {
                    int k = i-1;
                    // Skip over blocked cells
                    while(k >= 0 && grid[k][j] == 1) {
                        k--;
                    }
                    // If there is an unblocked cell above, add the number of ways to reach it
                    if(k >= 0) {
                        dp[i][j] += dp[k][j];
                    }
                }
                // If not at the first column, add the number of ways from the cell on the left
                if(j-1 >= 0) {
                    int k = j-1;
                    // Skip over blocked cells
                    while(k >= 0 && grid[i][k] == 1) {
                        k--;
                    }
                    // If there is an unblocked cell on the left, add the number of ways to reach it
                    if(k >= 0) {
                        dp[i][j] += dp[i][k];
                    }
                }
            }
        }
    }

    // Print the number of ways to reach the bottom-right cell from the top-left cell
    printf("The number of ways to reach (%d,%d) from (1,1) is %lld\n", N, M, dp[N-1][M-1]);

    return 0;
}
