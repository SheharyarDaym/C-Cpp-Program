#include<stdio.h>
#include<string.h>

typedef struct book{
    char name[50];
    float price;
    int pages;      
}book;

int main(){
    book a;
    strcpy(a.name,"Alchemist");
    a.pages = 10;
    a.price = 50.45;

    printf("%s\n",a.name);
    printf("%d\n",a.pages);
    printf("%.2f\n",a.price);

    book b;
    strcpy(b.name,"Book Theif");
    b.pages = 11;
    b.price = 70.45;

    printf("%s\n",b.name);
    printf("%d\n",b.pages);
    printf("%.2f\n",b.price);



    return 0;
}