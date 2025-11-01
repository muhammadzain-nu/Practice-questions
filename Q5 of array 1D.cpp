#include <stdio.h>
int main(){
	int arr[10], i, min , max, difference;
	printf("Enter 10 Integers");
		for(i=0;i<10;i++){
		
			scanf(" %d", &arr[i]);
			}
			max=arr[0];
			min=arr[0];
			for(i=1;i<10;i++){
		if(arr[i]<arr[i+1]){
		min=arr[i];
		}
		if(arr[i]>arr[i+1]){
		max=arr[i];
		}
	}
	difference=max-min;
	printf("\n max = %d", max);
		printf("\n minimum = %d", min);
			printf("\n difference = %d", difference);
			return 0;
			}
		
