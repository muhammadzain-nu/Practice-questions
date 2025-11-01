#include <stdio.h>
#define size 3

int main() {
    int arr[size][size][size];
    int i, j, k;
    int sumof2d;
    int totalSum = 0;
    int count = 0;

    printf("Enter elements for 3×3×3 array:\n");
    for (i = 0; i < size; i++) {
        printf("\n--- Layer %d ---\n", i + 1);
        for (j = 0; j < size; j++) {
            for (k = 0; k < size; k++) {
                printf("arr[%d][%d][%d] = ", i, j, k);
                scanf("%d", &arr[i][j][k]);
            }
        }
    }

    printf("\n----- You Entered -----\n");
    for (i = 0; i < size; i++) {
        printf("\nLayer %d:\n", i + 1);
        for (j = 0; j < size; j++) {
            for (k = 0; k < size; k++) {
                printf("%4d", arr[i][j][k]);
            }
            printf("\n");
        }
    }

    printf("\n---- 2D Layer-wise Sums ----\n");
    for (i = 0; i < size; i++) {
        sumof2d = 0;
        printf("\nLayer %d:\n", i + 1);
        for (j = 0; j < size; j++) {
            for (k = 0; k < size; k++) {
                printf("%4d", arr[i][j][k]);
                sumof2d += arr[i][j][k];
            }
            printf("\n");
        }
        totalSum += sumof2d;
        count += size * size;
        printf("Sum of Layer %d = %d\n", i + 1, sumof2d);
        printf("Average of Layer %d = %.2f\n", i + 1, (float)sumof2d / (size * size));
    }

    printf("\n===== Overall Data Insights =====\n");
    printf("Total elements processed: %d\n", count);
    printf("Grand Total of all elements: %d\n", totalSum);
    printf("Overall Average: %.2f\n", (float)totalSum / count);

    return 0;
}
