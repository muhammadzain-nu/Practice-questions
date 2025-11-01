#include <stdio.h>
int main(){
	int n[10];
	int i;
	int find=0;
	int index;
	int count=0;
	printf("Enter 10 Numbers");
	for(i=0;i<10;i++){
		scanf("%d", &n[i]);
	}
	printf("\nWhat numbers are you looking for");
	scanf("%d", &find);
	for(i=0;i<10;i++){
		if(find==n[i]){
			count++;
			printf("\nNumber found at %d", i);
		}
	}
	if(count>0)
	printf("\nThe number is present in %d containers", count);
	else
	printf("\nNo number found");
	return 0;
}