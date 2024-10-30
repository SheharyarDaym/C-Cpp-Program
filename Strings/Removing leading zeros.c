//C Program To Remove Leading Zeros

#include<stdio.h>
#include<string.h>

int main(){
    char number[]="000120305";
    int count=0;

    for(int i=0; number[i]!='\0'; i++){
        if(number[i]>'0'){
            
                // printf("%c\n", number[i]);
            break;
            
        }
        else if(number[i]=='0'){
            
            }
        count = count + 1;
       
    }
    
    for (int j=count; number[j]!='\0'; j++){
        printf("%c", number[j]);
    }
    return 0;
}

// Professionaly XD once the king has been tested it must
/*
#include<stdio.h>
int main(){
    char number[]="001023456";
    int index=0;
    for(int i=0; number[i]!='\0'; i++){
        if(number[i]!='0'){
            break;
        }
        index++;
    }
    for(int i=index; number[i]!='\0'; i++){
        printf("%c", number[i]);
    }
    return 0;
}
*/