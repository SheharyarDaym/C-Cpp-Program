/*  Create a structure type "Book" with name, price and number of pages and 
    its attributes.
*/

#include<stdio.h>
#include<string.h>
int main(){
    struct Book{
        char name[20];
        float price;
        int no_of_pages;
    }a,b,c;

    
    strcpy(a.name,"Al-Chemist");
    a.price = 50.05;
    a.no_of_pages = 300;
    printf("Name: %s\n", a.name);
    printf("Price: %.2f\n", a.price);
    printf("Number of pages: %d\n\n", a.no_of_pages);

    strcpy(b.name,"Book Theif");
    b.price = 20.23;
    b.no_of_pages = 250;
    printf("Name: %s\n", b.name);
    printf("Price: %.2f\n", b.price);
    printf("Number of pages: %d\n\n", b.no_of_pages);
    
    strcpy(c.name,"Rich Dad Poor Dad");
    c.price = 30.23;
    c.no_of_pages = 220;
    printf("Name: %s\n", c.name);
    printf("Price: %.2f\n", c.price);
    printf("Number of pages: %d\n", c.no_of_pages);



    return 0;
}