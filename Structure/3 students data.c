// Write a program to store data of 3 students..

#include<stdio.h>
#include<string.h>

struct student{
    char name[100];
    int roll_no;
    float cgpa;
};

int main(){
    // Student 1
    struct student s1;
    s1.roll_no=1;
    s1.cgpa=7.8956;
    strcpy(s1.name,"Sheharyar");

    printf("Name of Student 1: %s\n", s1.name);
    printf("Roll number of Student 1: %d\n", s1.roll_no);
    printf("CGPA of Student 1: %f\n", s1.cgpa);

    // Student 2
    struct student s2;
    s2.roll_no=2;
    s2.cgpa=9.35632;
    strcpy(s2.name,"Khan");

    printf("Name of Student 2: %s\n", s2.name);
    printf("Roll number of Student 2: %d\n", s2.roll_no);
    printf("CGPA of Student 2: %f\n", s2.cgpa);

    // Student 3
    struct student s3;
    s3.roll_no=3;
    s3.cgpa=6.95463;
    strcpy(s3.name,"Daym");

    printf("Name of Student 3: %s\n", s3.name);
    printf("Roll number of Student 3: %d\n", s3.roll_no);
    printf("CGPA of Student 3: %f\n", s3.cgpa);


    return 0;
}
