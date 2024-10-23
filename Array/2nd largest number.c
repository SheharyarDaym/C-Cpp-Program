// Write an array to print the 2nd largest number in an array..

#include<stdio.h>
int main() {
    int n;
    printf("Enter length of array here: ");
    scanf("%d", &n);

	int arr[n];
    printf("Enter elements of array here: \n");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
	int max = arr[0];
	int index = 0;

	for (int i = 0; i < n; i++) {   // to find the largest number
		if (arr[i] > max) {
			max = arr[i];
			index=i;                // to find the index of largest number
		}
		
	}
	
	// printf("%d\n", index);
	
	int _2max = arr[0];
	for (int j = 0; j < n; j++) {
		if (arr[j] > _2max) {
			if (arr[j] == arr[index]) {  // to skip the largest number and it will come to the 2nd largest
				continue;
			}
			_2max = arr[j];
		}
	}
	printf("The 2nd Largest number is: %d", _2max);




	return 0;
}

