#include <stdio.h>

// Function to calculate determinant
float determinant(float matrix[10][10], int n) {
    float det = 0, submatrix[10][10];
    int sign = 1;

    if (n == 1)
        return matrix[0][0];

    for (int x = 0; x < n; x++) {
        int subi = 0;
        for (int i = 1; i < n; i++) {
            int subj = 0;
            for (int j = 0; j < n; j++) {
                if (j == x)
                    continue;
                submatrix[subi][subj] = matrix[i][j];
                subj++;
            }
            subi++;
        }
        det += sign * matrix[0][x] * determinant(submatrix, n - 1);
        sign = -sign;
    }
    return det;
}

int main() {
    int n, m;
    printf("Enter the number of Rows: ");
    scanf("%d", &n);
    printf("Enter the number of Columns: ");
    scanf("%d", &m);

    if (n <= 0 || m <= 0) {
        printf("Invalid matrix dimensions.\n");
        return 1;
    }

    float matrix[10][10];
    printf("\nEnter %d elements of the %dx%d matrix:\n", n * m, n, m);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%f", &matrix[i][j]);

    int is_null = 1;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (matrix[i][j] != 0)
                is_null = 0;

    if (is_null) {
        printf("\nResult: It is a **Null Matrix (Zero Matrix)**.\n");
        return 0;
    }

    if (n == 1 && m > 1)
        printf("\nIt is a Row Matrix.\n");
    else if (m == 1 && n > 1)
        printf("\nIt is a Column Matrix.\n");
    else if (n != m) {
        printf("\nResult: **Rectangular Matrix (Non-Square)**.\n");
        return 0;
    }

    printf("\nResult: **Square Matrix Found.**\n");

    int is_identity = 1, is_diagonal = 1, is_scalar = 1;
    int uppertriangular = 1, lowertriangular = 1;
    int is_symmetric = 1, is_skew_symmetric = 1;

    float scalar_value = matrix[0][0];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                if (matrix[i][j] != 1)
                    is_identity = 0;
                if (matrix[i][j] != scalar_value)
                    is_scalar = 0;
            } else {
                if (matrix[i][j] != 0)
                    is_diagonal = 0;
            }

            if (i > j && matrix[i][j] != 0)
                lowertriangular = 0;
            if (i < j && matrix[i][j] != 0)
                uppertriangular = 0;

            if (matrix[i][j] != matrix[j][i])
                is_symmetric = 0;
            if (matrix[i][j] != -matrix[j][i])
                is_skew_symmetric = 0;
        }
    }

    if (is_identity)
        printf("It is an **Identity Matrix.**\n");
    else if (is_scalar)
        printf("It is a **Scalar Matrix.**\n");
    else if (is_diagonal)
        printf("It is a **Diagonal Matrix.**\n");
    else if (uppertriangular)
        printf("It is an **Upper Triangular Matrix.**\n");
    else if (lowertriangular)
        printf("It is a **Lower Triangular Matrix.**\n");

    if (is_symmetric)
        printf("It is a **Symmetric Matrix.**\n");
    else if (is_skew_symmetric)
        printf("It is a **Skew-Symmetric Matrix.**\n");

    float det = determinant(matrix, n);
    printf("Determinant = %.2f\n", det);
    if (det == 0)
        printf("Matrix is **Singular.**\n");
    else
        printf("Matrix is **Non-Singular.**\n");

    float matrix2[10][10];
    printf("\nEnter %d elements of Matrix 2 (%dx%d):\n", n * m, n, m);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%f", &matrix2[i][j]);

    int equal_count = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (matrix[i][j] == matrix2[i][j])
                equal_count++;

    if (equal_count == n * m)
        printf("\nMatrix 1 is equal to Matrix 2.\n");
    else
        printf("\nMatrix 1 is not equal to Matrix 2.\n");

    float result[10][10] = {0};
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            for (int k = 0; k < n; k++)
                result[i][j] += matrix[i][k] * matrix[k][j];

    int is_idempotent = 1, zero_count = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            if (result[i][j] != matrix[i][j])
                is_idempotent = 0;
            if (result[i][j] == 0)
                zero_count++;
        }

    if (is_idempotent)
        printf("\nIt is an **Idempotent Matrix (A² = A).**\n");
    if (zero_count == n * n)
        printf("It is a **Nilpotent Matrix (A² = 0).**\n");

    return 0;
}
