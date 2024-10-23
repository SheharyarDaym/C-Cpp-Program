// Check whether the matrix is identity or not

#include<iostream>
#include<stdbool.h>
using namespace std;

bool checkIdentity(int **arr, int n){
    int count = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j && arr[i][j]==1){
                count++;
            }
        }
    }
    if(count == n) return true;
    return false;
}

bool checkDiagonal(int **arr, int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i!=j && arr[i][j]!=0){
                return false; 
            }
        }
    }
    return true;
} 

int main(){
    int n;
    cout << "Enter size of array here: ";
    cin >> n;
    int **arr = new int*[n];
    for(int i=0; i<n; i++){
        arr[i] = new int[n];
    }
    cout << "Enter array here: " << endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }

    if(checkDiagonal(arr,n) == true){
        if(checkIdentity(arr,n) == true) cout << "Identity Matrix" ;
        else cout << "Matrix is Diagonal but not Identity " << endl;
    }
    else{
        cout << "Matrix is neither Diagonal nor Identity " << endl;
    }

    for(int i=0; i<n; i++){
        delete[] arr[i];
    }
    delete[] arr;
    arr = nullptr;
    return 0;
}