#include <stdio.h>
#include <stdlib.h>

int diagonalSum(int** mat, int matSize) {
    int sum = 0;
    int n = matSize;

    for (int i = 0; i < n; i++) {
        sum += mat[i][i];           
        sum += mat[i][n - 1 - i];   
    }

    if (n % 2 == 1) {
        sum -= mat[n / 2][n / 2];
    }

    return sum;
}

int main() {
    int n;

    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    int** mat = (int**)malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++) {
        mat[i] = (int*)malloc(n * sizeof(int));
    }

    printf("\nEnter matrix elements:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Enter mat[%d][%d] :", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    int result = diagonalSum(mat, n);

    printf("\nDiagonal Sum: %d\n", result);

    for (int i = 0; i < n; i++) {
        free(mat[i]);
    }
    free(mat);

    return 0;
}