/*  2D Array Concept
   => 2D array works like matric such that 2x2 matrix
   => 2x2 array can initialized like array[2][2]
   => 2x3 => array[2][3]
   => 3x2 => array[3][2]
   => 3x3 => array[3][3]
*/


#include<stdio.h>
int main(){
    int array[3][2]={{2,3},
                     {6,7},
                     {5,9}};
                     
    printf("%d", array[2][1]);
    return 0;
}