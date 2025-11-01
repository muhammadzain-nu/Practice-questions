#include <stdio.h>
#define max 3
void multiplication(int matrix[][max], int size, int matrix2[max][3]);
int main(){
	int arr[max][max];
	int row=0, column=0;
	printf("Enter the number Rows and column respectively");
	do{
		printf("\n---Rows and columns Must be equal---");
	scanf("%d%d", &row, &column);
	}while(row!=column || row>3 || column>3|| row<=0||column<=0);
	printf("\n_____Inputs for Matrix 1____\n");
	for(int i=0;i<row;i++){
		for(int j=0;j<column;j++){
			printf("\n %d x %d=", i, j);
			scanf("%d", &arr[i][j]);
		}
	}
	int x, y;
	
	int arr2[max][max];
	printf("\n_____Inputs for Matrix 2____\n");
	for(int i=0;i<row;i++){
		for(int j=0;j<column;j++){
			printf("\n %d x %d=", i, j);
			scanf("%d", &arr2[i][j]);
		}
	}
     multiplication(arr,row,arr2);
	
	
	
}
void multiplication(int matrix[][max], int size, int matrix2[][max]){
	int result[max][max]={0};
	for(int i=0; i<size;i++){
		for(int j=0; j<size;j++){
		for(int k=0; k<size;k++){
		result[i][j]+=matrix[i][k]*matrix2[k][j];
	}
	}
	}
	printf("\n----------Matrix 1----------\n");

	for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%4d", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n----Multiply by Matrix 2----\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%4d", matrix2[i][j]);
        }
        printf("\n");
    }
    printf("\n--------Is Equal to---------\n");

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%4d", result[i][j]);
        }
        printf("\n");
    }
}