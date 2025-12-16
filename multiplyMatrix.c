#include <stdio.h>
#include "function.c"

int main() {
    int m, n, x, y;
    
    printf("Enter the order of 1st matrix (rows columns): ");
    scanf("%d %d", &m, &n);
    int a[100][100]; // Using fixed size for function compatibility
    scan(m, n, a);
    
    printf("Enter the order of 2nd matrix (rows columns): ");
    scanf("%d %d", &x, &y);
    int b[100][100]; // Using fixed size for function compatibility
    scan(x, y, b);
    
    if (n == x) {
        int c[100][100] = {0}; // Initialize result matrix
        
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < y; j++) {
                for (int k = 0; k < n; k++) {
                    c[i][j] += a[i][k] * b[k][j];
                }
            }
        }
        
        printf("Result of matrix multiplication:\n");
        print(m, y, c);
    } else {
        printf("Matrix multiplication not possible!\n");
        printf("Number of columns in 1st matrix must equal number of rows in 2nd matrix.\n");
    }
    
    return 0;
}