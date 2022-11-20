#include<iostream>
using namespace std;

int arraysum(int a[] , int size){
     

     if(size==0){
        return 0;
     }

   if(size==1){
    return a[0];
   }

    int ans =  a[0] + arraysum(a+1,size-1);
    return ans;
}


int main(){
    int a[] = {9,1,20,15};
    int size = 4;

    cout<< arraysum(a,size) ;
}