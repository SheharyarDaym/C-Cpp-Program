#include<iostream>
using namespace std;
int main(){

   int i,j;
   cout<<"Enter any number! ";
   cin>>j;

   for (i=1; i<=10; i++){
    cout<<j<<"*"<<i<<"="<<i*j<<endl;
   }

    return 0;
}