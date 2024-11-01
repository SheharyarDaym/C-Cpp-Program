/*  A record contains name of cricketer, his age, number of test matches 
    that he has played and the average runs that he has scored in each test 
    match. Create an array of structure to hold records of 20 such cricketers 
    and then write a program to read these records.
*/
#include<stdio.h>
#include<string.h>

int main(){
    typedef struct record{
        char name[20];
        int age;
        int no_of_matches;
        float avg_runs;
    }record;

    record arr[10];

    for(int i=0; i<10; i++){
        printf("Cricketer %d\n", i+1);
        printf("Enter name: ");
        scanf("%s", &arr[i].name);
        printf("Enter age: ");
        scanf("%d", &arr[i].age);
        printf("Enter number of matches that he has played: ");
        scanf("%d", &arr[i].no_of_matches);
        printf("Enter average: ");
        scanf("%f", &arr[i].avg_runs);
        printf("\n--------------------------------------------\n\n");
    }

    printf("HISTORY\n\n\n");

    for(int i=0; i<10; i++){
        printf("History of %d cricket\n", i+1);
        printf("Name: %s\n", arr[i].name);
        printf("Age: %d\n", arr[i].age);
        printf("No of matches: %d\n", arr[i].no_of_matches);
        printf("Average runs: %.2f\n", arr[i].avg_runs);
        printf("\n--------------------------------------------\n\n");
    }


    return 0;
}