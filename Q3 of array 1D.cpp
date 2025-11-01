#include <stdio.h>
#define size 10
int main(){
	int marks;
	int fail[size]={0};
   int	pass[size]={0};
   int passsum=0, failsum=0;
   int passcount=0, failcount=0;
	int i=0;
	for(i=0;i<size;i++){
		printf("Enter the marks of Student %d ", i+1);
		scanf("%d", &marks);
		if(marks==-1){
			break;
		}
		if(marks>=5 && marks<=10){
			pass[passcount++]=marks;
			passsum+=marks;
			
		}else if(marks>=0 && marks <5){
			fail[failcount++]=marks;
			failsum+=marks;
		}else {
            printf("?? Invalid mark! Please enter a value between 0 and 10.\n");
            i--;
        }		
	}
	printf("====Quiz' Summary====");
	if(passcount>0)
	printf("\nAverage of Pass Students= %d", passsum/passcount);
else printf("\nNO pass marks included");
for (i = 0; i < passcount; i++) {
        printf("\n%d marks ", pass[i]);
    }
	printf("\nTotal Failed Students=%d", failcount);
	for(i=0;i<failcount;i++){
		printf("\n %d marks", fail[i]);
	}
	if(fail>0)
	printf("\nAverage of Student failed=%d", failsum/failcount);
	else printf("\nNo Failed marks Entered");
}