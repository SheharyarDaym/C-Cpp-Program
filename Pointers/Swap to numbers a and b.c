#include<stdio.h>

int swap(int x, int y);
int _swap(int *x, int *y);

int main(){
    int a=3,b=5;
    _swap(&a,&b);
    printf(" \nNow:\na = %d\nb = %d", a,b);

    

    return 0;
}

int swap(int x, int y){
    int t = x;
    x = y;
    y = t;
    printf("a = %d\nb = %d", x,y);
}

int _swap(int *x, int *y){
    int t  = *x;
    *x = *y;
    *y = t;
        printf("a = %d\nb = %d", *x,*y);


}