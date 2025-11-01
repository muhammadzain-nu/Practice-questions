#include <stdio.h>

int main() {
    int arr[10];
    int seen[100] = {0};  
    
    printf("Enter 10 integers: ");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        if (seen[arr[i]] == 0) {
            seen[arr[i]] = 1; 
        } else {
            arr[i] = -1; 
        }
    }

    printf("Updated array:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}