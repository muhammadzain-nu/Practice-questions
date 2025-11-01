#include <stdio.h>
int main(){
	int str[100];
	printf("ENter the Characters");
	scanf("%[^A-Za-z]", str);
	
	printf("The non Alphabetic characters entered are \n %s", str);
	return 0;

}
