// Write a program to enter price of 3 items & print their final cost with gst..

#include<stdio.h>
int main(){
    int price[3];
    printf("Enter price: ");
    scanf("%d", &price[0]);
    scanf("%d", &price[1]);
    scanf("%d", &price[2]);

    printf("The price of 1st item is: %f\n", price[0]+(0.18*price[0]));
    printf("The price of 1st item is: %f\n", price[1]+(0.18*price[1]));
    printf("The price of 1st item is: %f\n", price[2]+(0.18*price[2]));

    return 0;
}