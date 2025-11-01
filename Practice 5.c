#include <stdio.h>
#define SIZE 3
int compareLayers(int layer1[SIZE][SIZE], int layer2[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (layer1[i][j] != layer2[i][j]) {
                return 0;
            }
        }
    }
    return 1; 
}
int main() {
    int arr[SIZE][SIZE][SIZE];
    int i, j, k;
    

    printf("Enter elements for 3×3×3 array:\n");
    for (i = 0; i < SIZE; i++) {
        printf("\n--- Layer %d ---\n", i + 1);
        for (j = 0; j < SIZE; j++) {
            for (k = 0; k < SIZE; k++) {
                printf("arr[%d][%d][%d] = ", i, j, k);
                scanf("%d", &arr[i][j][k]);
            }
        }
    }
    printf("\n----- You Entered -----\n");
    for (i = 0; i < SIZE; i++) {
        printf("\nLayer %d:\n", i + 1);
        for (j = 0; j < SIZE; j++) {
            for (k = 0; k < SIZE; k++) {
                printf("%4d", arr[i][j][k]);
            }
            printf("\n");
        }
    }
    printf("\n===== Layer Comparison Report =====\n");
    for (i = 0; i < SIZE - 1; i++) {
        for (j = i + 1; j < SIZE; j++) {
            int identical = compareLayers(arr[i], arr[j]);
            if (identical)
                printf("✅ Layer %d and Layer %d are IDENTICAL.\n", i + 1, j + 1);
            else
                printf("❌ Layer %d and Layer %d are DISTINCT.\n", i + 1, j + 1);
        }
    }
    return 0;
}