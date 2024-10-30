// Palindrome String

#include<stdio.h>
#include<string.h>
int main(){
    char name[100];
	printf("Write here: \n");
	scanf("%s", name);

	int n = strlen(name);

    for(int i=0, j=n-1; name[i]!='\0';j--, i++){
        if(i==j){
            break;   // this comdition is not compulsory
        }
        if(name[i]!=name[j] ){
            printf("Not Palindrome! ");

            return 0;
        }                
    }
    printf("Palindrome! ");

    return 0;
}

