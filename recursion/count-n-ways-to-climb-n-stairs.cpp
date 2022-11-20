#include<iostream>
using namespace std;

int countstairs(int n){

         if(n==0){
            return 1;
         }

         if(n==-1){
            return 0;
         }

    return countstairs(n-1) + countstairs(n-2);
}



int main(){

    int n;
    cin>>n;

    cout<< countstairs(n) ;
}