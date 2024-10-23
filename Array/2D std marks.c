// 2D array to enter student marks in subjects..

#include<stdio.h>
int main(){
    int n_student=2;
    int n_subject=3;

    int marks[2][3];

    // Input
    for(int i=0; i<n_student; i++){    // for number of students
        for(int j=0; j<n_subject; j++){    // for number of subjects
            printf("Enter marks of %d student of %d subject: \n", i+1, j+1);
            scanf("%d", &marks[i][j]);
        }
    }

    // Output
    for(int i=0; i<=n_student; i++){    
        for(int j=0; j<=n_subject; j++){    
            printf("Marks of %d student of %d subject: %d \n", i+1, j+1, marks[i][j]);
        }
    }

    


    return 0;
}