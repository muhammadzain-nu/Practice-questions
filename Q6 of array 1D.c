#include <stdio.h>
int main() {
    char str[100];
    int i;
    int countConsonents=0;
    int countVowels=0;

    printf("Enter a sentence: ");
    scanf("%[^\n]", str);
    for(i=0;str[i]!='\0';i++){
    	if(str[i]=='a' || str[i]=='A'|| str[i]=='e' || str[i]=='E'||str[i]=='i' || str[i]=='I'||str[i]=='o' || str[i]=='O'||str[i]=='u' || str[i]=='U'){
    	countVowels++;
		}else{
    	countConsonents++;
		}	
	}
	printf("Consonents=%d\tVowels=%d", countConsonents, countVowels);
	return 0;
}