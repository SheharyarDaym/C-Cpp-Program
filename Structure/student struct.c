// Student function structure...

#include<stdio.h>
#include<string.h>

struct student{
    int roll_no;
    float cgpa;
    char name[100];
};

int main(){
    struct student s1;
    s1.roll_no = 3214;
    s1.cgpa = 9.54;
    // s1.name="Sheharyar";
    // we can't change value of character array
    strcpy(s1.name,"Sheharyar");

    printf("Name is: %s\n", s1.name);
    printf("Roll_no is : %d\n", s1.roll_no);
    printf("CGPA is: %f\n", s1.cgpa);


    return 0;
}

