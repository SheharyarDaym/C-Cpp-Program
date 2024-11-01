#include<stdio.h>
#include<string.h>

int main(){
    typedef struct pokemon{
        char name[50];
        int age;
        int power;
    }pokemon;

    typedef struct legendary_pokemon{
        int extra_power;
        struct pokemon x;
    }legendary_pokemon;

    // typedef struct pokemon pokemon;
    // typedef struct legendary_pokemon legendary_pokemon;

    legendary_pokemon a;
    a.x.power=10;
    printf("%d", a.x.power);
    

    return 0;
}