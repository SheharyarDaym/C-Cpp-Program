#include<stdio.h>
int main(){
   int *ptr;
   int x;

   ptr  = &x;       // ptr address to x.
   *ptr = 0;        // value store on X.

   printf("x = %d\n", x);
   printf("*ptr = %d\n", *ptr);

   *ptr += 5;
   printf("x = %d\n", x);
   printf("*ptr = %d\n", *ptr);

   (*ptr)++;
   printf("x = %d\n", x);
   printf("*ptr = %d\n", *ptr);



    return 0;
}