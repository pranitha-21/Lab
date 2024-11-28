#include <stdio.h>
#include <stdlib.h>

int main() {
    int m1, n1, m2, n2, i, j, k;

    printf("Enter the dimensions of the first matrix (m1 x n1): ");
    scanf("%d %d", &m1, &n1);

    printf("Enter the dimensions of the second matrix (m2 x n2): ");
    scanf("%d %d", &m2, &n2);

    if (n1 != m2) {
        printf("Matrix multiplication not possible.\n");
        return 1;
    }

    int **mat1 = (int **)malloc(m1 * sizeof(int *));
    for (i = 0; i < m1; i++) {
        mat1[i] = (int *)malloc(n1 * sizeof(int));
    }

    int **mat2 = (int **)malloc(m2 * sizeof(int *));
    for (i = 0; i < m2; i++) {
        mat2[i] = (int *)malloc(n2 * sizeof(int));
    }

    int **result = (int **)malloc(m1 * sizeof(int *));
    for (i = 0; i < m1; i++) {
        result[i] = (int *)malloc(n2 * sizeof(int));
    }
 printf("Enter elements of the first matrix:\n");
    for (i = 0; i < m1; i++) {
        for (j = 0; j < n1; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter elements of the second matrix:\n");
    for (i = 0; i < m2; i++) {
        for (j = 0; j < n2; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    for (i = 0; i < m1; i++) {
        for (j = 0; j < n2; j++) {
            result[i][j] = 0;
            for (k = 0; k < n1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    printf("Product of the matrices:\n");
    for (i = 0; i < m1; i++) {
        for (j = 0; j < n2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
for (i = 0; i < m1; i++) {
        free(mat1[i]);
    }
    free(mat1);

    for (i = 0; i < m2; i++) {
        free(mat2[i]);
    }
    free(mat2);

    for (i = 0; i < m1; i++) {
        free(result[i]);
    }
    free(result);

    return 0;
}
