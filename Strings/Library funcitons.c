#include<stdio.h>
#include<string.h>

// strlen(str) >= count # of chars excluding '\0' ..
int lenght(){
    char name[100];
    printf("Enter here! ");
    gets(name);
    printf("%lu\n", strlen(name));
}

// strcpy(newstr,oldstr) >= copy value from old to new ..
int copy(){
    char oldstr[] = "Old";
    char newstr[] = "New";
    strcpy(oldstr,newstr);
    printf("%s\n", oldstr); 
}

// strcat(1st,2nd) >= concatenates 1st str with 2nd str ..
int merge(){
    char first[] = "Sheharyar ";
    char sec[] = " Daym ";
    strcat(first,sec);
    printf("%s\n", first);

}

// strcmp(1st,2nd) >= compare two strings
int compare(){
    char a[]="Apple";
    char b[]="Banana";
    printf("%d", strcmp(a,b));
    // it compares ascii of a and b.. 65-66 = -1
}

// Main Function
int main(){
    lenght();
    copy();
    merge();
    compare();

    return 0;
}