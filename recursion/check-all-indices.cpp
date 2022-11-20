#include<iostream>
using namespace std;

int findallindices(int a[] , int size , int x ,int output[]){
     if(size==0){
        return 0;
     }

     int smalleroutput = findallindices(a+1 , size-1 , x , output);
     if(a[0]==x){
        output[0] = 0;
     }

    


}



int main(){

}