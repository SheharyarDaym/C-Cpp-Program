#include<stdio.h>

int main(){
	int n;
	printf("Enter size of array: ");
	scanf("%d", &n);
	int arr[n];
	printf("Enter array: \n");
	for(int i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	
	// frequency
	for(int i=0; i<n; i++){
		int count=0;
		for(int j=0; j<n; j++){
			if(arr[i]==arr[j]){
				count++;
			}
		}
		
		printf("Frequency of %d is %d\n", arr[i], count);		
	}
	 
	
	return 0;
}