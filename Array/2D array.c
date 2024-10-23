// Store 3 subjects marks of 2 students..
// Using 2D array...

#include<stdio.h>
int main(){
    // 2x3
    int marks[2][3]; // ---|---
    // 1st student marks..
    marks[0][0]=80;
    marks[0][1]=50;
    marks[0][2]=60;

    // 2nd student marks..
    marks[1][0]=55;
    marks[1][1]=65;
    marks[1][2]=98;


    printf("marks of student : %d ", marks[0][2] );


    return 0;
}