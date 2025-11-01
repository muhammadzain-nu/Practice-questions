#include <stdio.h>
int main(){
	int arr[5], i, temp[5], j=4;
	printf("Enter 5 Integers");
		for(i=0;i<5;i++){
		
			scanf(" %d", &arr[i]);
			}
	for(i=0;i<5;i++){
		temp[j]=arr[i];
		j--;
	}
	for(i=0;i<5;i++){
		arr[i]=temp[i];
	}
	for(i=0;i<5;i++){
			printf(" %d", arr[i]);
			}
	return 0;
}
