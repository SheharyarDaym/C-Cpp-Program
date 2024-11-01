#include<stdio.h>
int main(){
    
    typedef struct person{
        int weight;
        int age;
    }person;

    person a;
    a.age = 10;
    a.weight= 50;
    person* x = &a;
    printf("%d ", x->age);
    

    return 0;
}